#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Leemos el número de personas

    bool isHard = false; // Flag para indicar si el problema es dificil

    for (int i = 0; i < n; i++){
        int opinion;
        cin >> opinion; // Leemos la opinion de cada persona
        if (opinion == 1) {
            // Si alguien piensa que es dificil
            isHard = true;
            break; // Terminamos el ciclo ya que basta con una persona
        }
    }

    if (isHard) {
        cout << "HARD" << endl; // Imprimimos "HARD" si el problema es difici
    } else {
        cout << "EASY" << endl; // Imprimimos "EASY" si el problema es fácil
    }

    return 0;
}