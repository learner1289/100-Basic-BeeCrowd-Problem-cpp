#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    double arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i];
        if(arr[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);
}
