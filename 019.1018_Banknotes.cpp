#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,remainder;
    cin>>N;
    int Note100=N/100;
    remainder=N%100;
    int Note50=remainder/50;
    remainder=remainder%50;
    int Note20=remainder/20;
    remainder=remainder%20;
    int Note10=remainder/10;
    remainder=remainder%10;
    int Note5=remainder/5;
    remainder=remainder%5;
    int Note2=remainder/2;
    remainder=remainder%2;
    int Note1=remainder/1;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",Note100);
    printf("%d nota(s) de R$ 50,00\n",Note50);
    printf("%d nota(s) de R$ 20,00\n",Note20);
    printf("%d nota(s) de R$ 10,00\n",Note10);
    printf("%d nota(s) de R$ 5,00\n",Note5);
    printf("%d nota(s) de R$ 2,00\n",Note2);
    printf("%d nota(s) de R$ 1,00\n",Note1);
    }
