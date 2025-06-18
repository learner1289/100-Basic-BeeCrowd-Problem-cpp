#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,count=0;
    for(int i=0;i<5;i++){
        cin>>x;
        if(x%2==0){
            count++;
        }
    }
    printf("%d valores pares\n",count);
}
