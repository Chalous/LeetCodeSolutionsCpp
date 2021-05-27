#include "monoStack.h"

//单调栈专门解决Next Greater Number

/**
* @brief 503.下一个更大元素II <https://leetcode-cn.com/problems/next-greater-element-ii/>
*    
*                        
* @param nums 循环数组
*
* @return 每个数组元素对应的下一个更大元素
*/
vector<int> medium503_nextGreaterElements(vector<int>& nums){
    // int len=nums.size();
    // stack<int> mono_stack;
    // vector<int> res(len,-1);
    // for (int i = 0; i < len*2-1; i++)
    // {
    //     while (!mono_stack.empty()&&nums[mono_stack.top()]<nums[i%len])
    //     {
    //         res[mono_stack.top()]=nums[i%len];
    //         mono_stack.pop();
    //     }
    //     mono_stack.emplace(i%len);
    // }
    // return res;
    //用vector模拟栈，效率快很多
    int n=nums.size(),index=-1;
    vector<int> st(2*n);
    vector<int> res(n,-1);
    for (int i = 0; i < 2*n; i++)
    {
        while (index>=0&&nums[st[index]]<nums[i%n])
        {
            res[st[index--]]=nums[i%n];
        }
        st[++index]=i%n; 
    }
    return res;
}

vector<int> easy496_nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    int len1=nums1.size(),len2=nums2.size();
    stack<int> stk;
    unordered_map<int,int> greater_map;
    for (int i = 0; i < len2; i++)
    {
        while(!stk.empty()&&nums2[stk.top()]<nums2[i]){
            greater_map[nums2[stk.top()]]=nums2[i];
            stk.pop();
        }
        stk.push(i);//要注意压入的是数组下标，一定要与上面一致
    }
    vector<int> res(len1,-1);
    for (int i = 0; i < len1; i++)
    {
        if(greater_map.find(nums1[i])!=greater_map.end()){
            res[i]=greater_map[nums1[i]];
        }
        //上式可以简化成
        // res[i]=(m.find(nums1[i]) != m.end()? m[nums1[i]] : -1);
    }
    return res;
}