#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int alpha = 0;
    int number = 0;
    int space = 0;
    while(ch != '\n'){
        if(ch >= '0' && ch <= '9' )
        {
            number++;
        }
        else if((ch >= 'a' && ch <= 'z') || (ch <= 'A' && ch >= 'Z'))
        {
            alpha++;
        }
        else if(ch == ' ')
        {
            space++;
        }

        ch = cin.get();
    }
    cout<<"Alpha :"<<alpha <<endl;
    cout<<"Number :"<<number <<endl;
    cout<<"Space :"<<space <<endl;
    return 0;
}
