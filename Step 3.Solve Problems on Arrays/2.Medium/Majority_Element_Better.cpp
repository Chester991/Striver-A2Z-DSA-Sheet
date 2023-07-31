//T.C = O(n)
//S.C = O(n)
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
   unordered_map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      mp[arr[i]]++;
   }
   int ans = -1;
   for (auto i : mp)
   {
      if (i.second > n / 2)
      {
         ans = i.first;
         break;
      }
   }
   cout<<ans<<endl;  

   return 0;
}