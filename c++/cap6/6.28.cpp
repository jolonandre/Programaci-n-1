#include <iostream>
using namespace std;
bool perfecto(int n){
    int s=0;
    for(int i=1;i<n;i++) if(n%i==0) s+=i;
    return s==n;
}
int main(){
    for(int i=1;i<=1000;i++)
        if(perfecto(i)) cout<<i<<endl;
}