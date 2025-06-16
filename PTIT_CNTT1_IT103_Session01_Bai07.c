#include <stdio.h>
#include <stdbool.h>

bool check1(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}
/*Do phuc tap thoi gian: O(n ^2)*/
/*Do phuc tap khong gian: O(1)*/
