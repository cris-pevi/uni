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