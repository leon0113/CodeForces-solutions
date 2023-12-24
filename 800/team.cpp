#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, cnt = 0;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 || a == 0) && (b == 1 || b == 0) && (c == 1 || c == 0))
        {
            if (a + b + c >= 2)
                cnt++;
        }
        else
        {
            cout << "wrong inputs" << endl; // Output only once for each invalid input set
        }
    }

    cout << cnt << endl;
    return 0;
}
