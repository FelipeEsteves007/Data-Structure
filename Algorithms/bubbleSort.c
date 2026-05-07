#include <stdio.h>

void bubbleSort(int arr[], int size);

int main (){
    int numbers[5] = {5,3,2,4,1};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void bubbleSort(int arr[], int size){

    for (int i = 0; i < size - 1; i++) { // i = 0, size = 4
        for (int j = 0; j < size -i - 1; j++) { // j = 0, size = 4 // j = 1, size = 4
            if (arr[j] > arr[j + 1]){ // 5 > 3 // 5 > 2 //
                int temp = arr[j]; // temp = 5 // temp = 5
                arr[j] = arr[j + 1]; // arr[0] = 3 // arr[1] = 3
                arr[j + 1] = temp; // arr[1] = 5 {3,5,2,4,1}; // arr[2] = 5 {3,2,5,4,1};
            }
        }
    }
}