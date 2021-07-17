#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
#include <list>
#include <math.h>
#include <set>
#include <cmath>
#include <iostream>
#include <stdint.h>

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
    int t;
    get(t);

    while (t--)
    {
        ll *arr, *arr1, *hash, mx, my;
        double a = 0, b = 0;
        vector<ll> distance;
        int n, i = 0, j = 0, k = 0;
        get(n);

        arr = new ll[n];
        arr1 = new ll[n];
        hash = new ll[n];

        fora(i, n)
        {
            get(arr[i]);
            a = a + arr[i];
            get(arr1[i]);
            b = b + arr1[i];
            hash[i] = 0;
        }
        mx = *max_element(arr, arr + n);
        my = *max_element(arr1, arr1 + n);

        a = (a / n);
        b = (b / n);

        ll c = max(mx, my);
        // cout << c << "|";
        cout << a << " " << b << "|| ";
        for (ll i = 0; i < c; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                double x = (abs(i - a) + abs(j - b));
                distance.push_back(x);
                cout << x << "|";
            }
        }
        cout << "\n";

        // ll minD = *min_element(distance.begin(), distance.end());

        // cout << minD << "\n";
    }

    return 0;
}
