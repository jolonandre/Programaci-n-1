#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    cout<<1+rand()%2<<endl;
    cout<<1+rand()%100<<endl;
    cout<<rand()%10<<endl;
    cout<<1000+rand()%113<<endl;
    cout<<-1+rand()%3<<endl;
    cout<<-3+rand()%15<<endl;
    return 0;
}