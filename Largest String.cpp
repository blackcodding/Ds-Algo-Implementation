#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //n = n+1; // or we can take n+1 for multiple sentence to avoid \n at the begining
    char sentence[1000];
    char largestSentence[1000];


    cin.get(); // when we hit enter after giving the value of n that enter is considered as 1 int the while loop to avoid that enter we take it in cin.get()

    int largest_length = 0;

    while(n--){
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if(len > largest_length){
            largest_length = len;
            strcpy(largestSentence, sentence);
        }
    }
    cout<<"The largest sentence is : \n"<<largestSentence;

    return 0;
}
