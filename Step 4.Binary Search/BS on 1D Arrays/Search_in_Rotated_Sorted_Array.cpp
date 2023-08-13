//T.C = O(log n)
//S.C = O(1)
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
   int target;
   cin >> target;
   int ans = -1; // if element is not present inside array our ans is -1
   int low = 0;
   int high = n - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] == target)
      {
         ans = mid; // since it is given that array elements are unique
         break;     // there is only one target
      }
      else if (arr[low] <= arr[mid])
      { // this means that left portion is sorted
         // now we will check inside left portion if our target is present or not
         if (target >= arr[low] && target <= arr[mid])
         {
            // this shows our target is present inside left part
            // so we delete right part
            high = mid - 1;
         }
         else
         { // this says target is not present inside left part
            // so delete left part
            low = mid + 1;
         }
      }
      else
      { // this says left portion is not sorted(right is)
         if (target >= arr[mid] && target <= arr[high])
         {
            low = mid + 1;
         }
         else
         {
            high = mid - 1;
         }
      }
   }
   cout << ans << endl;
}