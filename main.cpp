#include <iostream>

using namespace std;

int main()
{
    /*
    string full_name;
    cout << "Ingrese su nombre: ";
    //cin >> full_name;     PROBLEMA solo se escribe hasta el primer espacio en blanco
    getline(cin, full_name);

    cout << "Tu nombre es: "<<full_name<<endl;
    return 0;
    */

    int num;
    cout<<"ingrese un numero par por favor: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "ES PAR" << endl;
    } else{
            cout << "ES IMPAR" << endl;
    }
    return 0;
}
