#include <stdio.h>
//LIFO (Last in First Out)
int factorial(int number);
int sumUntil (int n);
int selectionSort(int arr[], int size);
int power(int base, int exp);

int main (){
    
    int total = sumUntil(4);
    printf("%d", total);

    int numbers[5] = {5,3,2,4,1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int selectTotal = selectionSort(numbers, size);
    //printf("Total: %d", selectTotal);

    return 0;
}

int factorial(int number){
    if (number <= 1) return 1;
    return number * factorial(number - 1); // 4 * 3 * 2 * 1
}

int sumUntil (int n){
    if (n <= 1) return 1;
    return n + sumUntil(n - 1); // 4 + (3) / 3 + (2) / 2 + (1)
                                // 4 + 6 / 3 + 3 / 2 + 1
}

int selectionSort(int arr[], int size){
    int counter = 0;

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
        counter++;
    }
    return counter;
}

int power(int base, int exp){
    if (exp == 0) return 1;
    return base * power(base, exp - 1); // 2 * power(2,3) // 2 * power(2,2) // 2 * power(2,1) // 1
                                        // 2 * 4 // 2 * 2 // 2 * 1 // 1
}