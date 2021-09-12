#include<iostream>
using namespace std;

void reverseArray( int arr[], int left, int right)
{
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void rotation(int arr[], int n, int k)
{
    k %= n; // If the rotation times range is too bigger then to get the rotation times in range , 0 to n-1 times the rotation is unique after that 0 rotation is same as nth rotation , 1 is same as n+1 so on..

    if(k < 0){  // if the rotation time is negative ( means suppose we v 5 element we have to rotate -3 time then first 3 element will go at the end or last two element ( 5 - 3 = 2) will come at the begining is same therefore it is more convenient that we turn the negative time into positive time
        k += n;
    }

    reverseArray(arr, 0, n-1); // First time reverse the total Array
    reverseArray(arr, 0, k-1); // second time since we have to rotate k times, we have to reverse k number of elements from the begining means 0 to k-1 element
    reverseArray(arr, k, n-1);
}

// Vector method
/*
vector<int> kRotate(vector<int> a, int k){
    vector<int> v;
    int n = a.size();
    k = k % n;

    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           v.push_back(a[n + i - k]);
       }
       else
       {
           v.push_back(a[i - k]);
       }
    }
    return v;

}
*/

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    rotation(arr, n, k); // if k = 2 then last 2 element will come at the begining and remainings will move at end
    cout<<k<<" times rotation :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
