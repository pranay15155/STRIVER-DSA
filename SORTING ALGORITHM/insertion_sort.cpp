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
void insertion_sort(vector<ll> &v)
{
    ll n = v.size();
    for (int i = 0; i < n; ++i)
    {
        ll curr = i;
        while (curr > 0 && v[curr - 1] > v[curr])
        {
            swap(v[curr - 1], v[curr]);
            curr--;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    cin >> v;
    insertion_sort(v);
    cout << v;
    return 0;
}

//best O(N)-->when array is already sorted 
//worst O(N^2)
//average O(N^2)


