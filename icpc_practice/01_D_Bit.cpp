#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; // Número de instrucciones
    cin >> n;

    int x = 0; // Valor inicial de x es 0

    for (int i = 0; i < n; i++){
        string instruction;
        cin >> instruction; // Leer cada instrucción

        //Comprobar si la instrucción contiene "++"
        if (instruction.find("++") != string::npos){
            x++; // Incrementar x en 1
        }
        // Comprobar si la instrucción contiene "--"
        if (instruction.find("--") != string::npos){
            x--; // Disminuir x en 1
    }

    cout << x << endl; // Imprimir el valor final de x
    
    return 0;
}