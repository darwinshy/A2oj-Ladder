#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
#include <list>
#include <math.h>
using namespace std;
#define ll long long int
#define pll pair<ll, ll>
#define pii pair<int, int>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define get(a) cin >> a
#define getn(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define show(a, n)              \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " ";
#define forab(i, a, b) for (int i = a; i < b; i++)
#define forabr(i, a, b) for (int i = b - 1; i >= a; i--)
#define fora(i, a) for (int i = 0; i < a; i++)
#define forar(i, a) for (int i = a - 1; i >= 0; i--)
#define gcd(a, b) __gcd(a, b)
#define fastaf ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mod 4294967296
#define inf 1e18

int main()
{
    fastaf;
    int t, res = 0;
    get(t);

    int *ax = new int[t * sizeof(int)];
    int *ay = new int[t * sizeof(int)];

    fora(i, t)

    {
        int x, y;
        cin >> x >> y;
        ax[i] = x;
        ay[i] = y;
    }

    fora(i, t)
    {
        int m = 0, n = 0, o = 0, p = 0;

        fora(j, t) if (i != j)
        {
            if (ax[j] > ax[i] && ay[j] == ay[i])
                m = 1;
            if (ax[j] < ax[i] && ay[j] == ay[i])
                n = 1;
            if (ax[j] == ax[i] && ay[j] < ay[i])
                o = 1;
            if (ax[j] == ax[i] && ay[j] > ay[i])
                p = 1;
        }
        if (m == 1 && n == 1 && o == 1 && p == 1)
            res++;
    }
    cout << res;
    return 0;
}
