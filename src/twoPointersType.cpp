#include "twoPointersType.h"
int medium11_maxArea(vector<int>& height){
    int max_area=0;
    int front=0,back=height.size()-1;
    while (front<back)
    {
        max_area=max(max_area,min(height[front],height[back])*(back-front));
        if(height[front]>height[back]){
            --back;
        } else{
            ++front;
        } 
    }
    return max_area;
}