#include <iostream>
#include <stdlib.h>

using namespace std;
int ing;
int main()
{
    cout << "Numero Random" << endl;

cout<< "ingrese un numero"<<endl;
cin>>ing;
    int numran, contador;
    contador=0;

    srand(ing);
    while(contador<10){
        numran= 1 + rand() %100;
        cout<< numran<<endl;
        contador++;

    }

    return 0;
}
