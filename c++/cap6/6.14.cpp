#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x; cin>>x;
    cout<<floor(x+0.5)<<endl;
    cout<<floor(x*10+0.5)/10<<endl;
    cout<<floor(x*100+0.5)/100<<endl;
    cout<<floor(x*1000+0.5)/1000<<endl;
    return 0;
}