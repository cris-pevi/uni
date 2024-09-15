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

