#include<iostream>
using namespace std;

int lowerBound(int A[], int n, int Val) {
    int Start = 0;
    int End = (n - 1);
    int answer = -1;
    while(Start <= End){
        int mid = Start + (End - Start) / 2;
        if(A[mid] > Val){
            End = mid - 1;
        }
        else {
            answer = A[mid];
            Start = mid + 1;
        }
    }
    return answer;

}

int main()
{
    int A[] = {-1, -1, 2, 3, 5};
    int n = sizeof(A) / sizeof(int);
    int Val = 4;
    cout<<lowerBound(A, n, Val);
    return 0;
}
