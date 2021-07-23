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
class Solution {
public:
    
    int getVal(string s){
        int sum = 0;
        int temp;
        for(int i = s.length()-1; i>=0; i--){
            if(s[i] == '1'){
                temp = pow(2,((s.length()-1) - i));
                sum = sum + temp;
            }
        }
        return sum;
    }
    
    
    
    
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
            int data  = head->val;
            char x;
            if(data == 1){
                x = '1';
            }
            else{
                x = '0';
            }
            head = head->next;
            s = s + x;
        }
        //cout<<s;
        
        return(getVal(s));
        
    }
};