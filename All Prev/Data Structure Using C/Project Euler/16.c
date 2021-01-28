//work
#include<bits/stdc++.h>
using namespace std;
int a[1002];
int main(){
    int n,sum=0,x;
    cin >> n;
    a[0]=1;
    int res=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            x=a[j]*2;
          a[j]=(a[j]*2)%10+res;
          res=x/10;
    }
   }
   for(int i=0;i<1000;i++){
    sum+=a[i];
   }
   cout << endl<<sum << endl;

}