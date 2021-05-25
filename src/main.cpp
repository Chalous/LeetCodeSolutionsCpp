#include <stdlib.h>//for system("pause")
#include <iostream>//for cout,cin
#include "twoPointerType.h"
#include "dpType.h"
#ifndef GENERAL_H
#define GENERAL_H
#endif

int main(){
    vector<int> input={1,2,0,3,0};
    cout<<hard1787_minChanges(input,1);
    system("pause");
    return 0;
}