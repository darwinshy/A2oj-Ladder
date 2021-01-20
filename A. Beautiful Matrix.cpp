#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    size_t i, j;
    int p, q;
    for (i = 0; i < 4; i++)

        for (j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                p = i;
                q = j;
            }
        }

    int row = 3 - p;
    int col = 3 - q;

    int result = abs(row) + abs(col);

    cout << result;

    return 0;
}
