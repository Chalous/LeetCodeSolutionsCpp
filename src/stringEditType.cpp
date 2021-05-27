#include "stringEditType.h"

/**
* @brief 1190.反转每对括号间子串 <https://leetcode-cn.com/problems/reverse-substrings-between-each-pair-of-parentheses/>
*    
*                        
* @param s 待反转字符串
*
* @return 处理后的字符串
*/
string medium1190_reverseParentheses(string s){
    int len=s.size();
    stack<int> brac_stk;
    vector<int> brac_pair(len);
    for (int i = 0; i < len; i++){
        if(s[i]=='('){
            brac_stk.push(i);
        } else if(s[i]==')'){
            int brac_left=brac_stk.top();
            brac_stk.pop();
            brac_pair[brac_left]=i;
            brac_pair[i]=brac_left;
        }
    }
    string ans;
    int index=0,step=1;
    while(index<len){
        if(s[index]=='('||s[index]==')'){
            index=brac_pair[index];
            step=-step;//变向
        } else{
            ans.push_back(s[index]);
        }
        index+=step;
    }   
    return ans;
}