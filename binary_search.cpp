#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void binary_search(int a[], int n, int x)
{
   int k=1;
   for(int b = n/2; b>=1; b/=2)
   {
      while(k+b<=n && a[k+b] <= x)
         k+=b;
   }
   if(a[k] == x )
      cout<<"Element found at index: "<<k<<endl;
   else
      cout<<"Element NOt found"<<endl;
}
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

   int a[n+1];

   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
   }
   int x;
   cin>>x;
   binary_search(a,n,x);


   
return 0;
}