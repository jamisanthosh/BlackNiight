#include <iostream>
#include <string>
using namespace std;

class palindrome
{
   public:
        int length;
        bool isPalindrome(string str);
};

bool palindrome::isPalindrome(string str)
{
    int i = 0;
    length=str.length() - 1;
 
    while (i < length)
    {
        if (toupper(str[i]) != toupper(str[length]))
            return false;
 
        i++;
        length--;
    }
 
    return true;
}
 
int main()
{
    palindrome *Ptr =new palindrome;
    string str;
    cout<<"Enter input string want to check for palindrome "<<endl;
	getline(cin,str);
	
 
    if (Ptr->isPalindrome(str))
        cout << "Given String is Palindrome";
    else
        cout << "Given string is Not Palindrome";
 
    return 0;
}
