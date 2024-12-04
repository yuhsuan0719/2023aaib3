class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode();//�ǳƦn�s��listnode()
        ListNode * now = ans;//�{�b�n�B�z��listnode �O ans ���U��
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
                }else{ // �[��list2�p
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                now = now->next;
            }
        }
        return ans->next;
    }
};
