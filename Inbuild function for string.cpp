#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];
    cout<<a<<endl;
    cout<<strlen(a)<<endl;
    // copy the string
    strcpy(b, a);  // in this function first argument will be destination and the second one will be the string which we want to copy
    cout<<b<<endl;
    // compare the two strings
    cout<<strcmp(b, a)<<endl;
    //concatinate two string
    char web[100] = "www.";
    char domain[100] = "Google.com";
    cout<<strcat(web, domain)<<endl;
    return 0;
}
