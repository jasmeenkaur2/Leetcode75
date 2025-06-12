#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int minLen = min(str1.length(), str2.length());

        for (int len = minLen; len >= 1; len--)
        {
            string candidate = str1.substr(0, len);

            // Check if it can divide both strings
            if (divides(str1, candidate) && divides(str2, candidate))
            {
                return candidate;
            }
        }

        return "";
    }

private:
    // Helper function to check if s is made by repeating part
    bool divides(const string &s, const string &part)
    {
        if (s.length() % part.length() != 0)
            return false;

        string repeated = "";
        int times = s.length() / part.length();
        for (int i = 0; i < times; i++)
        {
            repeated += part;
        }

        return repeated == s;
    }
};
