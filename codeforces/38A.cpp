#include<bits/stdc++.h>
using namespace std;
int main(){
          int n;cin >> n;
          int A[101];
          for(int i=1;i<=n-1;i++){
                    cin >> A[i];
          }
          int a,b;cin >> a >> b;
          int s=0;
          for(int i=a;i<=b-1;i++){
                    s+=A[i];
          }
          cout << s << '\n';
}
