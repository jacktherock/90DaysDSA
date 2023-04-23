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
    /* Stack :  LIFO - Last In First Out

       0----> .pop removes last inserted element
    |    |
    | 61 |
    | 23 |<---- container
    | 45 |
    |----|

    */

    stack<int> stk;
    stk.push(45); // .push - insert element in stack
    stk.push(23);
    stk.push(61);

    int num = 0;
    stk.push(num);

    stk.pop(); // .pop - removes last inserted element i.e element on top
    // stk.pop();

    while (!stk.empty())
    {                             // .empty - shows the stack is empty or not
        cout << stk.top() << " "; // .top - shows top element
        stk.pop();
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