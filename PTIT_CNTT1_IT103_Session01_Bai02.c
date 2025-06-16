#include <stdio.h>

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}

int main() {
    printDouble(50);
}
/*Do phuc tap: O(log n)*/