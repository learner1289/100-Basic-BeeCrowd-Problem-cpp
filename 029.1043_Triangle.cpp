#include<bits/stdc++.h>
using namespace std;
int main(){
    float A,B,C,perimeter,area;
    cin>>A>>B>>C;
    perimeter = A+B+C;
    area = 0.5 * ( A + B ) *C;
    if( A + B > C && A + C > B && B + C > A){
        printf("Perimetro = %0.1f\n",perimeter);
        }
    else printf("Area = %0.1f\n",area);
}
