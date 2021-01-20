#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int t, n;
    char x;

    cin >> n >> t;

    string line;

    cin >> line;

    while (t--)
    {
        for (size_t j = 1; j < n; j++)
        {
            if (line[j] == 'G' && line[j - 1] == 'B')
            {
                line[j] = 'B';
                line[j - 1] = 'G';
                j++;
            }
        }
    }
    cout << line;
    return 0;
}
