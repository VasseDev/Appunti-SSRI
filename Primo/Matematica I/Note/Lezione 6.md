---
share: true
---

```table-of-contents

```

![L06 (16.10.2025)](../Slides/L06%20(16.10.2025).pdf)

# Modulo di un reale

> $$x\in\mathbb{R}$$
> definiamo il _modulo_ come $$|x|=\begin{cases}x\quad\quad\text{se}\quad x\geq 0\\-x\quad\space\text{se}\quad x<0\end{cases}$$
> quindi $$|x|\geq0\quad\forall x\in\mathbb{R}$$

## Grafico

```functionplot
---
title:
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: false
---
f(x)=abs(x)
```

In generale il grafico di $|f(x)|$ si ottiene ribaltando la parte negativa di $f(x)$ lungo l'asse delle $x$.

**Esempio**

$$
f(x)=sin(x)
$$

```functionplot
---
title:
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: false
---
f(x)=sin(x)
g(x)=abs(sin(x))
```

> **IMPORTANTE** $$\sqrt{x^2}=|x|$$
> sempre positiva.
> $$\sqrt{x^2}=x$$
> è errata. Infatti già non vale per
> $$x=-3$$
> che diventa
> $$3=-3$$

## Equazioni

### Caso semplice

$$
|f(x)|=c\quad\text{c'è una costante}\space c\in\mathbb{R}
$$

$$
A)\space c\geq 0:f(x)=c\lor f(x)=-c
$$

$$
B)\space c<0:\text{soluzioni}=\varnothing
$$

### Caso più complesso

$$
|f(x)|=|g(x)|\Longleftrightarrow f(x)=g(x)\lor f(x)=-g(x)
$$

**Esempio**

$$
|x^2-1|=|x+1|
$$

_Primo caso_

$$
x^2-1=x+1
$$

$$
x^2-x-2=0
$$

$$
x_{1,2}=\frac{1\pm\sqrt{1+8}}{2}=\frac{1\pm3}{2}=
\begin{align}
2\\
-1
\end{align}
$$

$$
x_1=2\quad x_2=-1
$$

_Secondo caso_

$$
x^2-1=-x-1
$$

$$
x^2+x=0
$$

$$
x(x+1)=0
$$

$$
x_1=0\quad x_2=-1
$$

$$
\text{soluzioni}=\{2,-1,0\}
$$

### Caso ancora più complesso

$$
|f(x)|=g(x)
$$

$$
\begin{cases}
f(x)\geq 0\\
f(x)=g(x)
\end{cases}
\quad
\cup
\quad
\begin{cases}
f(x)<0\\
-f(x)=g(x)
\end{cases}
$$

notare che

$$
|f(x)|=
\begin{cases}
f(x)\quad\quad\text{se}\quad f(x)\geq0\\
-f(x)\quad\space\text{se}\quad f(x)<0
\end{cases}
$$

## Disequazioni

### Casi semplici

$$
|f(x)|\geq c\quad \text{con}\quad c>0\quad \text{costante}
$$

$$
f(x)\geq c\quad\lor\quad f(x)\leq -c
$$

oppure

$$
|f(x)|\leq c\quad\text{con}\quad c>0\quad\text{costante}
$$

$$
-c\leq f(x)\leq c\longleftrightarrow
\begin{cases}
f(x)\leq c\\
f(x)\geq -c
\end{cases}
$$

### Casi complessi

$$
|f(x)|\geq g(x)
$$

$$
\begin{cases}
f(x)\geq0\\
f(x)\leq g(x)
\end{cases}
\quad
\cup
\quad
\begin{cases}
f(x)<0\\
-f(x)\geq g(x)
\end{cases}
$$

oppure

$$
|f(x)|\geq g(x)
$$

$$
\begin{cases}
f(x)\geq0\\
f(x)\leq g(x)
\end{cases}
\quad
\cup
\quad
\begin{cases}
f(x)<0\\
-f(x)\leq g(x)
\end{cases}
$$

**Esempio**

$$
|2x|\geq 4x^2-2\longleftrightarrow
\quad
1^o
\begin{cases}
2x\geq 0\\
2x\geq 4x^2-2
\end{cases}
\quad
\cup
\quad
2^o
\begin{cases}
2x<0\\
-2x\geq 4x^2-2
\end{cases}
$$

1.  $$
    \begin{cases}
    x\geq0\\
    4x^2-2x-2\leq0
    \end{cases}
    \quad
    \begin{cases}
    x\geq0\\
    2x^2-x-1\leq0
    \end{cases}
    $$
    $$
    x_{1,2}=\frac{1\pm\sqrt{1+8}}{4}=\frac{1\pm3}{4}<
    \begin{align}
    1\\
    -1/2
    \end{align}
    $$
    $$
    \text{soluzione 1° sistema}=[0,1]
    $$
2.  $$
    \begin{cases}
    2x<0\\
    -2x\geq4x^2-2
    \end{cases}
    \quad
    \begin{cases}
    x<0\\
    2x^2+x-1\leq0
    \end{cases}
    $$
    $$
    x_{1,2}=\frac{-1\pm\sqrt{1+8}}{4}=\frac{-1\pm3}{4}<
    \begin{align}
    1/2\\
    -1
    \end{align}
    $$
    $$
    \text{soluzione 2° sistema}=[-1,0]
    $$
    La soluzione totale della disequazione è l'unione delle soluzioni dei 2 sistemi:
    $$
    [0,1]\cup[-1,0]=[-1,1]
    $$

### Esercizio

$$
|x^2-1|\geq1
$$

$$
1^o:x^2-1\geq1\quad\land\quad 2^o:x^2-1\leq-1
$$

1.  $$
    x^2-2\geq0
    $$
    $$
    x=\pm\sqrt{2}
    $$
    $$
    x\leq-\sqrt{2}\quad\lor\quad x\geq\sqrt{2}
    $$
2.  $$
    x^2\leq0
    $$
    $$
    x=0
    $$
    $$
    \text{S}= x<-\sqrt{2}\space\lor\space x>\sqrt{2}\space\lor\space x=0
    $$

### Disuguaglianza triangolare

$$
x,y\in\mathbb{R}:\quad|x+y|\leq|x|+|y|
$$

perché?

$$
-|x|\leq x\leq|x|\quad-|y|\leq y\leq|y|
$$

sommo membro a membro

$$
-|x|-|y|\leq x+y\leq|x|+|y|
$$

$$
-(|x|+|y|)\leq x+y\leq|x|+|y|
$$

equivalente a

$$
|x+y|\leq|x|+|y|
$$

# Numeri complessi

$$
\mathbb{C}=\text{insieme dei numeri complessi}
$$

> Un numero complesso è del tipo $$z=x+iy\quad x,y\in\mathbb{R}$$

- $i$ è detta **unità immaginaria**.

    - È una quantità tale che $i^2=-1$, in particolare $i\notin\mathbb{R}$

- $x$ è detta **parte reale**.

    - Si indica anche con $Re(z)$

- $y$ è detta **parte immaginaria**.
    - Si indica con $Im(z)$

## Esempi

$$
z=3+2i
$$

$$
Re(z)=3\quad Im(z)=2
$$

![Screenshot 2025-10-22 alle 14.53.11](../../../Immagini/Screenshot%202025-10-22%20alle%2014.53.11.png)

$$
z=-2+4i
$$

![Screenshot 2025-10-22 alle 14.54.56](../../../Immagini/Screenshot%202025-10-22%20alle%2014.54.56.png)

> Ogni reale $x$ è un numero complesso in questo modo: $$x+i0$$
> cioè _i reali sono numeri complessi con parte immaginaria nulla_.

> I complessi del tipo $$iy$$
> con parte reale nulla, sono detti immaginari puri, vivono sull'asse $y$.

## Somma

$$
(x+iy)+(x'+iy')=x+x'+i(y+y')
$$

### Esempio

$$
(2+3i)+(-1-2i)=1+i
$$

## Prodotto

$$
(x+iy)\cdot(x'+iy')=xx'+ixy'+iyx'+i^2yy'=xx'-yy'+i(xy'yx')
$$

### Esempio

$$
(2+3i)\cdot(-1-2i)=-2-4i-3i-6i^2=4-7i
$$

### Esercizio

Scrivi in forma algebrica ($x+iy$)

$$
\frac{2-2i}{1+3i}
$$

$$
=\frac{2-2i}{1+3i}\cdot\frac{1-3i}{1-3i}=\frac{2-6i-2i-6}{1-3i+3i+9}=\frac{-4-8i}{10}=-\frac{2}{5}-\frac{4}{5}i
$$

$$
Re=-\frac{2}{5}\quad Im=-\frac{4}{5}
$$

## Coniugato

> Se $$z=x+iy$$
> è un complesso, definiamo il suo coniugato $$\overline{z}=x-iy$$

## Modulo

> Il modulo di $$z=x+iy$$
> numero complesso è $$|z|=\sqrt{x^2+y^2}$$

Il modulo di un numero complesso è sempre un numero reale $\geq 0$.

### Esempio

