#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++){
        int current = arr[i]; // current = prev+1
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = current; // the exact position where the number should be inserted
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 3, 1};
    int n = sizeof(arr) / sizeof(int);
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    cout<<"Sorted Element : \n";
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
