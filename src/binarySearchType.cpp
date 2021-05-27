#include "binarySearchType.h"

int medium33_search(vector<int>& nums, int target){
    int len=nums.size();
    if(!len) return -1;
    if(len==1) return nums[0]==target?0:-1;
    int left=0,right=len-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target) return mid;
        if(nums[left]<=nums[mid]){//左边是有序数组,@@这边需要加一个等号，因为若left==mid，两者相等，也算是有序，否则([3,1],1)返回的是-1
            if(target>=nums[left]&&target<nums[mid]){//注意这里的等号位置，mid已经比较过了，不能小于等于
                right=mid-1;
            } else{
                left=mid+1;
            }
        } else{
            if(target>nums[mid]&&target<=nums[right]){//注意这里的等号位置，mid已经比较过了，不能大于等于
                left=mid+1;
            } else{
                right=mid-1;
            }
        }
    }
    return -1;
}