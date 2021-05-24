#include "dpType.h"
/**
* @brief 664.奇怪的打印机 <https://leetcode-cn.com/problems/strange-printer/>
*                 状态转移方程：f[i][j]=| f[i][j-1],                  s[i]=s[j] 两边一样的话只需要考虑如何尽快打完[i,j-1]
*                                      | min |j-1 f[i][k]+f[k+1][j], s[i]!=s[j]
*                                            |k=i
* @param s 待打印字符
*
* @return 最少打印次数
*/
int hard664_strangePrinter(string s){
    //官方题解抄的
    int len=s.size();
    if(len<2){
        return 1;
    }
    vector<vector<int>> dp(len,vector<int>(len));
    for (int i = len-1; i >=0; i--){
        dp[i][i]=1;
        for (int j = i+1; j < len; j++){
            if(s[i]==s[j]){
                dp[i][j]=dp[i][j-1];
            } else{
                int minSteps=INT16_MAX;
                for (int k = i; k < j; k++){
                    minSteps=min(minSteps,dp[i][k]+dp[k+1][j]);
                }
                dp[i][j]=minSteps;
            }
        }
    }
    return dp[0][len-1];
}