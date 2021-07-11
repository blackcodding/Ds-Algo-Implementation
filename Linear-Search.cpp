#include<iostream>
using namespace std;

int Linear_Search(int arr[], int n, int k)
{
    for(int i=0; i<n ;i++)
    {
        if(arr[i] == k)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the Size of Array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter key: \n";
    cin>>k;
    int x = Linear_Search(arr, n, k);
    if(x >= 0)
        cout<<"Element is found at : \n"<<x+1;
    else
        cout<<"Element is not found";
    return 0;
}
/* TIME COMPLEXITY - O(n)
   IF NUMBER OF ELEMENT IN ARRAY WILL INCREASE
   TIME COMPLEXTY WILL ALSO INCREASE */
