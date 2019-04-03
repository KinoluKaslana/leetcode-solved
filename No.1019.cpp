vector<int> nextLargerNodes(ListNode* head) {
    struct T{
        int index;
        int Nu;
        int val;
    };
    vector<T>Li;
    while(head){
        Li.push_back({.val = head->val});
        head = head->next;
    }
    T e{-1,-1,Li[Li.size() - 1].val};
    vector<int> ans(Li.size());
    int i = 1;
    ans[Li.size() - 1] = 0;
    for(int i = Li.size() - 2;i >= 0;--i){
        e = Li[i + 1];
        if(e.val <= Li[i].val){
            if(e.Nu > Li[i].val){
                Li[i].Nu = e.Nu;
                Li[i].index = e.index;
                ans[i] = e.Nu;
            }
            else if(e.Nu <= Li[i].val && e.Nu){
                e = Li[e.index];
                int j = e.index;
                while(e.val <= Li[i].val){
                    if(!e.Nu)
                        goto T1;
                    j = e.index;
                    e = Li[e.index];
                }
                Li[i].Nu = e.val;
                Li[i].index = j;
                ans[i] = e.val;
            }
            else{
            T1:
                Li[i].Nu = 0;
                ans[i] = e.Nu;
            }
        }
        else{
            Li[i].Nu = e.val;
            Li[i].index = i+1;
            ans[i] = e.val;
        }
    }
    return ans;
}
//本题思路实际上就是以index为链表找到比下一个节点更大的节点的位置,然后再对比值,然后以此循环便可以找到比当前值更大的下一个节点的值.