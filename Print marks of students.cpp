#include<iostream>
using namespace std;

int main()
{
    int marks[100] = {0}; /*since we are reserving memory initially therefore when we initialize the value in the index then the remaining index should not contain garbage value*/
    int n;
    cout<<"Enter the number of students : \n";
    cin>>n;
    cout<<"Enter the marks of the Students \n";
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    cout<<"Marks of the "<<n<<" students \n";
    for(int i=0; i<n; i++){
        cout<<marks[i]<<", ";
    }
    return 0;
}
