#include <iostream>

using namespace std;

void printarr(int b[], int len) {
    cout << endl;
    for (int l = 0; l < len; l++) {
        cout << (b[l]) << " ";
    }
}


int main() {
    int a[] = {5,1,9,2,8,4,12,18,42,34};
    printarr(a, sizeof(a) / sizeof(*a));
    return 0;
}