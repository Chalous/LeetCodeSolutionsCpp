#include "hashMapType.h"

vector<int> medium347_topKFrequent(vector<int>& nums, int k){
    unordered_map<int,int> cnt;
    for (int i = 0; i < nums.size(); i++)
    {
        cnt[nums[i]]++;
    }
    vector<int> res;
    vector<pair<int,int>> sort_cnt;
    for(auto pair:cnt){
        sort_cnt.push_back({pair.first,pair.second});
    }
    sort(sort_cnt.begin(),sort_cnt.end(),[](pair<int,int> &a,pair<int,int> &b)->bool{
        return a.second>b.second;
    });//注意，字典是没法用sort排序的
    // sort(cnt.begin(),cnt.end(),[&](int& a, int& b)->bool{
    //     return cnt[a]==cnt[b]?a<b:cnt[a]>cnt[b];
    // });
    // unordered_map<int,int>::iterator it=cnt.begin();
    // int count=0;
    // while(count<k&&it!=cnt.end()){
    //     res.push_back(it->first);
    //     it++;
    //     count++;
    // }
    for(int i=0;i<k;i++){
        res.push_back(sort_cnt[i].first);
    }
    return res;
}