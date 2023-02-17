#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    double a,b,c;
    cin>>name>>a>>b;
    c=a+(b*15)/100;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<c<<endl;

    return 0;
}