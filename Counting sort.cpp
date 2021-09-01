#include<iostream>
#include<vector>
using namespace std;

// Counting sort algorithm possible when we know the data and its range that we can find the largest number which is used as range of the counting array
void countingSort(int arr[], int n)
{
    int largest = -1;
    for(int i=0; i<n; i++){ // Finding the largest number
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    vector<int> freq(largest+1, 0); // array counting array named freq will filled later we put 0
    for(int i=0; i<n; i++){
        freq[arr[i]]++;  // In whichever index is equal to the element or number of original array we increment the value of freq index by 1
    }
    int j = 0; // j is taken to access the original array index
    for(int i=0; i<n; i++){ // i is taken to access counting array means freq vector array index
        while(freq[i]>0){ // when freq vector array index is holding the value greater than 1 we enter into the loop
            arr[j] = i; // if condition match the original array value will be assigned by the index number of freq array
            freq[i]--;
            j++; // to increment the original array index
        }
    }
}

int main()
{
    int arr[] = {5, 3, 2, 1, 1, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    return 0;
}
