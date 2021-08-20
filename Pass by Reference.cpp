#include<iostream>
using namespace std;

void printarray(int arr[], int n) // arr[] and arr* both are same because they both carry the address of actual array which is declared in main since this also pointing same array
{
    cout<<"In Function : \n";
    cout<<"The number of element : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
}

int main(){
    int arr[]={10, 20, 30, 40, 50,60,70};
    int n = sizeof(arr)/sizeof(int);

    printarray(arr, n); // the address of array is being shared by arr

    cout<<"In Main : \n";
    cout<<"The number of element : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}
