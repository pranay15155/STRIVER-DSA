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
void selection_sort(vector<ll> &v)
{
    ll n = v.size();
    ll mini = 1e8;
    for (int i = 0; i < n - 1; ++i)
    {
        mini = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (v[mini] > v[j])
            {
                mini = j;
            }
        }
        swap(v[i], v[mini]);
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    cin >> v;
    selection_sort(v);
    cout << v;
    return 0;
}
