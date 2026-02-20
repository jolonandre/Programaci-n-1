#include <iostream>

using namespace std;

int CalcularPromedio (for totalGeneral, int numeroVeces);
int main(){
float totalInicial = 100+ 200;
int numeroVeces = 10;
cout << "Promedio General: "<< CalcularPromedio(totalInicial,numeroVeces)<<endl;
return 0;
}
int CalcularPromedio(float totalGeneral, int numeroVeces)
{
    return totalGeneral/numeroVeces;
}
