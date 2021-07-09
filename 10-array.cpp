#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n, maxno, minno;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxno = INT_MIN;
    minno = INT_MAX;
    cout<<maxno<<" "<<minno;

    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno,arr[i]);
        minno = min(minno,arr[i]);
    }
    cout << "max element=" << maxno << "  " << " min element = " << minno;
}