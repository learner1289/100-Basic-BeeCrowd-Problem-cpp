#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,hours;
    double amount,salary;
    cin>>num>>hours>>amount;
    salary= (hours * amount);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %0.2lf\n",salary);
}
