#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,D,sumCD,sumAB;
    cin>>A>>B>>C>>D;
    sumCD=C+D;
    sumAB=A+B;
    if(B>C && D>A && sumCD>sumAB && C>0 && D>0 && A%2==0){
        printf("Valores aceitos\n");
    }
    else printf("Valores nao aceitos\n");
}
