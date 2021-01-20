#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t, a = 0, b = 0, c = 0;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a = a + x;
        b = b + y;
        c = c + z;
    }

    if (a == 0 && b == 0 && c == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
