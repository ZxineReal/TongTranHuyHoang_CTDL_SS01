#include <stdio.h>

/*Cach 1*/
int sum1(int n) {
    int sum = 0;
    sum = n * (n + 1) / 2;
    return sum;
}

/*Do phuc tap: O(1)*/

/*Cach 2:*/
int sum2(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

/*Do phuc tap: O(n)*/