#include <bits/stdc++.h>
using namespace std;
int main(){
    int p1,u1,p2,u2;
    double pr1,pr2,pay;
    cin>>p1>>u1>>pr1>>p2>>u2>>pr2;
    pay = (u1*pr1) + (u2*pr2);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<pay<<endl;

    return 0;
 
}