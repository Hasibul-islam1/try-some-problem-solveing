#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x;
    cin>>a>>b;
    a= a*3.5;
    b=b*7.5;
    x=(a+b)/(3.5+7.5);
    cout <<"MEDIA = "<<fixed<<setprecision(5)<<x<<endl;
    return 0;
} 
// #include<iostream>
// using namespace std;
// // main function
// int main()
// {
//    // declare variables
//    double x, y; // to store input
//    double sum; // to store sum
//    double avg; // to store average

//    // take input values
//    cout << "Enter two numbers: ";
//    cin >> x >> y;
  
//    // calculate sum value
//    sum = x + y;

//    // calculate average value
//    avg = sum/2;
  
//    // display result
//    cout << "Sum = " << sum << endl;
//    cout << "Average = " << avg << endl;

//    return 0;
// }