#include <stdio.h>
#define MAX 10

void shellsort(int v[], int n);

int main() {
    int j;
    int arr[MAX] = {3, 8, 3, 5, 12, 6, 3, 6, 8, 88};
    shellsort(arr, MAX);

    for(j=0; j<=MAX; ++j) {
        printf("arr[j] %d\n", arr[j]);
    }
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)

        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}