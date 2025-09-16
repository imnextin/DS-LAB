#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key)  low = mid + 1;
        else                high = mid - 1;
    }
    return -1;
}

int main() {
    int a[] = {11,22,25,34,64,90};
    int key = 34;
    int pos = binarySearch(a, 6, key);
    cout << (pos != -1 ? "Found" : "Not Found");
}
