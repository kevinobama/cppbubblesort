#include<iostream>
#include "bubblesort.h"

using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);

    for (int i = 0; i <10 ; i++) {
        arr[i]=rand()/100000000;
    }
    int *sortedData = bubbleSortReturn(arr, n);
    cout<<"Sorted array: \n";
    printArray(sortedData, n);

    return 0;
}