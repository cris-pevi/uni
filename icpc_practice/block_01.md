## A. Watermelon

- **Time limit per test:** 1 second  
- **Memory limit per test:** 64 megabytes

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed `w` kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs an even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

### Input

The first (and the only) input line contains integer number `w` `(1 ≤ w ≤ 100)` — the 
weight of the watermelon bought by the boys.

### Output

Print `YES`, if the boys can divide the watermelon into two parts, each of them weighing an even number of kilos; and `NO` in the opposite case.

### Examples

**Input**
8

**Output**
YES

### Note
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos  respectively (another variant — two parts of 4 and 4 kilos).


## Solución

#### Explicación del problema:

Pete y Billy quieren dividir la sandía en dos partes tal que ambas partes tengan un peso par. Esto significa que el peso total de la sandía `(w)` debe ser divisible en dos partes pares.

#### Condiciones importantes:

1. Cada parte debe ser un número par.
2. Cada parte debe tener un peso positivo (es decir, mayor a 0) 

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  Si `w = 8`:
  Podemos dividir la sandía en dos partes de 4 kilos cada una (4 + 4 = 8). Ambas partes son números pares, por lo tanto, la respuesta es "YES".
</br>
- **Ejemplo 2:**
  Si `w = 3`:
  No podemos dividir 3 en dos partes pares que sumen 3. Por lo tanto, la respuesta es "NO".
</br>
- **Ejemplo 3:**
  Si `w = 2`:
  Aunque 2 es par, no podemos dividirlo en dos partes pares que sean mayores que 0. La única forma de dividir 2 es en 1 y 1, pero eso no cumple con la condición de que ambas partes sean pares. Por lo tanto, la respuesta es "NO".

#### Solución del problema en C++

Para resolver este problema, debemos considerar los siguientes puntos:

1. El peso total w debe ser par para que se pueda dividir en dos partes pares.
2. `w` debe ser mayor que 2, ya que si es igual a 2, no es posible dividirlo en dos partes pares positivas.

#### Código C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w; // Leemos el peso de la sandía
    
    // Verificamos si el peso es mayor que 2 y si es par
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl; // Es posible dividirlo en dos partes pares
    } else {
        cout << "NO" << endl; // No es posible dividirlo en dos partes pares
    }
    
    return 0;
}
```

## B. Way Too Long Words

- **Time limit per test:** 1 second  
- **Memory limit per test:** 256 megabytes

Sometimes some words like `localization` or `internationalization` are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than `10` characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, `localization` will be spelt as `l10n`, and `internationalization` will be spelt as `i18n`.

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

### Input

The first line contains an integer `n` `(1 ≤ n ≤ 100)`. Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from `1` to `100`characters.

### Output

Print `n` lines. The i-th line should contain the result of replacing of the i-th word from the input data.

### Examples

**Input**
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

**Output**
word
l10n
i18n
p43s

## Solución

#### Explicación del problema:

Se debe procesar cada palabra de la lista de entrada. Si una palabra tiene más de 10 caracteres, se abrevia. La abreviatura consiste en:

1. La primera letra de la palabra.
2. El número de letras entre la primera y la última letra.
3. La última letra de la palabra.
4. Si la palabra tiene 10 caracteres o menos, se deja sin cambios.

#### Ejemplos para entender el problema:

- **Ejemplo 1:**
  Palabra: `word`:
  Longitud: 4 (No es mayor a 10)
  Salida: `word`
</br>
- **Ejemplo 2:**
  Palabra: `localization`:
  Longitud: 12 (Mayor a 10)
  Primera letra: `l`
  Última letra: `n`
  Número de letras entre ellas: `10`
  Salida: `l10n`
</br>
- **Ejemplo 3:**
  Palabra: `pneumonoultramicroscopicsilicovolcanoconiosis`:
  Longitud: 45 (Mayor a 10)
  Primera letra: `p`
  Última letra: `s`
  Número de letras entre ellas: `43`
  Salida: `p43s`

#### Solución del problema en C++

Para resolver este problema, leeremos cada palabra, verificamos la longitud, y aplicamos la abreviatura si es necesario.

#### Código C++
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Leemos el número de palabras

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; // Leemos cada palabra

        // Verificamos si la palabra tiene más de 10 caracteres
        if (word.length() > 10) {
            // Abreviamos la palabra
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            // Imprimimos la palabra sin cambios
            cout << word << endl;
        }
    }

    return 0;
}
```





















