#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

 vector<int>songs(n);
  for(int i=0;i<n;i++)
    {
       cin>>songs[i];

   }
  set<int>playlist;int succcessiveSong=0;
  int i=0,j=0;
   while(j<n)
   {
       while(j<n&&!playlist.count(songs[j]))
        {
          playlist.insert(songs[j]);
          succcessiveSong=max(succcessiveSong,j-i+1);
           j++;
          }
       while(j<n&&playlist.count(songs[j]))
       {
         playlist.erase(songs[i]);
         i++;
       }
   }
  cout<<succcessiveSong<<endl;
}
