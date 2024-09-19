#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username; // Leemos el nombre del ususario

    // Usamos un set para almacenar los caracteres distintos
    set<char> distinct_characters;

    // Recorremos el string y añadimos los caracteres al set
    for (char c : username) {
        distinct_characters.insert(c);
    }

    // Verificamos si el número de caracteres distintos es par o impar
    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WHIT HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}