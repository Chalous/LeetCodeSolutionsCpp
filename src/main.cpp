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
    vector<int> input1={3,1};
    cout<<medium33_search(input1,1)<<endl;
    // vector<int> input2={1,3,4,2};
    // vector<int> output=medium347_topKFrequent(input1,2);
    // for(int x:output){
    //     cout<<x<<endl;
    // }

    system("pause");
    return 0;
}