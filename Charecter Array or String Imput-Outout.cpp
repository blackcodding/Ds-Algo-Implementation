#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    char c[] = {'a', 'b', 'c', 'd', '\0'}; // Char Array and must put \0 at the end of the char array otherwise it will throw garbage value
    char a[] = "abcdef"; // if we use "" then we don't need to put \0 the compiler will put \0 by default
    cout<<c<<endl;
    cout<<a<<endl;

    cout<<strlen(a)<<endl; // it will give the length of the visible strings
    cout<<sizeof(a)<<endl; // strlen+1 because it is taking \0 also





// When we get input from the user

    /*char b[100];
    cin>>b;  // in case of cin it does not take any white space there white space will consider as \0 in cin in the input buffer only first string will be print until white space comes
    cout<<b<<endl;
    */


   /*
    char temp = cin.get(); //in this case any symbol will be printed including white space and only the charecter which is used for breaking the loop will not print and helps to come out from the loop
    while(temp != '\n'){
        cout<<temp;
        temp = cin.get();  // while we use cin.get() the input what we written in the screen that will only be there and after we hit enter the entire string comes to the buffer and then one charecter at a time will come to the actual array through the temp
    }
    */



    // Storing the chars in charecter array and then print the output togetherly
    char sentence[1000]; // this char array is used for storing the the chars and then print the strings togatherly
    char temp = cin.get();
    int len = 0;
    while(temp != '#'){
        sentence[len++] = temp; // here we are storing the chars one by one at a time
        temp = cin.get();
    }
    sentence[len] = '\0'; // we have to store \o at the end of storing all the string otherwise computer will throw the garbage value
    cout<<sentence<<endl;  // here we print all the strings togatherly without printing them in a chunk
    return 0;
}
