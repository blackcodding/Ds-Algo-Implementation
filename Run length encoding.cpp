#include<iostream>
#include<string>
using namespace std;

string compressionString(string str)
{
    int n = str.length();
    string output;
    for(int i=0; i<n; i++){
        int Count = 1;
        while((i<n-1) && (str[i+1] == str[i])){
            Count++;
            i++;
        }
        output += str[i];
        output += to_string(Count);
    }
    if(output.length() > str.length()){
        return str;
    }
    return output;
}

int main()
{
    string s1 = "aaabbccccddd";
    cout<<compressionString(s1)<<endl;

    string s2 = "abcde";
    cout<<compressionString(s2)<<endl;
    return 0;
}
