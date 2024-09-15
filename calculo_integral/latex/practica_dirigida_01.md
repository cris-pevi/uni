# Practica Dirigida N° 1
---

### Problema 1

Sea \( f(x) \) es una antiderivada de \( v(x) \), debemos determinar el valor de verdad de las siguientes proposiciones:

a) \( 3f(x) \) es una antiderivada de \( 3v(x) \)
b) \( 2f(2x) \) es una antiderivada de \( v(2x) \)
c) \( f(x + 3) \) es una antiderivada de \( v(x + 3) \)

### Solución

Para resolver este ejercicio, recordemos que si \( F(x) \) es una antiderivada de \( v(x) \), entonces:

\[
F'(x) = v(x).
\]

##### a) \( 3f(x) \) es una antiderivada de \( 3v(x) \)

Consideremos la función \( g(x) = 3f(x) \). Calculamos la derivada de \( g(x) \):

\[
g'(x) = \frac{d}{dx}[3f(x)] = 3f'(x).
\]

Como \( f(x) \) es una antiderivada de \( v(x) \), sabemos que \( f'(x) = v(x) \). Por lo tanto:

\[
g'(x) = 3v(x).
\]

Esto implica que \( g(x) = 3f(x) \) es una antiderivada de \( 3v(x) \).

Por lo tanto la proposición es **verdadera**.
<br>
##### b) \( 2f(2x) \) es una antiderivada de \( v(2x) \)

Consideremos la función \( h(x) = 2f(2x) \). Calculamos la derivada de \( h(x) \):

\[
h'(x) = \frac{d}{dx}[2f(2x)] = 2 \cdot \frac{d}{dx}[f(2x)].
\]

Aplicamos la regla de la cadena para derivar \( f(2x) \):

\[
\frac{d}{dx}[f(2x)] = f'(2x) \cdot \frac{d}{dx}[2x] = f'(2x) \cdot 2 = 2f'(2x).
\]

Sustituyendo en la derivada de \( h(x) \):

\[
h'(x) = 2 \cdot 2f'(2x) = 4f'(2x).
\]

Dado que \( f'(x) = v(x) \), entonces \( f'(2x) = v(2x) \). Por lo tanto:

\[
h'(x) = 4v(2x).
\]

Como \( h'(x) \neq v(2x) \), \( h(x) = 2f(2x) \) no es una antiderivada de \( v(2x) \).

Por lo tanto la proposición es **falsa**.
<br>
##### c) \( f(x + 3) \) es una antiderivada de \( v(x + 3) \)

Consideremos la función \( k(x) = f(x + 3) \). Calculamos la derivada de \( k(x) \):

\[
k'(x) = \frac{d}{dx}[f(x + 3)].
\]

Aplicamos la regla de la cadena:

\[
k'(x) = f'(x + 3) \cdot \frac{d}{dx}[x + 3] = f'(x + 3) \cdot 1 = f'(x + 3).
\]

Como \( f'(x) = v(x) \), entonces \( f'(x + 3) = v(x + 3) \). Por lo tanto:

\[
k'(x) = v(x + 3).
\]

Esto implica que \( k(x) = f(x + 3) \) es una antiderivada de \( v(x + 3) \).

Por lo tanto la proposición es **verdadera**.

#### Resumen

- **a) Verdadera**: \( 3f(x) \) es una antiderivada de \( 3v(x) \).
- **b) Falsa**: \( 2f(2x) \) no es una antiderivada de \( v(2x) \).
- **c) Verdadera**: \( f(x + 3) \) es una antiderivada de \( v(x + 3) \).

---

### Problema 2

Determine la antiderivada \( F(x) \) de la función \( f(x) \), suponiendo que \( F(0) = 0 \). 

##### a) \( f(x) = 4x - \sqrt{x} \)

Para encontrar la antiderivada de \( f(x) \), necesitamos integrar cada término de la función.

\[
F(x) = \int (4x - \sqrt{x}) \, dx
\]

Separando la integral en dos términos:

\[
F(x) = \int 4x \, dx - \int \sqrt{x} \, dx
\]

Calculamos cada integral por separado:

- Para la primera integral:

\[
\int 4x \, dx = 4 \cdot \frac{x^2}{2} = 2x^2
\]

- Para la segunda integral, recordamos que \( \sqrt{x} = x^{1/2} \):

\[
\int x^{1/2} \, dx = \frac{x^{3/2}}{3/2} = \frac{2}{3}x^{3/2}
\]

Entonces, la antiderivada es:

\[
F(x) = 2x^2 - \frac{2}{3}x^{3/2} + C
\]

Dado que \( F(0) = 0 \), evaluamos en \( x = 0 \):

\[
F(0) = 2(0)^2 - \frac{2}{3}(0)^{3/2} + C = 0 \implies C = 0
\]

Por lo tanto, la antiderivada es:

\[
F(x) = 2x^2 - \frac{2}{3}x^{3/2}
\]

<br>

##### b) \( f(x) = \frac{1}{(x + 1)^2} \)

Integramos la función:

\[
F(x) = \int \frac{1}{(x + 1)^2} \, dx
\]

Reconocemos que esta es una integral de la forma \( \int (x + a)^{-n} \, dx \). Usamos la fórmula:

\[
\int (x + a)^{-n} \, dx = \frac{(x + a)^{1-n}}{1-n} + C, \quad \text{para } n \neq 1.
\]

Aquí, \( n = 2 \) y \( a = 1 \), así que:

\[
F(x) = \frac{(x + 1)^{-1}}{-1} + C = -\frac{1}{x + 1} + C
\]

Dado que \( F(0) = 0 \):

\[
F(0) = -\frac{1}{0 + 1} + C = -1 + C = 0 \implies C = 1
\]

Entonces:

\[
F(x) = -\frac{1}{x + 1} + 1
\]

<br>

##### c) \( f(x) = e^{-2x} + 3x^2 \)

Calculamos la integral de \( f(x) \):

\[
F(x) = \int (e^{-2x} + 3x^2) \, dx
\]

Separando las integrales:

\[
F(x) = \int e^{-2x} \, dx + \int 3x^2 \, dx
\]

- Para la primera integral, usamos la fórmula de la integral de una exponencial:

\[
\int e^{-2x} \, dx = -\frac{1}{2}e^{-2x}
\]

- Para la segunda integral:

\[
\int 3x^2 \, dx = 3 \cdot \frac{x^3}{3} = x^3
\]

Entonces:

\[
F(x) = -\frac{1}{2}e^{-2x} + x^3 + C
\]

Dado que \( F(0) = 0 \):

\[
F(0) = -\frac{1}{2}e^0 + 0^3 + C = -\frac{1}{2} + C = 0 \implies C = \frac{1}{2}
\]

Por lo tanto:

\[
F(x) = -\frac{1}{2}e^{-2x} + x^3 + \frac{1}{2}
\]

### Resumen de Resultados

- **a)** \( F(x) = 2x^2 - \frac{2}{3}x^{3/2} \) 
<br>
- **b)** \( F(x) = -\frac{1}{x + 1} + 1 \)
<br>
- **c)** \( F(x) = -\frac{1}{2}e^{-2x} + x^3 + \frac{1}{2} \)

---