#include <stdio.h>
#define MAX 20

int binsearch(int x, int v[], int n);


int main() {

    int arr[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int find = 7;

    int res = binsearch(find, arr, MAX/2);
    printf("%d\n", res);

    switch (1) {
        case 1:
            printf("2\n");
            return 1;
        case 3:
            printf("3\n");
    }
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1 ;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1 ;
        else /* совпадение найдено */
            return mid;
    }
    return -1; /* совпадения нет */
}