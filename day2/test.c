//
// Created by Max on 2023/5/14.
//
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>

int main()
{
    bool x = true;
    x = false;
    printf("%d\n", sizeof(x));// 1

//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//
//    int* p;
//    printf("%d\n", sizeof(p));// 8

    double d1 = 1.0;
    double d2 = 0.1;
//    if(d1 - 0.9 == d2) {
//        printf("相等");
//    }
//    else {
//        printf("不相等");
//    }

    if(fabs(d1 - 0.9 - d2) < DBL_EPSILON) {
        printf("相等");
    }
    else {
        printf("不相等");
    }
}