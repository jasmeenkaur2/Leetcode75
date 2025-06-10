#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string result = "";
    int i = 0, j = 0;
    int n = word1.size(), m = word2.size();

    // Add characters alternately
    while (i < n && j < m)
    {
        result += word1[i++];
        result += word2[j++];
    }

    // Append the remaining part of the longer word
    while (i < n)
        result += word1[i++];
    while (j < m)
        result += word2[j++];

    return result;
}

// Example usage:
int main()
{
    string word1 = "abc";
    string word2 = "pqr";
    cout << mergeAlternately(word1, word2) << endl; // Output: "apbqcr"
    return 0;
}
