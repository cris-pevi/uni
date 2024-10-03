## Alcances de la Libreria < string >

La librería `std::string` permite trabajar con cadenas como si fueran objetos, proporcionando una amplia variedad de métodos útiles para la manipulación de textos. Podemos acceder a los caracteres individuales de una cadena utilizando índices, de la misma forma que lo haríamos con un array, pero además, la clase `std::string` proporciona una serie de métodos que te permiten realizar operaciones más avanzadas.

### Principales métodos y funcionalidades

#### 1. Acceso por Índice:
- Se puede acceder a características individuales de la cadena utilizando índices.

```cpp
string palabra = "Universidad Nacional de Ingeniería";
char primeraLetra = palabra[0]; // 'U'
char ultimaLetra = palabra[palabra.size() - 1]; // 'a'
```

Nota: Los índices empiezan en 0

#### 2. Lenght() o size():
- Devuelve la longitud de la cadena (el número de caracteres)

```cpp
string texto = "Carroña";
int longitud = texto.length(); // Retorna 7
// o
int tamano = texto.size(); // Retorna 7
```

#### 3. substr(pos, len):
- Devuelve una subcadena que empieza en la posición `pos` y tiene longitud `len`.

```cpp
string texto = "Fundamentos de Programación";
string subcadena = texto.substr(0, 4); // "Fund"
```

#### 4. find(str):
- Busca la primera aparición de la subcadena `str` en la cadena. Devuelve la posición de la primera letra encontrada o `std::string::npos` si no se encuentra.

```cpp
string texto = "programacion";
size_t posicion = texto.find("grama"); // Devuelve 3
```

#### 5. append(str):
- Añade la cadena `str` al final de la cadena actual.

```cpp
string texto = "Hola";
texto.append(" Mundo"); // "Hola Mundo"
```

#### 6. insert(pos, str):
- Inserta la cadena `str` en la posición `pos`.

```cpp
string texto = "Hola Mundo";
texto.insert(5, "Bonito "); // "Hola Bonito Mundo"
```

#### 7. erase(pos, len):
- Borra `len` caracteres de la cadena comenzando en la posición `pos`.

```cpp
string texto = "Hola Mundo";
texto.erase(5, 6); // "Hola"
```

#### 8. replace(pos, len, str):
- Reemplaza `len` caracteres de la cadena comenzando en la posición `pos` con la cadena `str`.

```cpp
string texto = "Hola Mundo";
texto.replace(5, 5, "Hermoso"); // "Hola Hermoso"
```

#### 9. empty():
- Verifica si la cadena está vacía.

```cpp
string texto = "";
if (texto.empty()) {
    // Hace algo si está vacío
}
```

#### 10. clear():
- Limpia el contenido de la cadena, dejándola vacía.

```cpp
string texto = "Hola";
texto.clear(); // ""
```

#### 11. compare():
- Compara la cadena con `str`. Devuelve 0 si son iguales, un número negativo si es menor que `str`, y un número positivo si es mayor.

```cpp
string texto1 = "Hola";
string texto2 = "Mundo";
int resultado = texto1.compare(texto2); // Comparación lexicográfica
```

## Alcances de la Libreria < vector >

La clase `vector` es parte de la biblioteca estándar de `C++` (STL - Standard Template Library). Un `vector` es un arreglo dinámico que puede cambiar de tamaño automáticamente cuando se agregan o eliminan elementos. A diferencia de los arreglos estáticos, los vector pueden crecer o reducirse según sea necesario.

### Casos más frecuentes de uso

1. Cuando se necesita un arreglo dinámico: Cuando el tamaño de los datos no es conocido de antemano o cambia frecuentemente.
2. Al trabajar con listas o colecciones: Cuando se necesita una lista que puede crecer o reducirse fácilmente.
3. Compatibilidad con STL: Cuando necesitamos aprovechar funciones de la STL, como `sort`, `find`, `count`, entre otros.


### Principales métodos y funcionalidades

#### 1. push_back(elemento):
- Añade un elemento al final del `vector`.

```cpp
vector<int> numeros;
numeros.push_back(5); // Añade el 5 al final del vector
```

#### 2. pop_back():
- Elimina el último elemento del `vector`.

```cpp
numeros.pop_back(); // Elimina el último elemento del vector
```

#### 3.size():
- Devuelve el número de elementos en el `vector`

```cpp
int tamano = numeros.size(); // Devuelve el tamaño del vector
```

#### 4. empty():
- Devuelve `true` si el `vector` está vacío, `false` en caso contrario.

```cpp
if (numeros.empty()) {
    cout << "El vector está vacío";
}
```

#### 5. clear():
- Elimina todos los elementos del `vector`, dejándolo vacío.

```cpp
numeros.clear(); // Elimina todos los elementos
```

#### front() y back():
- Devuelven una referencia al primer (`front()`) o último (`back()`) elemento del `vector`.

```cpp
int primero = numeros.front(); // Primer elemento
int ultimo = numeros.back(); // Último elemento
```

## Vectores y matrices

- **Declararación de un array índice por índice y luego imprimirlo**

```cpp
#include <iostream>
using namespace std;

int main() {
    int array[3];

    array[0] = 7;
    array[1] = 5,
    array[2] = 4;

    for (int i = 0; i < 3; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Declaración de un array en una sola línea**
```cpp
#include <iostream>
using namespace std;

int main() {
    int array[4] = {2, 4, 6, 7};

    for (int i = 0; i < 4; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Declaración de un array de tipo char**
```cpp
#include <iostream>
using namespace std;

int main(){
    char palabras[3][20] = {"Hola", "soy", "Cristhyan"};

    for (int i = 0; i < 3; i++){
        cout << palabras[i] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Ingresar valores de array por consola**
```cpp
#include <iostream>
using namespace std;

int main() {
    //Declaramos un array de 4 valores
    int array[4];

    //Ingresamos valores por consola
    for (int i = 0; i < 4; i++) {
        cin >> array[i];
    }

    //Imprimimos los valores
    for (int j = 0; j < 4; j++) {
        cout << array[j] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Ingresar valores de tipo `char` a un array por consola**
```cpp
#include <iostream>
using namespace std;

int main() {
    char palabras[3][20];

    for (int i = 0; i < 3; i++) {
        cin >> palabras[i];
    }

    for (int j = 0; j < 3; j++) {
        cout << palabras[j] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Ingresar valores `int` a un array por consola indicado el len**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int vector[n];

    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }

    for (int j = 0; j < n; j++) {
        cout << vector[j] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Ingresar valores `char` a un array por consola indicado el len**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char palabras[n][20];

    for (int i = 0; i < n; i++) {
        cin >> palabras[i];
    }

    for (int j = 0; j < n; j++) {
        cout << palabras[j] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Declarar un array con la libreria vector**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }

    cout << "\n";
    return 0;
}
```

- **Funciones para Llenar e imprimir un vector**
```cpp
#include <iostream>
using namespace std;

void llenar_vector(int vector[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }
}

void imprimir_vector(int vector[], int n) {
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    int array[n];

    llenar_vector(array, n);
    imprimir_vector(array, n);

    return 0;
}
```

- **Declarar 3 vectores e imprimirlos mediante funciones**
```cpp
#include <iostream>
using namespace std;

void llenar_funcion(int array[], int a, int b) {
    cout << "Llenar el vector " << b << " :";
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }
}

void sumar_vectores(int array[], int vector[], int arreglo[], int a) {
    for (int i = 0; i < a; i++) {
        arreglo[i] = array[i] + vector[i];
    }
}

void print_vector(int array[], int n, int m) {
    cout << "Imprimir vector " << m << " :\t";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    int vector_1[n], vector_2[n], vector_3[n];

    llenar_funcion(vector_1, n, 1);
    llenar_funcion(vector_2, n, 2);

    sumar_vectores(vector_1, vector_2, vector_3, n);

    cout << "Imprimiendo ...\n";
    print_vector(vector_1, n, 1);
    print_vector(vector_2, n, 2);
    print_vector(vector_3, n, 3);

    return 0;
}
```

- **Declarar filas y columnas en una matriz**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char matriz[n][m];

    cout << "Llenando ...\n";
    for (int i = 0; i < n; i++) {
        cin >> matriz[i];
    }
    
    cout << "Imprimiendo...\n";
    for (int i = 0; i < n; i++) {
        cout << matriz[i] << " " ;
    }
    cout << "\n";

    return 0;
}
```