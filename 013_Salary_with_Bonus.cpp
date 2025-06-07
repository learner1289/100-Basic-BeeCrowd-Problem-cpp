#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    double sal,total_sales,bonus,total;
    cin>>name>>sal>>total_sales;
    bonus = total_sales * 0.15;
    total = sal + bonus;
    printf("TOTAL = R$ %0.2f\n", total);
}
