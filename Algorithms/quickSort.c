#include <stdio.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int* a, int* b);

int main (){
    int numbers[5] = {1,3,2,4,5};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    quickSort(numbers, 0, 4);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void quickSort(int arr[], int low, int high){
    if (low < high){ // 0 < 4
        int pi = partition(arr, low, high);

        quickSort(arr,low, pi -1); 
        quickSort(arr,pi + 1, high);
    }

}

int partition(int arr[], int low, int high){
    int pivot = arr[high]; // arr[4]
    int i = (low - 1); // -1

    for (int j = low; j <= high; j++) { // 0 -> 4
        if (arr[j] < pivot){ // 1 < 5 // [i]{[1J],3,2,4,5};
            i++;
            swap(&arr[i], &arr[j]); //replacement itself {[1JI],3,2,4,5}; 
        }
    }
    swap(&arr[i+1], &arr[high]); 
    return(i + 1);
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
} 