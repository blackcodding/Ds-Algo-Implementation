#include<iostream>
using namespace std;

void printingpair(int arr[], int n)
{
    cout<<" The Unique pairs : \n";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ // this gives us the unique pairs but if we want all possible pairs then we can use for(int j=0; j<n; j++)
            cout<<arr[i]<<" ,"<<arr[j]<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    printingpair(arr, n);
    return 0;
}
