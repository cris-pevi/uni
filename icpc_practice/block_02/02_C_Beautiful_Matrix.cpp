#include <iostream>
#include <cmath> // Para usar abs()
using namespace std;

int main(){
    int matrix[5][5];
    int x, y; // Coordenadas del "1" en la matriz

    // Leemos la matriz y encontramos la posición del "1"
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                x = i; // Guardamos la fila donde se encuentra el "1"
                y = j; // Guardamos la columna donde se encuentra el "1"
            }
        }
    }

    // Calculamos la distancia hasta el centro (2, 2) en base a índices de 0
    int moves = abs(x - 2) + abs(y - 2);
    cout << moves << endl; // Imprimimos el número mínimo de movimientos

    return 0;
}