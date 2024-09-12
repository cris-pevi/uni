#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w; // Leemos el peso de la sandía

    // Verificamos si el peso de la sandía es mayor que 2 y si es par
    if(w > 2 and w % 2 == 0){
        cout << "YES" << endl; // Es posible dividirlo en dos pares
    } else {
        cout << "NO" << endl; // No es posible dividirlo en dos pares
    }

    return 0;
}