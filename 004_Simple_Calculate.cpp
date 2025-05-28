#include<bits/stdc++.h>
using namespace std;
int main(){
    int c1,u1;
    double p1;
    cin>>c1>>u1>>p1;
    int c2,u2;
    double p2;
    cin>>c2>>u2>>p2;

    double o1,o2;
    o1=u1*p1;
    o2=u2*p2;
    printf("VALOR A PAGAR: R$ %0.2f\n",o1+o2);
}
