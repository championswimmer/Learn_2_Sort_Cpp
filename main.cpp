#include <iostream>
#include "simplesort.h"
#include "mergesort.h"

using namespace std;
void printarr(int b[], int len) {
    cout << endl;
    for (int l = 0; l < len; l++) {
        cout << (b[l]) << " ";
    }
}

int main() {
    int a[] = {5,1,9,2,8,4,12,18,42,34};
    int b[10], c[10], d[10];
    copy(begin(a), end(a), begin(b));
    copy(begin(a), end(a), begin(c));
    copy(begin(a), end(a), begin(d));

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

    cout << endl << "MERGE";
    printarr(d, lena);
    mergesort(d, 0, lena-1);
    printarr(d,lena);
    return 0;
}