---
share: true
---

## Sottoinsiemi limitati

$\mathbb{R}$ è un campo ordinato e completo.

> Un sottoinsieme $E$ di $\mathbb{R}$ è **limitato** se esistono due reali con $m$ e $M$ tale che ogni elemento dell'insieme è compreso tra questi $2$ numeri.

$$
\forall x\in E:m\leq x\leq M
$$

Si dice **limitato superiormente** se

$$
x\leq M
$$

e limitato inferiormente se

$$
x\geq m
$$

#### Esempio

$$
2\leq x\leq3\rightarrow\text{si scrive}\space (2;3]
$$

Se invece l'insieme avesse solo un limite inferiore $x>1$ sarebbe illimitato in quanto non limitiamo anche superiormente.

### Massimo e minimo

> Un elemento $\overline x$ è un **massimo** per $E$ se: $$
> \overline x\in E\space\land\space x\leq\overline x\space\forall\space x\in E

$$

> Un elemento $\overline x$ è un **minimo** per $E$ se: $$

\overline x\in E\space\land\space x\geq\overline x\space\forall\space x\in E


$$

Nel caso dell'esempio di prima

$$

(2;3]


$$

il minimo non esiste; ci sono infiniti numeri poco più grandi di $2$, prendiamo $2,0000001$.

### Maggiore e minore

Teniamo $E$ in considerazione,

> un numero $$k\in\mathbb{R}$$
> è detto **maggiorante** di $E$ se $$k\geq x\space\forall\space x\in E$$

> $$k\in\mathbb{R}$$
> si dice **minorante** se $$k\leq x\space\forall\space x\in E$$

A differenza dei minimi e massimi i maggioranti e minoranti non necessariamente devono appartenere all'insieme $E$.

L'estremo superiore di $E$ è il _minimo dei maggioranti_, se esiste, si indica con $$sup(E)$$  
L'estremo inferiore di $E$ è il _massimo dei minoranti_, se esiste si indica con $$inf(E)$$

#### Esempio

$$E=(2,3)$$
$sup(E)=$ minimo dei maggioranti $[3;+\infty)$

$$
sup(E)=3
$$

$inf(E)=$ massimo dei minoranti $(-\infty;+2]$

$$
inf(E)=2
$$

$(2,3)\notin E$ ma sono gli estremi anche se il minimo e il massimo non esistono.

#### Proprietà

In $\mathbb{R}$ per ogni insieme limitato esiste un $inf$ e un $sup$; questa proprietà è enunciabile come:

> ogni lunghezza della retta euclidea è rappresentata da un numero reale.

## Equazioni I grado

$$
\frac{6x}{x+1}-4=\frac{1}{x+2}
$$

condizioni di esistenza:

$$
x+1\neq0\rightarrow x\neq-1
$$

$$
x+2\neq0\rightarrow x\neq-2
$$

Risoluzione con minimo comune multiplo tra i denominatori

$$
6x\cdot(x+2)-4(x+1)\cdot(x+2)=x+1
$$

saltando un po' di passaggi si ha:

## Equazioni II grado

$$
2x^2-x-1=0
$$

> **Formula** $$\Delta=b^2-4ac$$
> quindi $$x_{1,2}=\frac{-b\pm\sqrt{\Delta}}{2ac}$$
> oppure $$\frac{\Delta}{4}=(\frac{b}{2})^2-ac$$
> quindi $$x_{1,2}=\frac{-\frac{b}{2}\pm\sqrt\frac{\Delta}{4}}{ac}$$

$$
\frac{1\pm\sqrt{73}}{4}
$$

doppia soluzione.

## Disequazioni

$$
2-3\geq0\rightarrow-3x\geq-2\rightarrow+3x\leq2\rightarrow x\leq\frac{2}{3}
$$

soluzioni: tutte le $x\leq$ di $\frac{2}{3}$.

## Disequazioni di II grado

Minimi termini $\rightarrow$ formula risolutiva $\rightarrow$ 2 soluzioni

#### Esempio

Soluzioni: $(2,3)$ con $\geq$ (soluzioni esterne)

$$
(-\infty;2]\lor[3;+\infty)
$$

> La soluzione geometricamente è una _parabola_ quindi è **positiva per gli esterni** e **negativa dentro**.

> Nel caso una parabola **non incontri l'asse $x$** per ogni $x$ la parabola è positiva.

## Disequazioni fratte

La $x$ appare sia al numeratore che al denominatore.

$$
\frac{x-1}{x+2}>0
$$

> **Regola**
> Il prodotto di 2 numeri è positivo se e solo se entrambi i fattori sono positivi o negativi

Studio separatamente numeratore e denominatore:
$N: x-1>0\rightarrow x>1$
$D:x+2>0\rightarrow x>-2$

La funzione iniziale (disequazione) è $\leq0$ quando la soluzione risiede nei valori negativi $S=(-\infty,-2)\lor[-1,1]$

## Sistemi

> Un sistema è verificato quando **tutte le condizioni sono verificate**, l'insieme delle soluzioni è uguale all'intersezione delle soluzioni di ogni condizione.

$$
\begin{cases}
x^2>2 \\
x^2-1\leq0
\end{cases}
\quad
\begin{cases}
x^2-2>0 \\
x^2-1\leq0
\end{cases}
\quad
\begin{aligned}
&\Rightarrow \pm\sqrt{2} \\
&\Rightarrow \pm1
\end{aligned}
$$

Soluzione:

$$
x<-\sqrt 2\lor x>\sqrt 2
$$

> Quando non ci sono tratti continui l'insieme delle soluzioni è **vuoto**: $$S=\varnothing$$

## Radici e esponenti

> La $\sqrt{\space}$ di un numero reale positivo è l'unico reale positivo che elevato all'indice della radice corrisponde al numero sotto radice.

> **!** > $-2^2=4$ ma $-2$ non è radice di $4$ in quanto non è positivo

Una radice è esprimibile anche con esponente razionale

$$
	^2\sqrt{ x }=x^{\frac{1}{2}}
$$

oppure

$$
x^{\frac{-3}{2}}=\frac{1}{x^\frac{3}{2}}=\frac{1}{\sqrt{ x^3 }}
$$

## Equazioni irrazionali

$$
\begin{align}
\sqrt{ f(x) }=g(x) \\
f(x)\geq {0} \\
g(x) \geq 0
\end{align}
$$

perché la radice di $f$ è sempre $>0$

## Disequazioni irrazionali

$$
\sqrt{ f(x) }\geq g(x)
$$

ha due casi distinti:

- $g(x)$ è positivo:
    - $f(x)>0$
    - $g(x)\geq0$
    - $f(x)>g^2(x)$
- $g(x)$ è negativo:
    - $f(x)\geq 0$
    - $g(x)< 0$

