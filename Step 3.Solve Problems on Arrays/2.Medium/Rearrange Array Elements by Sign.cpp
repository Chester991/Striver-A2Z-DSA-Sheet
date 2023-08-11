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
   vector<int> pos_arr;
   vector<int> neg_arr;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > 0)
      {
         pos_arr.push_back(arr[i]);
      }
      else if (arr[i] < 0)
      {
         neg_arr.push_back(arr[i]);
      }
   }
   vector<int> ans_arr(n);
   for (int i = 0; i < n; i++)
   {
      ans_arr[2 * i] = pos_arr[i];
      ans_arr[(2 * i) + 1] = neg_arr[i];
   }

   for (int i = 0; i < n; i++)
   {
      cout << ans_arr[i] << " ";
   }

   return 0;
}