using namespace std;

void bubbleSort(int *arrayData, int n) {
    int temp=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n-i; j++) {
            if(arrayData[j]>arrayData[j+1]) {
                temp=arrayData[j+1];
                arrayData[j+1]=arrayData[j];
                arrayData[j]=temp;
            }
        }
    }
}

int * bubbleSortReturn(int *arrayData, int n) {
    int temp=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n-i; j++) {
            if(arrayData[j]>arrayData[j+1]) {
                temp=arrayData[j+1];
                arrayData[j+1]=arrayData[j];
                arrayData[j]=temp;
            }
        }
    }

    return arrayData;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    cout << endl;
}