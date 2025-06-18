#include<bits/stdc++.h>
using namespace std;
int main(){
    int years,months,days;
    cin>>days;
        years=days/365;
        days=days%365;
        months=days/30;
        days=days%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);
    }
