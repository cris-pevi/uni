## A. Boy or Girl

- **Time limit per test:** 1 second  
- **Memory limit per test:** 256 megabytes

Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see `her` in the real world and found out `she` is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is `odd`, then he is a `male`, otherwise she is a `female`. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

### Input

The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

### Output

If it is a female by our hero's method, print `"CHAT WITH HER!"` (without the quotes), otherwise, print `"IGNORE HIM!"` (without the quotes).

### Examples

**Input**
`wjmzbmr`

**Output**
`CHAT WITH HER!`

**Input**
`xiaodao`

**Output**
`IGNORE HIM!`

**Input**
`sevenkplus`

**Output**
`CHAT WITH HER!`

### Note
For the first example. There are 6 distinct characters in `wjmzbmr`. These characters are: `"w", "j", "m", "z", "b", "r"`. So `wjmzbmr` is a female and you should print `CHAT WITH HER!`.

## Solución

#### Explicación del problema:

El objetivo es determinar el género de un usuario en función del número de caracteres distintos en su nombre de usuario.

#### Condiciones importantes:

1. Si el número de caracteres distintos es impar, el usuario es `masculino` y debes imprimir `IGNORE HIM!`.
2. Si el número de caracteres distintos es par, el usuario es `femenino` y debes imprimir `CHAT WITH HER!`.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  Input: `wjmzbmr`:
  - Caracteres distintos: `"w", "j", "m", "z", "b", "r"`
  - Total de caracteres distintos: `6` (par)
  - Salida: `CHAT WITH HER!`
</br>

- **Ejemplo 2:**
  Input: `xiaodao`:
  - Caracteres distintos: `"x", "i", "a", "o", "d"`
  - Total de caracteres distintos: `5` (impar)
  - Salida: `IGNORE HIM!`
</br>

- **Ejemplo 3:**
  Input: `sevenkplus`:
  - Caracteres distintos: `"s", "e", "v", "n", "k", "p", "l", "u"`
  - Total de caracteres distintos: `8` (par)
  - Salida: `CHAT WITH HER!`
</br>

#### Solución del problema en C++

Para resolver este problema:

1. Debemos contar el número de caracteres distintos en el nombre de usuario.
2. Si el número es par, imprimir `CHAT WITH HER!`, si es impar, imprimir `IGNORE HIM!`.

#### Código C++
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username; // Leemos el nombre de usuario
    
    // Usamos un set para almacenar los caracteres distintos
    set<char> distinct_characters;
    
    // Recorremos el string y añadimos los caracteres al set
    for (char c : username) {
        distinct_characters.insert(c);
    }
    
    // Verificamos si el número de caracteres distintos es par o impar
    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
```

- Usamos un `set para almacenar los caracteres únicos del nombre de usuario.
- El tamaño del set nos indica cuántos caracteres distintos hay.
- Si el tamaño del set es par, imprimimos `CHAT WITH HER!`. Si es impar, imprimimos `IGNORE HIM!`.

**Nota:** Si no usamos la estructura `set` el código se vería así:
```cpp
#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;  // Leemos el nombre de usuario
    
    // Creamos un array para contar las apariciones de cada letra
    int freq[26] = {0};  // 26 letras en el alfabeto inglés
    
    // Recorremos el string y actualizamos la frecuencia de cada letra
    for (char c : username) {
        freq[c - 'a']++;  // 'a' tiene valor 0, 'b' tiene valor 1, etc.
    }
    
    // Contamos cuántas letras distintas hay
    int distinct_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            distinct_count++;
        }
    }
    
    // Verificamos si el número de caracteres distintos es par o impar
    if (distinct_count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
```

## A. Stones on the table

- **Time limit per test:** 2 second  
- **Memory limit per test:** 256 megabytes

There are `n` stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

### Input

The first line contains integer `n` `(1 ≤ n ≤ 50)` — the number of stones on the table.

The next line contains string `s`, which represents the colors of the stones. We'll consider the stones in the row numbered from `1` to `n` from left to right. Then the i-th character s equals `R`, if the i-th stone is `red`, `G`, if it's `green` and `B`, if it's `blue`.

### Output

Print a single integer — the answer to the problem.

### Examples

**Input**
`3`
`RRG`

**Output**
`1`

**Input**
`5`
`RRRRR`

**Output**
`4`

**Input**
`4`
`BRBG`

**Output**
`0`

## Solución

#### Explicación del problema:

El objetivo es eliminar el mínimo número de piedras adyacentes con el mismo color, de manera que ninguna piedra vecina sea del mismo color.

#### Condiciones importantes:

1. Si dos piedras adyacentes tienen el mismo color, una debe ser removida.
2. Solo se puede eliminar piedras de manera que cada par de piedras vecinas tengan colores diferentes.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  - Input: `RRG`
  - Eliminar la primera o segunda piedra para evitar que dos piedras vecinas sean del mismo color.
  - Total de eliminaciones: `1`.
  - Output: `1`.
</br>

- **Ejemplo 2:**
  - Input: `RRRRR`
  - Eliminar cuatro piedras consecutivas para que ninguna piedra tenga el mismo color que su vecina.
  - Total de eliminaciones: `4`.
  - Output: `4`.
</br>

- **Ejemplo 3:**
  - Input: `BRBG`
  - Ninguna piedra vecina tiene el mismo color, por lo tanto no es necesario eliminar ninguna.
  - Total de eliminaciones: `0`.
  - Output: `0`.
</br>

#### Código C++
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string stones;
    
    cin >> n >> stones;  // Leer el número de piedras y la secuencia de colores
    
    int count = 0;  // Contador para el número de eliminaciones
    
    // Recorrer las piedras y contar las eliminaciones necesarias
    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }
    
    cout << count << endl;  // Imprimir el resultado
    
    return 0;
}
```