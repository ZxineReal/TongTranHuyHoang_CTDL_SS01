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

// Cach 2:
bool check2(int arr[], int n) {
    int seenNumber[1001] = {0};
    for (int i = 0; i < n; i++) {
        if (seenNumber[arr[i]] == 1) {
            return true;
        }
        seenNumber[arr[i]] = 1;
    }
    return false;
}