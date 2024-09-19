#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string stones;

    cin >> n >> stones; // Leer el número de piedras y la secuencia de colores

    int count = 0; // Contador para el número de eliminaciones

    // Recorrer las piedras y contar las eliminaciones necesarias
    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
}