#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    int n, k, count = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myVector.push_back(x);
    };

    for (int i = 0; i < n; i++)
    {
        if (myVector[i] > 0 && myVector[i] >= myVector[k - 1])
        {
            count++;
        }
    };

    cout << count;
    return 0;
}