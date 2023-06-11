#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

void SortIntArr(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Elemanlarý yer deðiþtir
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];

    printf("Dizinin elemanlarýný girin:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    SortIntArr(arr, size);

    printf("Sýralanmýþ dizi: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
