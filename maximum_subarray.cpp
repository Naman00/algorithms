// finding maximum subarray sum in O(n)
#include<bits/stdc++.h>
#define ral(i,n) for(int i=1;i<=n;i++)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define mod 1000000007
#define vect vector<int>
#define pb push_back
#define ll long long 
using namespace std;

int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif 

   int n;
   cin>>n;
   int a[n];

   for(int i=1;i<=n;i++)
   {
   		cin>>a[i];
   }

   int maxs = a[0];
   int cur_sum = maxs;

   for(int i=1 ;i<n;i++)
   {
   		cur_sum = max(cur_sum + a[i], a[i]);
   		maxs = max(maxs,cur_sum);
   }

   cout<<maxs<<endl;
   

}