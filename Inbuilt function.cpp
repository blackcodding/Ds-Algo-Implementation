#include<iostream>
#include<algorithm>
using namespace std;

/*
// comparator is used to reverse the array instead of using reverse function
// comparetor whic is in build and this in build func is pass as a parameter in any function therefore we don't use any () to call it
bool compare(int a, int b)
{
    return a > b;
}
*/

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    /*
    // here we call the comaretor function within the sort function therefore we pass as a parameter and therefore the result will be the reverse of sorted element
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    */

    /*
    // greater<int>() is used to arrange the element in decreasing order this is also pass as parameter within function
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    */


    // Sort the array
    sort(arr, arr+n); // sort(start, end)
    cout<<"Sorted elements : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;

    // Reverse the array
    reverse(arr, arr+n);
    cout<<" Reversed Array :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
