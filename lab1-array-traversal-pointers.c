#include <stdio.h>

int main() {
    int arr[9] = {0,1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(int);

    // print all elements in arr
    int *curr = arr;
    int *end = arr + size;
    while (curr < end) {
        printf("%d ", *curr);
        curr++;
    }

    return 0;
}
