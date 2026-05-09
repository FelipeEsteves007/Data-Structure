#include <stdio.h>

void insertionSort(int arr[], int size);

int main (){
    int numbers[5] = {5,3,2,4,1};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    insertionSort(numbers, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void insertionSort(int arr[], int size){
    
    for (int i = 1; i < size; i++) {
        int temp = arr[i]; // arr[0] (3)
        int j = i - 1; // j = 0;

        while (j >= 0 && arr[j] > temp){ // 0 >= 0 and arr[0] (5) > temp (3)
            arr[j + 1] = arr[j]; // {5,5,2,4,1};
            j--; // j = -1
        }
        arr[j + 1] = temp; // arr[-1 + 1] (arr[0]) = {3,5,2,4,1};
    }
}