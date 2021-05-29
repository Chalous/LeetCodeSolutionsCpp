#include "prefixSumType.h"

int medium560_subarraySum(vector<int>& nums, int k){
    unordered_map<int,int> pref_sum_cont;
    pref_sum_cont[0]=1;//如果pre=k，此时pre也算是一个等于k的子集，要加一的，不加就少算了pre本身。例子[3,3,3] k=3
    int pre=0,count=0;
    for(auto x:nums){
        pre+=x;
        if(pref_sum_cont.find(pre-k)!=pref_sum_cont.end()){
            count+=pref_sum_cont[pre-k];
        }
        pref_sum_cont[pre]++;
    }
    return count;
}

int hard1074_numSubmatrixSumTarget(vector<vector<int>>& matrix, int target){
    //个人认为最精简的官方题解
    // int ans=0;
    // int m=matrix.size(),n=matrix[0].size();
    // for (int i = 0; i < m; i++)//枚举上边界
    // {
    //     vector<int> sum(n);
    //     for(int j=i;j<m;j++){//枚举下边界
    //         for(int c=0;c<n;++c){
    //             sum[c]+=matrix[j][c];
    //         }
    //         //@@此处可以做成一个subarraySum的新函数
    //         unordered_map<int,int> mp;
    //         mp[0]=1;
    //         int count=0,pre=0;
    //         for(auto &x:sum){
    //             pre+=x;
    //             if(mp.find(pre-target)!=mp.end()){
    //                 count+=mp[pre-target];
    //             }
    //             mp[pre]++;
    //         }
    //         //@@新函数结尾
    //         ans+=count;
    //     }
    // }
    // return ans;

    //宫水三叶最贴近普通人思路的容易想出来的题解(也容易理解)
    int n=matrix.size(),m=matrix[0].size();
    vector<vector<int>> sum(n+1,vector<int>(m+1));
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+matrix[i-1][j-1];
        }
    }
    int ans=0;
    for (int top = 1; top <= n; top++){//枚举上边界
        for (int bottom = top; bottom <= n; bottom++){//枚举下边界
            int cur=0;
            unordered_map<int,int> mp;
            for (int r = 1; r <= m; r++){//枚举右边界
                cur=sum[bottom][r]-sum[top-1][r];
                if(cur==target) ans++;
                if(mp.count(cur-target)) ans+=mp[cur-target];
                mp[cur]++;
            }
        }
    }
    return ans;
}