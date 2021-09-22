#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    string reverseString;
    reverseString = str;
    reverse(reverseString.begin(), reverseString.end());
    if(str.compare(reverseString) == 0){
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    string str = "abba";
    cout<<str<<endl;
    bool ans;
    ans = isPalindrome(str);
    cout<<ans;
    return 0;
}
