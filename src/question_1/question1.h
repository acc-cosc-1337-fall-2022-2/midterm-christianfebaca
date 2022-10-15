#include<iostream>

using std::cout;
using std::string;


bool is_palindrome(const string str)
{
    int low = 0;
    int high = str.length() - 1;

    while(low < high)
    {
        if(str[low] != str[high])
        {
            return false;
        }
        high--;
        low++;
    }
    return true;
}

int main()
{
    string str = "abcba";

    if(is_palindrome(str))
    {
        cout<<"Is Palindrome";
    }
    else
    {
        cout<<"Is NOT Palindrome";
    }
    return 0;
}