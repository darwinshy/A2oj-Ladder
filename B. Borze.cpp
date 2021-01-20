#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    string borze, result;
    cin >> borze;
    int t = borze.length();

    for (size_t i = 0; i < t; i++)
    {
        if (borze[i] == '.')
        {
            result.push_back('0');
            continue;
        }
        else if (borze[i] == '-' && borze[i + 1] == '.')
        {
            result.push_back('1');
            i++;
            continue;
        }
        else if (borze[i] == '-' && borze[i + 1] == '-')
        {
            result.push_back('2');
            i++;
            continue;
        }
    }

    cout << result;

    return 0;
}
