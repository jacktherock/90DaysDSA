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
    int n1, n2, input1, input2;
    cin >> n1 >> n2;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3(n1 + n2); // adding v1 & v2 array into v3 array

    // get input values of v1 array
    for (int i = 0; i < n1; i++)
    {
        cin >> input1;
        v1.push_back(input1);
    }
    // get input values of v2 array
    for (int i = 0; i < n2; i++)
    {
        cin >> input2;
        v2.push_back(input2);
    }

    // sort(v1.begin(), v1.end()); // sort v1 array
    // sort(v2.begin(), v2.end()); // sort v2 array

    cout << "Array 1: ";
    for (int i = 0; i < n1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < n2; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); // merge v1 & v2 array into v3 array using .merge() function

    // sort(v3.begin(), v3.end()); // sort merged array

    cout << "Merged Array 3: ";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
}

/*************************************************************/

int main()
{
    clock_t begin = clock();
    // file_i_o();

    Main();

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}