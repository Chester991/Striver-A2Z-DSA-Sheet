#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int a, b;
   cin >> a >> b;

   vector<int> arr1(a), arr2(b);

   for (int i = 0; i < a; i++)
   {
      cin >> arr1[i];
   }

   for (int i = 0; i < b; i++)
   {
      cin >> arr2[i];
   }

   vector<int> uni;
   int i = 0, j = 0;

   while (i < a && j < b)
   {
      if (arr1[i] < arr2[j])
      {
         if (uni.empty() || uni.back() != arr1[i])
         {
            uni.push_back(arr1[i]);
         }
         i++;
      }
      else if (arr2[j] < arr1[i])
      {
         if (uni.empty() || uni.back() != arr2[j])
         {
            uni.push_back(arr2[j]);
         }
         j++;
      }
      else
      {
         if (uni.empty() || uni.back() != arr1[i])
         {
            uni.push_back(arr1[i]);
         }
         i++;
         j++;
      }
   }

   while (i < a)
   {
      if (uni.empty() || uni.back() != arr1[i])
      {
         uni.push_back(arr1[i]);
      }
      i++;
   }

   while (j < b)
   {
      if (uni.empty() || uni.back() != arr2[j])
      {
         uni.push_back(arr2[j]);
      }
      j++;
   }

   for (int i = 0; i < uni.size(); i++)
   {
      cout << uni[i] << " ";
   }

   return 0;
}
