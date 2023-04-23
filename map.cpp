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
    map<string, int> m; // initialize map<data_type, data_type> var_name;

    /* METHOD 1 give key:value pairs statically */
    // m["I"] = 1;
    // m["V"] = 5;
    // m["X"] = 10;

    /* METHOD 2 give key:value pairs using .insert function */
    // m.insert({{"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000}});

    /* METHOD 3 get key:value pairs dynamically using for loop */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        int b;
        cin >> a >> b;
        m[a] = b;
    }

    /* METHOD 1 print key:value pairs using iterator */
    // map<string, int>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //      cout << (*it).first << " " << (*it).second << "\n";
    // }

    /* METHOD 2 print key:value pairs using auto */
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
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