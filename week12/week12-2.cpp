//week12-2.cpp �ǲ߭p�e Linked List
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution{
public: //*�N�����,
    ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
        //ListNode* ans = list1; //�i�౵(�ª�)list1�L�h
        //ListNode* ans = new ListNode(99);//�i�}�s��(��99)
        ListNode* ans = new ListNode(99, new ListNode(90));
        //�}�s�� node �̭���99 �᭱�౵ �s��node�̦�90
        return ans;
    }
};
