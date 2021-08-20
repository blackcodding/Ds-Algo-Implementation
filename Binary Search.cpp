#include<iostream>
using namespace std;

int binarysearch (int arr[], int n, int key)
{
    int Start = 0;
    int End = n-1;
    while(Start <= End){
        int mid = (Start + End) / 2;
        if(arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            End = mid - 1;
        else
            Start = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of element \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in sorted way: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search: \n";
    cin>>key;
    int position = binarysearch(arr, n, key);
    if(position != -1)
        cout<<key<<" is found at position : "<<position+1;
    else
        cout<<key<<" is not found";
    return 0;
}
