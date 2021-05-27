#include "bitOperationType.h"

int easy461_hammingDistance(int x, int y){
    int xor_xy=x^y;
    int dist=0;
    while (xor_xy)
    {
        xor_xy=xor_xy&(xor_xy-1);
        ++dist;
    }
    return dist;
}