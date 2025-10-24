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
> Sempre positiva.
> $$\sqrt{x^2}=x$$
> è errata. Infatti già non vale per
> $$x=-3$$
> Che diventa
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

Notare che

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

Oppure

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

Oppure

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

Perché?

$$
-|x|\leq x\leq|x|\quad-|y|\leq y\leq|y|
$$

Sommo membro a membro

$$
-|x|-|y|\leq x+y\leq|x|+|y|
$$

$$
-(|x|+|y|)\leq x+y\leq|x|+|y|
$$

Equivalente a

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
> Cioè _i reali sono numeri complessi con parte immaginaria nulla_.

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

## Proposizione

$$
|z|^2=z\overline{z}
$$

Perché?

$$
z=x+iy
$$

$$
z\overline{z}=(x+iy)(x-iy)=x^2-ixy+ixy+y^2=x^2+y^2=|z|^2
$$

> **Osservazione**
> Se $$z=0$$
> allora $$|z=0|$$
> Vale anche viceversa.

Perché?

$$
|z|=\sqrt{x^2+y^2}=0
$$

$$
x^2+y^2\Rightarrow
\begin{cases}
x^2=0\\
y^2=0
\end{cases}
\Rightarrow
\begin{cases}
x=0\\
y=0
\end{cases}
\Rightarrow
z=0+i0=0
$$

quindi $z=0$ è l'unico complesso che ha modulo nullo.

## Proprietà

1.  $$
    \overline{z_1+z_2}=\overline{z_1}+\overline{z_2}
    $$
2.  $$
    \overline{z_1\cdot z_2}=\overline{z_1}\cdot\overline{z_2}
    $$
3.  $$
    \overline{\left(\frac{1}{z}\right)}=\frac{1}{z}
    $$
4.  $$
    \overline{\overline{z}}=z
    $$

### Proprietà del modulo

1

$$
|z|\geq0
$$

ed inoltre $|z|=0$ se e solo se $z=0$
2

$$
|z_1\cdot z_2|=|z_1|\cdot|z_2|
$$

3

$$
|z|=|\overline{z}|
$$

4

$$
|z_1+z_2|\leq|z_1|+|z_2|
$$

(disuguaglianza triangolare)

> **Osservazione** $$x\in\mathbb{R}=x+0i$$ > $|x|$ come numero reale
> $|x|$ come numero complesso
> Per i reali i due concetti sono uguali $$|x+0i|=\sqrt{x^2+0^2}=\sqrt{x^2}=|x|$$

## Equazioni

Reali:

$$
x\in\mathbb{R}:x^2+1=0
$$

$$
S=\varnothing
$$

Complessi:

$$
z\in\mathbb{C}:z^2+1=0
$$

$$
z=x+iy
$$

$$
z^2=z\cdot z=(x+iy)^2=x^2+(iy)^2+2ixy=x^-y^2+2ixy
$$

$$
z^2+1=0\longleftrightarrow x^2-y^2+2ixy+1=0\longleftrightarrow x^2-y^2+1+i(2xy)
=0
$$

due numeri complessi sono uguali $\Leftrightarrow$ hanno stessa parte reale e immaginaria

$$
\begin{cases}
x^2-y^2+1=0\\
2xy=0
\end{cases}
$$

$$
2xy=0<
\begin{align}
x=0\\
y=0
\end{align}
$$

caso $x=0$: sostituisco nella prima equazione

$$
-y^2+1=0
$$

$$
y_{1,2}=\pm\sqrt{1}=\pm1
$$

$$
z_{1,2}=\pm i
$$

caso $y=0$: sostituisco nella prima equazione

$$
x^2-0^2+1=0
$$

$$
x^2=-1
$$

$$
\nexists\space x\in\mathbb{R}
$$

### Esercizi

1.  $$
    z^2+iIm(z)+2\overline{z}=0
    $$
    $$
    z=x+iy
    $$
    $$
    z^2=x^2+2ixy+(iy)^2=x^2-y^2+2ixy
    $$
    $$
    Im(z)=y
    $$
    $$
    \overline{z}=x-iy
    $$
    $$
    x^2-y^2+i(2xy)+iy+2x-2iy=0\leftrightarrow x^2-y^2+2x+i(2xy+y-2y)=0
    $$
    $$
    \begin{cases}
    x^2-y^2+2x=0\\
    2xy-y=0
    \end{cases}
    \quad
    \begin{cases}
    x^2-y^2+2x=0\\
    y(2x-1)=0
    \end{cases}
    $$
    $$
    y(2x-1)=0<
    \begin{align}
    y=0\\
    x=1/2
    \end{align}
    $$
    caso $y=0$:
    $$
    x^2+2x=0\leftrightarrow x(x+2)=0<
    \begin{align}
    x=0\\
    x=-2
    \end{align}
    $$
    $$
    z_1=0+0i=0\quad z_2=-2+0i=-2
    $$
    caso $x=1/2$:
    $$
    \frac{1}{4}-y^2+1=0\leftrightarrow y^2=\frac{5}{4}\leftrightarrow y=\pm\frac{\sqrt{5}}{2}
    $$
    $$
    z_3=\frac{1}{2}+\frac{\sqrt{5}}{2}i\quad z_3=\frac{1}{2}-\frac{\sqrt{5}}{2}i
    $$
2.  $$
    iRe(z)+z^2=|z|^2+1
    $$
    $$
    ix+x^2-y^2+i(2xy)=x^2+y^2+1
    $$
    $$
    -2y^2-1+i(x+2xy)=0
    $$
    $$
    \begin{cases}
    -2y^2-1=0\\
    x+2xy=0
    \end{cases}
    \begin{cases}
    *\\
    x(1+2y)=0
    \end{cases}
    $$
    $$
    x(1+2y)=0<
    \begin{align}
    x=0\\
    y=-1/2
    \end{align}
    $$
    caso $x=0$:
    $$
    z=0
    $$
    caso $y=-1/2$:
    $$
    -2\left(\frac{1}{4}\right)-1=0\leftrightarrow -\frac{1}{2}-1=0\leftrightarrow -\frac{3}{4}=0
    $$
    $$
    \nexists\space y\in\mathbb{R}
    $$
3.  $$
    z^2+\overline{z}=0
    $$
    $$
    x^2-y^2+i(2xy)+x-iy=0\leftrightarrow x^2-y^2+x+i(2xy-y)=0
    $$
    $$
    \begin{cases}
    x^2-y^2+x=0\\
    2xy-y=0
    \end{cases}
    \quad
    \begin{cases}
    *\\
    y(2x-1)=0
    \end{cases}
    $$
    $$
    y(2x-1)=0<
    \begin{align}
    y=0\\
    x=1/2
    \end{align}
    $$

caso $y=0$:

$$
x^2-0+x=0\leftrightarrow x^2+x=0\leftrightarrow x(x+1)=0<
\begin{align}
x=0\\
x=-1
\end{align}
$$

$$
z_1=0+0i=0\quad z_2=-1+0i=-1
$$

caso $x=1/2$:

$$
\frac{1}{4}-y^2+\frac{1}{2}=0\leftrightarrow y^2=\frac{3}{4}\leftrightarrow y=\pm\frac{\sqrt{3}}{2}
$$

$$
z_3=\frac{\sqrt{3}}{2}i\quad z_4=-\frac{\sqrt{3}}{2}
$$

4.  $$
    \frac{1+i}{\sqrt{3}+i}\space\text{scrivere in forma algebrica}
    $$
    $$
    \frac{1+i}{\sqrt{3}+i}\cdot\frac{\sqrt{3}-i}{\sqrt{3}-i}0=\frac{(1+i)(\sqrt{3}-i)}{3+1}=\frac{\sqrt{3}-i+i\sqrt{3}+1}{4}=\frac{\sqrt{3}+1-i(1+\sqrt{3})}{4}=\frac{\sqrt{3+1}}{4}-i\frac{1+\sqrt{3}}{4}
    $$

# Trigonometria

> $\cos x$ = proiezione lungo l'asse $x$ > $\sin x$ = proiezione lungo l'asse $y$

$$
P=(\cos x,\sin x)
$$

Vive sulla circonferenza $x^2+y^2=1$

$$
\Rightarrow\cos^2x+\sin^2x=1
$$

Relazione fondamentale della trigonometria.

> **Notazione** > $$\cos^2x=(\cos x)^2$$ > $$sin^2x=(sin x)^2$$

$\cos x$ e $\sin x$ sono funzioni periodiche di periodo $2\pi$.

$$
\sin(x+2\pi)=\sin x
$$

$$
\cos(x+2\pi)=\cos x
$$

## Valori fondamentali

$$
\sin 0=0\quad \cos 0=0
$$

$$
\sin(\pi/2)=1\quad\cos(\pi/2)=0
$$

$$
\sin(\pi)=0\quad\cos(\pi)=-1
$$

$$
\sin\left(\frac{3}{2}\pi\right)=-1\quad\cos\left(\frac{3}{2}\pi\right)=0
$$

## Grafici

$$
y=\sin x
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
```

$$
y=\cos x
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
f(x)=cos(x)
```

## Funzioni limitate

$$
-1\leq\sin x\leq 1
$$

$$
-1\leq\cos x\leq1
$$

$$
\forall\space x\in\mathbb{R}
$$

## Equazione

$$
\sin x=\frac{1}{2}
$$

$$
x=\frac{\pi}{6}
$$

Le soluzioni sono

$$
\frac{\pi}{6}+2k\pi\quad k\in\mathbb{Z}
$$

$$
\pi-x=\pi-\frac{\pi}{6}=\frac{5}{6}\pi
$$

$$
\frac{5}{6}\pi+2k\pi\quad k\in\mathbb{Z}
$$

### Esercizio

$$
	2\sin^2x=3\cos x
$$

$$
2(1-\cos^2x)=3\cos x
$$

$$
2-2\cos^2x-3\cos x=0
$$

$$
-2\cos^2x-3\cos x+2=0
$$

$$
y=\cos x
$$

$$
-2y^2-3y+2=0
$$

$$
2y^2+3y-2=0
$$

$$
y_{1,2}=\frac{-3\pm\sqrt{9+16}}{4}=\frac{-3\pm5}{4}<
\begin{align}
1/2\\
-2
\end{align}
$$

$$
y_1=\cos{\frac{1}{2}}=\pm\frac{\pi}{3}+2k\pi,\quad k\in\mathbb{Z}
$$

$$
y_2=\cos(-2)\rightarrow\text{non ha soluzioni perché}\space -1\leq\cos x\leq1
$$

## Tangente

$$
\tan x=\frac{\sin x}{\cos x}\quad\text{per definizione}
$$

- La $\tan x$ non è definita in $\pi/2+k\pi$
- È periodica di periodo $\pi\rightarrow\tan(x+\pi)=\tan(x)$
- Non è una funzione limitata

### Grafico

```functionplot
---
title:
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: false
---
f(x)=tan(x)
h(x)=100000000*(x-(3.14/2))
h(x)=100000000*(x+(3.14/2))
h(x)=100000000*(x-(3/2)(3.14))
h(x)=100000000*(x+(3/2)(3.14))
h(x)=100000000*(x-(5/2)(3.14))
h(x)=100000000*(x+(5/2)(3.14))
```

## Cotangente

$$
\cot(x)=\frac{\cos(x)}{\sin(x)}
$$

$\cot(x)$ non è definita quando $sin(x)=0$, ovvero $x=k\pi\quad k\in\mathbb{Z}$

### Esercizio

1.  Calcolare
    $$
    \sin(x)=\sqrt{3}\cos(x)
    $$
        Divido per $\cos(x)$ quando è $\neq0$.
        Quindi prima discuto cosa succede quando $\cos(x)=0$
        $$
        \cos(x)\Rightarrow x=\frac{\pi}{2}+k\pi
        $$
        non sono soluzioni dell'equazione, infatti
        $$
        \sin\left(\frac{\pi}{2}+k\pi\right)=\sqrt{3}\cos\left(\frac{\pi}{2}+k\pi\right)\rightarrow\pm1=0
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
f(x)=sqrt(3)cos(x)-sin(x)
```

$$
\frac{\sin(x)}{\cos(x)}=\sqrt{3}
$$

$$
\tan(x)=\sqrt{3}
$$

$$
x=\frac{\pi}{3}\pm k\pi\quad k\in\mathbb{Z}
$$

2.  Calcolare $\cos(x)$ sapendo che
    $$
    \sin(x)=\frac{5}{13}\quad\text{e}\quad\frac{\pi}{2}<\alpha<\pi
    $$
    $$
    \cos(x)=\pm\sqrt{1-\sin^2(x)}\rightarrow\cos(x)=\pm\sqrt{1-\frac{25}{169}}=\pm\sqrt{\frac{144}{169}}=\pm\frac{12}{13}
    $$
