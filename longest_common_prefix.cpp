#include <bits/stdc++.h>
using namespace std;

void file_i_o()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

/*************************************************************/

void Main()
{
    string input;
    vector<string> str;
    while (cin >> input)
    {
        str.push_back(input);
    }

    int start_length = 0;

    for (int i = 0; i < str[0].length(); i++)
    {
        int match_char = 1;

        for (auto element : str)
        {
            if (start_length >= element.length() || element[start_length] != str[0][start_length])
            {
                match_char = 0;
                break;
            }
        }
        if (match_char)
        {
            start_length++;
        }
        else
        {
            break;
        }
    }
    cout << str[0].substr(0, start_length);
}

/*************************************************************/

int main()
{
    clock_t begin = clock();
    file_i_o();

    Main();

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}