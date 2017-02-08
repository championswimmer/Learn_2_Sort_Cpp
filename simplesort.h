//
// Created by Arnav Gupta on 08/02/17.
//



#ifndef VMC_SORT_SIMPLESORT_H
#define VMC_SORT_SIMPLESORT_H



void bubblesort (int arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < (len-i); j++) {
            if (arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void selectionsort (int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int min = arr[i];
        int minpos = i;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < min) {
                min  = arr[j];
                minpos = j;
            }
        }
        if (minpos > i) {
            int temp = arr[i];
            arr[i] = arr[minpos];
            arr[minpos] = temp;
        }
    }
}

void insertionsort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int j = i;
        while (j > 0 && (arr[j-1] > arr[j])) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

#endif //VMC_SORT_SIMPLESORT_H
