#include <stdlib.h>//for system("pause")
#include <iostream>//for cout,cin
#include "dpType.h"
#include "stringEditType.h"
#include "fastSlowPointers.h"
#include "bitOperationType.h"
#include "monoStack.h"
#include "hashMapType.h"
#include "twoPointersType.h"
#include "binarySearchType.h"
#include "prefixSumType.h"
#ifndef GENERAL_H
#define GENERAL_H
#endif

int main(){
    // vector<int> input={1,2,0,3,0};
    // ListNode head(1);
    // ListNode two(2);
    // ListNode three(3);
    // ListNode four(4);
    // ListNode five(5);
    // head.next=&two;
    // two.next=&three;
    // three.next=&four;
    // four.next=&five;
    vector<vector<int>> input;
    vector<int> input1={3,3,3};
    vector<int> input2={-1,1};
    input.emplace_back(input1);
    input.emplace_back(input2);
    cout<<medium560_subarraySum(input1,3)<<endl;
    // vector<int> input2={1,3,4,2};
    // vector<int> output=medium347_topKFrequent(input1,2);
    // for(int x:output){
    //     cout<<x<<endl;
    // }

    system("pause");
    return 0;
}