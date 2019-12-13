#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    static int total = 0;
    total+=arr[n];
    if (n==0)
        return total;
    return sumArray(arr,n-1);
    
}

int main() 
{
    int size = 5;
    int arr[] = {1,2,3,4,5};
    cout << sumArray(arr, size-1) << endl;
    return 0;
}