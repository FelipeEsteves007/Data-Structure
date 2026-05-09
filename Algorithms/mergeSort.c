#include <stdio.h>

void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main (){
    int numbers[5] = {5,3,2,4,1};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    mergeSort(numbers, 0, size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void mergeSort(int arr[], int left, int right){ // {5,3,2,4} 0 3 //// {5,3} , {2,4}
    if (left < right){ // 0 < 3 //// 0 < 1,  0 < 1
        int mid = left + (right - left) / 2; // mid = 0 + (3 - 0) /2 mid = 1 //// mid = 0 + 1 - 0 / 2 = 0

        mergeSort(arr, left, mid); // {5,3,2,4}, 0, 1 = {5,3} //// {5,3} 0, 0
        mergeSort(arr, mid + 1, right); // {5,3,2,4}, 1 + 1, 3 = {2,4} //// {2,4} 0 , 0

        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right){
    int i, j,k;

    int n1 = mid - left + 1; // n1 = 0 - 0 + 1, n1 = 1
    int n2 = right - mid; // n2 = 1 - 0, n2 = 1

    int L[n1], R[n2]; // L[1], R[1]

    for (i = 0; i < n1; i++) { // 0 -> 1
        L[i] = arr[left + i]; // L[0] = arr[0 + 0] -> L[0] = 5
    }
    for (j = 0; j < n2; j++) { // 0 -> 1
        R[j] = arr[mid + 1 + j]; // R[0] = arr[0 + 1 + 0] -> R[0] = 3
    }

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) { //0 < 1 and 0 < 1    
        if(L[i] <= R[j]){ // 5 <= 3
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j]; // arr[0] = 3 {3}
            j++;
        }
        k++;
    }
    
    while (i < n1) { // 0 < 1
        arr[k] = L[i]; // arr[1] = 5 {3,5}
        i++;
        k++;
    }

    while (j < n2) { // 1 < 1
        arr[k] = R[j];
        j++;
        k++;
    }
 
}