//
// Created by Arnav Gupta on 08/02/17.
//

#ifndef VMC_SORT_MERGESORT_H
#define VMC_SORT_MERGESORT_H

void merge (int a[], int low, int high, int mid) {
    int i = low, k = low, j = mid+1;
    int c[100];

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j <= high) {
        c[k] = a[j];
        k++;
        j++;
    }

    for (i = low; i < k; i++) {
        a[i] = c[i];
    }
}

void mergesort(int arr[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}

#endif //VMC_SORT_MERGESORT_H
