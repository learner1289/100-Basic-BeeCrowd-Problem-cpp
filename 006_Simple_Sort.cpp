#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int numbers[3]={n1,n2,n3};
    sort(numbers,numbers+3);

    for(int i=0;i<3;i++){
        cout<<numbers[i]<<endl;
    }
    cout<<endl<<n1<<endl<<n2<<endl<<n3<<endl;
}
