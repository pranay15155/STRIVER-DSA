#include <bits/stdc++.h>
using namespace std;

#define ll long long

template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
    {
        in >> x;
    }
    return in;
}

template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        out << v[i];
        if (i + 1 < v.size())
            out << " ";
    }
    return out;
}
void bubble_sort(vector<ll> &v)
{
    ll n = v.size();
    for (int i = n - 1; i >= 0; --i)
    {
        bool flag = 0;
        for (int j = 0; j < i; ++j)
        {
            if (v[j] > v[j + 1])
            {
                flag = 1;
                swap(v[j], v[j + 1]);
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    cin >> v;
    bubble_sort(v);
    cout << v;
    return 0;
}

//best O(N) ->if array is already sorted
//worst O(N^2)
//average O(N^2)
