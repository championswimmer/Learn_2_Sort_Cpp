#include <iostream>

using namespace std;

void printarr(int b[], int len) {
    cout << endl;
    for (int l = 0; l < len; l++) {
        cout << (b[l]) << " ";
    }
}

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


int main() {
    int a[] = {5,1,9,2,8,4,12,18,42,34};
    int b[10], c[10];
    copy(begin(a), end(a), begin(b));
    copy(begin(a), end(a), begin(c));

    int lena = sizeof(a) / sizeof(*a);

    cout << endl << "Bubble";
    printarr(a, lena);
    bubblesort(a, lena);
    printarr(a, lena);

    cout << endl << "Selection";
    printarr(b, lena);
    selectionsort(b, lena);
    printarr(b,lena);

    cout << endl << "Insertion";
    printarr(c, lena);
    insertionsort(c, lena);
    printarr(c,lena);
    return 0;
}