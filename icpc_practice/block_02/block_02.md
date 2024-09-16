## A. Elephant

- **Time limit per test:** 1 second  
- **Memory limit per test:** 256 megabytes

An elephant decided to visit his friend. It turned out that the elephant's house is located at point `0` and his friend's house is located at point `x` (`x > 0`) of the coordinate line. In one step the elephant can move `1`, `2`, `3`, `4` or `5` positions forward. Determine, what is the minimum number of steps he needs to make in order to get to his friend's house.

### Input

The first line of the input contains an integer `x` `(1 ≤ x ≤ 1 000 000)` — The coordinate of the friend's house.

### Output

Print the minimum number of steps that elephant needs to make to get from point `0` to point `x`.

### Examples

**Input:**
`5`

**Output:**
`1`

<br> **Input:**
`12`

**Output:**
`3`

### Note
In the first sample the elephant needs to make one step of length `5` to reach the point `x`.

In the second sample the elephant can get to point `x` if he moves by `3`, `5` and `4`. There are other ways to get the optimal answer but the elephant cannot reach `x` in less than three moves.

## Solución

#### Explicación del problema:

El elefante quiere llegar a la casa de su amigo, que se encuentra en la posición `x` de una línea de coordenadas. Puede avanzar en pasos de tamaño `1`, `2`, `3`, `4` o `5`. Se requiere determinar el número mínimo de pasos que necesita dar para llegar desde `0` hasta `x`.

#### Condiciones importantes:

1. El elefante puede avanzar entre `1` y `5` posiciones en un solo paso.
2. Se debe minimizar el número de pasos para llegar exactamente al punto `x`.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  Si `x = 5`:
  
  El elefante puede llegar a la posición `5` en un solo paso de tamaño `5`. La respuesta es `1`.
  
- **Ejemplo 2:**
  Si `x = 12`:
    
    El elefante puede llegar a la posición `12` con los siguientes pasos: `5 + 5 + 2 = 12`. Por lo tanto, la respuesta es `3`.

#### Solución del problema en C++

Para resolver este problema, calculamos el número mínimo de pasos necesarios dividiendo `x` por `5` (ya que el paso más largo es `5`) y luego verificamos si hay un residuo. Si hay un residuo, significa que se necesita un paso adicional.

#### Código C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x; // Leemos la posición del amigo
    
    // Calculamos el número de pasos necesarios usando división entera y residuo
    int steps = x / 5; // División entera para contar cuántos pasos completos de 5 se pueden dar
    if (x % 5 != 0) {  // Si hay residuo, se necesita un paso adicional
        steps++;
    }
    
    cout << steps << endl; // Imprimimos el número de pasos
    
    return 0;
}
```

## B. In Search of an Easy Problem

- **Time limit per test:** 1 second  
- **Memory limit per test:** 256 megabytes

When preparing a tournament, Codeforces coordinators try their best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked `n` people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these `n` people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

### Input

The first line contains a single integer `n` `(1 ≤ n ≤ 100)` — the number of people who were asked to give their opinions.

The second line contains `n` integers, each integer is either `0` or `1`. If `i-th` integer is `0`, then `i-th` person thinks that the problem is easy; if it is `1`, then `i-th` person thinks that the problem is hard.

### Output

Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person who thinks the problem is hard.

You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.

### Examples

**Input:**

`3`

`0 0 1`

**Output:**

`HARD`

**Input:**

`1`

`0`

**Output:**

`EASY`

### Note
In the first example the third person says it's a hard problem, so it should be replaced.

In the second example the problem is easy for the only person, so it doesn't have to be replaced.

## Solución

#### Explicación del problema:

El coordinador de Codeforces ha elegido un problema y preguntó a `n` personas si creen que es fácil o difícil. Si al menos una persona piensa que el problema es difícil (es decir, responde con `1`), se debe cambiar el problema. Si todos piensan que es fácil (responden con `0`), el problema es lo suficientemente fácil.

#### Condiciones importantes:

1. Si alguna de las respuestas es `1`, el problema se considera "HARD".
2. Si todas las respuestas son `0`, el problema se considera "EASY".

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  Si `n = 3` y las respuestas son `0 0 1`:

  Una persona cree que el problema es difícil, por lo tanto, la respuesta es "HARD".
  
<br>

- **Ejemplo 2:**
  Si `n = 1` y la respuesta es `0`:

  La única persona piensa que el problema es fácil, por lo tanto, la respuesta es "EASY".

#### Solución del problema en C++

Para resolver este problema, recorremos la lista de respuestas. Si encontramos al menos un `1`, imprimimos "HARD". Si no encontramos ningún `1`, imprimimos "EASY".

#### Código C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Leemos el número de personas

    bool isHard = false; // Bandera para indicar si el problema es difícil
    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion; // Leemos la opinión de cada persona
        if (opinion == 1) { // Si alguien piensa que es difícil
            isHard = true;
            break; // Terminamos el ciclo ya que basta con una persona
        }
    }

    if (isHard) {
        cout << "HARD" << endl; // Imprimimos "HARD" si el problema es difícil
    } else {
        cout << "EASY" << endl; // Imprimimos "EASY" si el problema es fácil
    }

    return 0;
}
```

## C. Beautiful Matrix

- **Time limit per test:** 2 seconds  
- **Memory limit per test:** 256 megabytes

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

1. Swap two neighboring matrix rows, that is, rows with indexes `i` and `i + 1` for some integer `i` `(1 ≤ i < 5)`.
2. Swap two neighboring matrix columns, that is, columns with indexes `j` and `j + 1` for some integer `j` `(1 ≤ j < 5)`.

You think that a matrix looks **beautiful**, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

### Input

The input consists of five lines, each line contains five integers: the `j-th` integer in the `i-th` line of the input represents the element of the matrix that is located on the intersection of the `i-th` row and the `j-th` column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

### Output

Print a single integer — the minimum number of moves needed to make the matrix beautiful.

### Examples

**Input:**

`0 0 0 0 0`

`0 0 0 0 1`

`0 0 0 0 0`

`0 0 0 0 0`

`0 0 0 0 0`

**Output:**

`3`

<br>

**Input:**

`0 0 0 0 0`

`0 0 0 0 0`

`0 1 0 0 0`

`0 0 0 0 0`

`0 0 0 0 0`

**Output:**

`1`

### Note
In the first example, the "1" is already at the center of the matrix, so the number of moves required is `3`.

In the second example, the "1" is one step away from the center, so only `1` move is needed to make the matrix beautiful.

## Solución

#### Explicación del problema:

Tenemos una matriz de `5 x 5` con solo un `1` y el resto son `0`. Queremos mover el `1` a la posición central de la matriz (fila `3`, columna `3`) utilizando el mínimo número de movimientos. Cada movimiento permite intercambiar dos filas o dos columnas adyacentes.

#### Estrategia de solución:

1. Encontrar la posición del `1` en la matriz.

2. Calcular la distancia entre la posición actual del `1` y la posición central `(3, 3)`.

3. Imprimir la distancia como el número mínimo de movimientos necesarios.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**

  El `1` se encuentra en la fila `3` y columna `3`, ya está en el centro, por lo tanto, el número de movimientos es `0`.

- **Ejemplo 2:**

  El `1` se encuentra en la fila `4` y columna `4`. Para llegar al centro `(3, 3)`, se necesita `1` movimiento hacia arriba y `1` movimiento hacia la izquierda, para un total de `2` movimientos.

#### Solución del problema en C++

Para resolver este problema, leemos la matriz y localizamos la posición del `1`. Luego, calculamos la distancia desde esa posición hasta el centro `(3, 3)`.

#### Código C++
```cpp
#include <iostream>
#include <cmath> // Para usar abs()
using namespace std;

int main() {
    int matrix[5][5];
    int x, y; // Coordenadas del "1" en la matriz

    // Leemos la matriz y encontramos la posición del "1"
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
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
```

## D. Next Round

- **Time limit per test:** 3 seconds  
- **Memory limit per test:** 256 megabytes

"Contestant who earns a score equal to or greater than the `k-th` place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of `n` participants took part in the contest (`n ≥ k`), and you already know their scores. Calculate how many participants will advance to the next round.

### Input

The first line of the input contains two integers `n` and `k` `(1 ≤ k ≤ n ≤ 50)` separated by a single space.

The second line contains `n` space-separated integers `a1, a2, ..., an` `(0 ≤ ai ≤ 100)`, where `ai` is the score earned by the participant who got the `i-th` place. The given sequence is non-increasing (that is, for all `i` from `1` to `n - 1` the following condition is fulfilled: `ai ≥ ai+1`).

### Output

Output the number of participants who advance to the next round.

### Examples

**Input:**
`8` `5`

`10` `9` `8` `7` `7` `7` `5` `5`

**Output:**
`6`
<br>

**Input:**
`4` `2`

`0` `0` `0` `0`

**Output:**
`0`

### Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.

## Solución

#### Explicación del problema:

En este problema, los participantes avanzan a la siguiente ronda si su puntaje es mayor o igual al puntaje del participante en la posición `k` y su puntaje es mayor que `0`. Dado que los puntajes están ordenados de forma no creciente, necesitamos contar cuántos participantes cumplen con estas condiciones.

#### Estrategia de solución:

1. Leer los valores de `n` y `k`.
2. Leer el arreglo de puntajes `a`.
3. Determinar el puntaje en la posición `k` (ajustando el índice a base `0`).
4. Contar cuántos puntajes son mayores o iguales a este puntaje y mayores que `0`.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  - `n = 8`, `k = 5`
  - Puntajes: `10, 9, 8, 7, 7, 7, 5, 5`
  - El puntaje en la posición `k = 5` es `7`.
  - Hay `6` participantes con puntajes mayores o iguales a `7` y mayores que `0`.

<br>

- **Ejemplo 2:**
  - `n = 4`, `k = 2`
  - Puntajes: `0, 0, 0, 0`
  - No hay participantes con puntajes mayores que `0`.

#### Solución del problema en C++

Para resolver este problema, leemos los datos, determinamos el puntaje en la posición `k`, y contamos cuántos participantes tienen puntajes mayores o iguales a este y mayores que `0`.



#### Código C++

- Utilizando la biblioteca *< vector >*

```cpp
#include <iostream>
#include <vector> // Incluimos la biblioteca vector
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Leemos el número de participantes y la posición k

    vector<int> scores(n); // Creamos un vector para almacenar los puntajes
    for (int i = 0; i < n; i++) {
        cin >> scores[i]; // Leemos los puntajes de los participantes
    }

    int score_to_advance = scores[k - 1]; // Puntaje del k-ésimo participante
    int count = 0;

    // Contamos cuántos participantes avanzan a la siguiente ronda
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= score_to_advance && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl; // Imprimimos el número de participantes que avanzan

    return 0;
}
```

- Sin utilizar la biblioteca *< vector >*

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Leemos el número de participantes y la posición k

    // Usamos memoria dinámica para crear un array de tamaño n
    int* scores = new int[n]; 

    for (int i = 0; i < n; ++i) {
        cin >> scores[i]; // Leemos los puntajes de los participantes
    }

    int score_to_advance = scores[k - 1]; // Puntaje del k-ésimo participante
    int count = 0;

    // Contamos cuántos participantes avanzan a la siguiente ronda
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= score_to_advance && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl; // Imprimimos el número de participantes que avanzan

    // Liberamos la memoria asignada dinámicamente
    delete[] scores; 

    return 0;
}
```

- Utilizando memoria estática
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Leemos el número de participantes y la posición k

    int scores[50]; // Usamos memoria estática para un array de tamaño máximo 50

    for (int i = 0; i < n; ++i) {
        cin >> scores[i]; // Leemos los puntajes de los participantes
    }

    int score_to_advance = scores[k - 1]; // Puntaje del k-ésimo participante
    int count = 0;

    // Contamos cuántos participantes avanzan a la siguiente ronda
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= score_to_advance && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl; // Imprimimos el número de participantes que avanzan

    return 0;
}
```