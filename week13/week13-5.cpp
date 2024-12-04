class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode();//準備好新的listnode()
        ListNode * now = ans;//現在要處理的listnode 是 ans 往下走
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){
                now->next = list2;
                list2 = nullptr;
            }else if(list2==nullptr){
                now->next = list1;
                list1 = nullptr;
            }else{
                if( list1->val < list2->val ){
                    now->next = new ListNode(list1->val);
                    list1=list1->next;
                }else{ // 加邊list2小
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                now = now->next;
            }
        }
        return ans->next;
    }
};
