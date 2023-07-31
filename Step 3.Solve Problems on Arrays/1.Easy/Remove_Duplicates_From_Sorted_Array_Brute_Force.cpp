#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   set<int> s;
   for (auto i : arr)
   {
      s.insert(i);
   }

   int index = 0;
   for (auto it = s.begin(); it != s.end(); ++it)
   {  
      arr[index] = *it;
      index++;
   }

   for (int i = 0; i < index; i++)
   {
      cout << arr[i] << " ";
   }
}