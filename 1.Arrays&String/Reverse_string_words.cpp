#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        string word = "", result = "";

        // Traverse the string and push words to stack
        for (char ch : s)
        {
            if (ch == ' ')
            {
                if (!word.empty())
                {
                    st.push(word);
                    word = "";
                }
            }
            else
            {
                word += ch;
            }
        }

        // Push the last word (if any)
        if (!word.empty())
        {
            st.push(word);
        }

        // Pop from stack to build reversed sentence
        while (!st.empty())
        {
            result += st.top();
            st.pop();
            if (!st.empty())
            {
                result += " ";
            }
        }

        return result;
    }
};

// Example usage
int main()
{
    Solution sol;
    string s = "  hello   world  ";
    cout << "\"" << sol.reverseWords(s) << "\"" << endl; // Output: "world hello"
    return 0;
}
