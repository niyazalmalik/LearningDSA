#include <iostream>
#include <string.h>

using namespace std;

void PrintSubsequences(string str, string output, int index)
{

    if (index >= str.length())
    {
         //Base condition
        // This is where I print output and then return

        cout << "--> " << output << endl;
        return;
    }

    char ch = str[index];

    // Include

    output.push_back(ch);
    PrintSubsequences(str, output, index + 1);

    // exclude

    output.pop_back();
    PrintSubsequences(str, output, index + 1);
}

int main()
{

    string str = "Yes";
    string output = "";

    // using include and exclude principle
    PrintSubsequences(str, output, 0);

    return 0;
}