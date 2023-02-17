#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C,x;
    cin>>A>>B>>C;
    A =A*2.;
    B = B*3.;
    C = C*5.;
    x =(A+B+C)/(2.+3.+5.);
    cout<<"MEDIA ="<<" "<<fixed<<setprecision(1)<<x<<endl;
    return 0;

}