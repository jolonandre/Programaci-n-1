#include <iostream>
using namespace std;
int main(){
    int n=7631,inv=0;
    while(n>0){
        inv=inv*10+n%10;
        n/=10;
    }
    cout<<inv;
}