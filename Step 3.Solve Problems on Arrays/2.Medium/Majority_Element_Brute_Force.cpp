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
   for (int i = 0; i < n; i++)
   {
      int count = 0;
      for (int j = 0; j < n; j++)
      {
         if (arr[i] == arr[j])
         {
            count++;
         }
      }
      if (count > n / 2)
      {
         cout << arr[i] << endl;
         break;
      }
   }

   return 0;
}