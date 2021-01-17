#include<iostream>
typedef long long ll;
using namespace std;
int main(){
       ll t,x,y,a,b;
       cin >> t;
       while(t-->0){
          cin >> x >> y;
          cin >> a >> b;
          if(x==0 && y==0) cout << 0 << "\n";
          else if(x==y){
     
               if(x*a*2>x*b) cout << x*b << "\n";
               else cout << x*a*2 << "\n";
     
         }
          else if(x>y){
               ll r=y*b+(x-y)*a;
               ll p=y*a+x*a;
               if(p>r) cout << r << "\n";
               else cout << p << "\n";
          }
          else if(y>x){
               ll r=x*b+(y-x)*a;
               ll p=y*a+x*a;
               if(p>r) cout << r << "\n";
               else cout << p << "\n";
          }
     
     
      }
     
     
}
