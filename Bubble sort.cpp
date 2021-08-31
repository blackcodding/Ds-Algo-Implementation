#include<iostream>
using namespace std;

//Bubble sort involved in (n-1) iteration
//Bubble sort time complexity = o(n^2)

void bubblesort(int arr[], int n)
{
    for(int times=1; times<n; times++){
            // If the given array is sorted and we need find the optimize sorted element in o(n) time complexity then we have to apply only bellow part
        for(int j=0; j<=n-times-1; j++){ //the j should go till in every iteration n-2 at the first time second time n-3 , then n-4, n-5, .... n
            if(arr[j]>arr[j+1]) // by this first iteration when the j is at n-2 the j+1 will be at n-1
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 1, 5, -12, 6, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    cout<<"Sorted Elements are : \n";
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
