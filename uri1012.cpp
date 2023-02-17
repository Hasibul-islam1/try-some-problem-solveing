#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    double t=(A*C)/2;
    double cer=3.14159*pow(C,2);
    double tra =(A+B)/2*C;
    double s = pow(B,2);
    double r =A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<t<<endl<<"CIRCULO: "<<cer<<endl<<"TRAPEZIO: "<<tra<<endl<<"QUADRADO: "<<s<<endl<<"RETANGULO: "<<r<<endl;
    return 0;
}