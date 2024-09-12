#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n; // Leemos el número de palabras

    for (int i = 0; i < n; i++){
        string word;
        cin >> word; // Leemos cada palabra

        //Verificamos si al palabra tiene más de 10 caracteres
        if (word.length() > 10){
            //Abreviamos la palabra
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            //Imprimimos la palabra sin cambios
            cout << word << endl;
        }
    }

    return 0;
}