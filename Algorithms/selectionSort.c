#include <stdio.h>

void selectionSort(int arr[], int size);

int main (){
    int numbers[5] = {5,3,2,4,1};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    selectionSort(numbers, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void selectionSort(int arr[], int size){

    for (int i = 0; i < size - 1; i++){ // 0 -> 4 
        int min = i; // min = 0
        for (int j = i + 1; j < size; j++) { // j = 1 // j = 2 // j = 3 // j = 4
            if (arr[min] > arr[j]){ // arr[0] > arr[1], 5 > 3 // arr[1] > arr[2] (3 > 2) // arr[2] > arr[3] (2 > 4) // arr[2] > arr[4] 
                min = j; // min = 1 // min = 2 // min = 4
            } // arr[4] = 1 min
        }
        int temp = arr[i]; // temp = 5
        arr[i] = arr[min]; // arr[0] = 1
        arr[min] = temp; // arr[4] = 5
    }
}