#include <iostream>
#include <cmath>
using namespace std;
double calcularCargos(double horas){
    double cargo=2.0;
    if(horas>3.0) cargo+=ceil(horas-3.0)*0.5;
    if(cargo>10.0) cargo=10.0;
    return cargo;
}
int main(){
    double h1=1.5,h2=4.0,h3=24.0;
    cout<<"Auto\tHoras\tCargo\n";
    cout<<"1\t"<<h1<<"\t"<<calcularCargos(h1)<<endl;
    cout<<"2\t"<<h2<<"\t"<<calcularCargos(h2)<<endl;
    cout<<"3\t"<<h3<<"\t"<<calcularCargos(h3)<<endl;
    return 0;
}