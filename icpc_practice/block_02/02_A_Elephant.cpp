#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x; // Leemos la posición del amigo

    //Calculamos el número de pasos necesarios usando la división entera y residuo
    int steps = x / 5; // División entera para contar cuántos pasos completos de 5 puede dar
    if (x % 5 != 0) {
        // Si hay residuo, necesita un paso adicional
        steps++;
    }

    cout << steps << endl;
    
}