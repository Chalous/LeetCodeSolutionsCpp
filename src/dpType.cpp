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

/**
* @brief 1787.使所有区间的异或结果为零 <https://leetcode-cn.com/problems/make-the-xor-of-all-segments-equal-to-zero/>
*             状态转移方程：
*                        
* @param s 待打印字符
*
* @return 最少打印次数
*/
static constexpr int MAXX=1<<10;
static constexpr int INFTY=INT_MAX/2;
int hard1787_minChanges(vector<int>& nums, int k){
    int n=nums.size();
    vector<int> f(MAXX,INFTY);
    f[0]=0;
    for (int i = 0; i < k; i++)
    {
        unordered_map<int,int> cnt;
        int size=0;
        for (int j = i; j < n; j+=k)
        {
            ++cnt[nums[j]];
            ++size;
        }
        int t2min=*min_element(f.begin(),f.end());//取容器中的最小值的指针
        vector<int> g(MAXX,t2min);
        for (int mask = 0; mask < MAXX; mask++)
        {
            for(auto node:cnt){
                g[mask]=min(g[mask],f[mask^node.first]-node.second);
            }
        }
        //加上size
        for_each(g.begin(),g.end(),[&](int& val){
            val+=size;
        });
        f=move(g);
    }
    return f[0];
}