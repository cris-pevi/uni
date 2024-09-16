#include <iostream>
#include <vector> // Incluimos la biblioteca vector
using namespace std;

int main(){
    int n, k;
    cin >> n >> k; // Leemos el número de participantes y la posición k

    vector<int> scores(n); // Creamos un vector para almacenar los puntajes
    for (int i = 0; i < n; i++){
        cin >> scores[i]; // Leemos los puntajes de los participantes
    }

    int score_to_advance = scores[k - 1]; // Puntaje del k-ésimo participante
    int count = 0;

    //Contamos cuántos participantes avanzan a la siguiente ronda
    for (int i = 0; i < n; i++){
        if (scores[i] >= score_to_advance && scores[i] > 0){
            count++;
        }
    }

    cout << count << endl; // Imprimimos el número de participantes que avanzan

    return 0;
}