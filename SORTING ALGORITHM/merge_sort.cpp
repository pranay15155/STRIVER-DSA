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

void merge(vector<ll> &v, ll low, ll mid, ll high)
{
    ll left = low;
    ll right = mid + 1;
    vector<ll> temp;
    while (left <= mid && right <= high)
    {
        if (v[left] > v[right])
        {
            temp.push_back(v[right]);
            right++;
        }
        else
        {
            temp.push_back(v[left]);
            left++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; ++i)
    {
        v[i] = temp[i - low];
    }
    // cout << temp << endl;
}

void merge_sort(vector<ll> &v, ll low, ll high)
{
    if (low == high)
    {
        return;
    }
    ll mid = (low + high) / 2;
    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, high);
    merge(v, low, mid, high);
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    cin >> v;
    merge_sort(v, 0, n - 1);
    cout << v;
    return 0;
}

//best O(NlogN)
//worst O(NlogN)
//average O(NlogN)

//space complexity =>O(N)
