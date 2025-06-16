#include <stdio.h>

void sortArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/*Do phuc tap thoi gian: O(n ^ 2)*/
/*Do phuc tap khong gian: O(1)*/
