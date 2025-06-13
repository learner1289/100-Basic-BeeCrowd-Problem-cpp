#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        float a,b,c,avrg;
        cin>>a>>b>>c;
        avrg= (a*2 + b*3 + c*5)/10;
        printf("%0.1f\n",avrg);
    }
}
