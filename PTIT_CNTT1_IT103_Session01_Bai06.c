#include <stdio.h>

int countN(int arr[], int n, int a) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
        }
    }
    return count;
}

/*Do phuc tap thoi gian: O(n)*/
/*Do phuc tap khong gian: O(1)*/