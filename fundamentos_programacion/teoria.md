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