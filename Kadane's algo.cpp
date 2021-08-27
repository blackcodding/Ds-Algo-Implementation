#include<iostream>
using namespace std;

// Using Kadane's Algo we find out the maximum subArray sum , Time complexity = o(n)
/*int maximum_subArraySum(int arr[], int n)
{
    int currentSum = 0;
    int maximumSum =0;
    for(int i=0; i<n; i++){
        currentSum = currentSum + arr[i];
        if(currentSum < 0){
            currentSum = 0; // if current sum is negetive then at next addition if it will be added with positive integer then the sum will get decremented therefore we take negetive current sum as 0 which doest not affect on maximum subarray
        }
        maximumSum = max(maximumSum, currentSum);
    }
    return maximumSum;
}*/

// Standard code for all negetive elements or all positive elements or combination of both positive and negetive elements in array .
int maxSubarraySum(int arr[], int n){
        int cs = 0;
        int ms = INT_MIN;
        for(int i=0; i<n; i++){
            cs = cs + arr[i];
            ms = cs > ms ? cs : ms;
            if(cs<0){
               cs = 0;
            }
        }
        return ms;
    }

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout<<maximum_subArraySum(arr, n);
    return 0;
}
