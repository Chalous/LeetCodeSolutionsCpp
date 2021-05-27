#include "general.h"



//对于「找最近一个比当前值大/小」的问题，都可以使用单调栈来解决
//这题的单调栈时存放数组小标，但是单调时针对数组下标对应值的
//从栈顶到站地单调递增
vector<int> medium503_nextGreaterElements(vector<int>& nums);//@抄的，铁废物
vector<int> easy496_nextGreaterElement(vector<int>& nums1, vector<int>& nums2);