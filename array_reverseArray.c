#include <stdio.h>

void reverse(int a[], int start, int end) {
    if (start >= end) {
        return;
    }
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    reverse(a, start + 1, end - 1);
}

int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, 0, size - 1);  

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
