#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int pos=0; pos<=n-2; pos++){
        int minPos = pos;
        for(int j=pos; j<n; j++){
            if(arr[j] < arr[minPos])
            {
                minPos = j;
            }
        }
        swap(arr[minPos], arr[pos]);
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    cout<<"Sorted elements are: \n";
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
