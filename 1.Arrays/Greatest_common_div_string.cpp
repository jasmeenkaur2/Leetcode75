#include <iostream>
#include <string>
#include <numeric> // Needed for std::gcd

using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        int len = std::gcd(str1.length(), str2.length());
        return str1.substr(0, len);
    }
};
