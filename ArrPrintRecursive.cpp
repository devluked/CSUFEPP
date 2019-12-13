
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    if (n==-1)
        return;
    cout << arr[n] << endl;
    return printArray(arr,n-1);
}

int main() 
{
    int size = 5;
    int arr[] = {1,2,3,4,5};
    printArray(arr, size-1);
    return 0;
}