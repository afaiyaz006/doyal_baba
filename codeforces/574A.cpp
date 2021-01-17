#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
            return (a>b);
}
int main(){
            int n;cin >> n;
            int A[10000];
            for(int i=0;i<n;i++){
                    cin >> A[i];
            }
            int g=A[0];
            int c=1;
            int co=0;
     
            while(1){
                    sort(A+1,A+n,greater<int>());
             
                    if(A[c]>=g){
                            A[c]--;
                            g++;
                            co++;
     
                    }
                    else break;
     
            }
            cout << co << "\n";
     
}
