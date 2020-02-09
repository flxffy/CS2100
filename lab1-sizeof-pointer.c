#include <stdio.h>

void foo(int[]);

int main() {
    int arr[10];
    printf("size of arr from within main: %zu bytes\n", sizeof(arr));
    printf("size of int*: %zu bytes\n", sizeof(int*));
    foo(arr);
    return 0;
}

void foo(int arr[]) {
    printf("size of arr from within foo: %zu bytes\n", sizeof(arr));
}
