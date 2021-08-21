#include<iostream>
using namespace std;

void Reversearray(int arr[], int n)
{
    int Start = 0;
    int End = n-1;
    while(Start < End){
     swap(arr[Start], arr[End]);
     Start += 1;
     End -= 1;
    }
   /* cout<<"Reversed Array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }*/
}

int main ()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }

    Reversearray(arr, n);
    cout<<"Reversed Array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
