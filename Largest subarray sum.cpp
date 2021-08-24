#include<iostream>
using namespace std;

// Brute Force Approach , Time complexity O( n^3 )
int largestSubarraySum1 (int arr[], int n)
{
    int largestsum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int currsubarraysum = 0;
            for(int k=i; k<=j; k++){
                currsubarraysum +=arr[k];
            }
            largestsum = max(largestsum, currsubarraysum);
        }
    }
    return largestsum;
}

// Prefix Sum approach , Time complexity = o(n^2)
int largestSubarraySum2( int arr[], int n)
{
    int prefixSum[n] = {0};
    prefixSum[0] = arr[0]; // since first element of prefix sum array is equal to first element of original array
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i]; // to compute cumulative sum of array element, and we will get array the prefix sum
    }

    int largestSum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subArraySum = i>0 ? prefixSum[j] - prefixSum[i-1] : prefixSum[j]; // to compute the subarray sum
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout<<largestSubarraySum1(arr, n)<<endl;
    cout<<largestSubarraySum2(arr, n)<<endl;
    return 0;
}
