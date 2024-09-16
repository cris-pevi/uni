#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Número de problemas

    int count  = 0; // Contador de problemas que los amigos resolverán

    for (int i = 0; i < n; i++){
        int petya, vaska, tonya;
        cin >> petya >> vaska >> tonya; // Leemos las opiniones de los tres amigos
    
        //Si al menos 2 de los 3 son 1, incrementamos el contador 
        if (petya + vaska + tonya >= 2){
        count++;
        }
    }

    cout << count << endl; // Imprime el número de problemas que resolverán

    return 0;
}