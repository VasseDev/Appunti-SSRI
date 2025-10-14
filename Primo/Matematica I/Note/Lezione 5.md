---
share: true
---

## Grafici di potenze

$$y=x^k$$
$$k\space\text{pari}$$

```functionplot
---
title: potenza pari
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x)=x^2
```

```functionplot
---
title: potenza dispari
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
g(x)=x^3
```

$$
x^3\geq x\rightarrow x> 1
$$

$$
x^3\leq x\rightarrow 0\leq x\leq 1
$$

## Grafici di radici

$$
y=\sqrt{x}
$$

```functionplot
---
title: radice pari
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x)=sqrt(x)
```

$$
x\geq \sqrt{x}\geq ^4\sqrt{x}\rightarrow x\geq 1
$$

$$
x\leq\sqrt{x}\leq ^4\sqrt{x}\rightarrow x\leq 1
$$

```functionplot
---
title: radice dispari
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x)=x^(1/3)
```

## Grafici esponenziali

```functionplot
---
title: base > 1
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x)=2^x
```

```functionplot
---
title: 0 > base > 1
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = 0.5^x
```

$$
D = \mathbb{R} \rightarrow\space\text{sempre positivo}
$$

## Grafici di logaritmi

```functionplot
---
title: base > 1
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x)=log10(x)
```

```functionplot
---
title: 0 < base < 1
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = log10(x)/log10(0.5)
```

```functionplot
---
title: base = e
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = log(x)
```

### Relazione di invertibilità

> $a^x$ è una funzione con dominio $\mathbb{R}$, immagine $(0,+\infty)$ e iniettiva.
> Quindi esiste l'inversa con dominio $(0,+\infty)$ e immagine $\mathbb{R}$.
> L'inversa di $a^x$ è proprio $log_a(x)$.

```functionplot
---
title: rispetto alla bisetterice y=x
xLabel:
yLabel:
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = x
g(x)=2^x
h(x) = log2(x)
```

Perché se $g(y)$ è l'inverso di $f(x)$ allora

$$
g(f(x))=x
$$

e

$$
f(g(y))=y
$$

### Proprietà

$$\log(x\cdot y)=\log{x}+\log{y}$$
$$\log_a(x/ y)=\log_a{x}-\log_a{y}$$
$$\log(x^\alpha)=\alpha\cdot\log(x)$$
$$\log_B(x)=\frac{\log_a(x)}{\log_a(b)}$$
## Equazioni esponenziali
1. 
$$
2^x=64
$$
Applico $\log_2$ ad entrambi i membri.
$$
\log_2(2^x)=\log_2(64)
$$
$$
x=6
$$
2. 

$$
4^x=4^{x-2}+27
$$
$$
4^x-4^x\cdot 4^{-2}=27
$$
$$
4^x-\frac{1}{16}\cdot 4^{x}=27
$$
$$
4^x(1-\frac{1}{16})=27
$$
$$
4^x=\frac{16}{15}\cdot 27
$$
$$
\log_4(4^x)=\log_4(\frac{16\cdot 9}{5})
$$
$$
x=\log_4(\frac{16\cdot 9}{5})
$$

3. 
$$
5^x\cdot 2^{2x}=10
$$
$$
5^x\cdot 4^x=10
$$
$$
20^x=10
$$
$$
\log_{20}(20^x)= \log_{20}(10)
$$
$$
x= \log_{20}(10)
$$
## Disequazioni esponenziali
1. 
$$
7^x > 5
$$
$$
\log_7(7^x)=\log_7(5)
$$
$$
x=\log_7(5)
$$
$$
s = (\log_7(5),+\infty)
$$
> **Attenzione**

```functionplot
---
title: a > 1
xLabel: 
yLabel: 
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = log2(x)
```
> È una funzione *monotona* e *crescente*.
> Quindi se $$x_1<x_2$$
> allora $$\log(x_1)<\log(x_2)$$
```functionplot
---
title: 0 < a < 1
xLabel: 
yLabel: 
bounds: [-10,10,-10,10]
disableZoom: true
grid: true
---
f(x) = log10(x)/log10(0.5)
```
> È una funzione *monotona* e *decrescente*.
> Quindi se $$x_1\leq x_2$$
> allora $$\log(x_1)\geq\log(x_2)$$

2. 

$$
x^2\leq\log_{\frac{1}{2}}(5)
$$
Il secondo termine è sempre negativo, mentre il primo sempre positivo.
$$
\nexists x\in \mathbb{R}
$$


$$
e^{2x}-4e^x+1<0
$$
sostituisco $y=e^x$
$$
e^{2x}=y^2
$$
$$
y^2-4y+1<0
$$
$$
\Delta = 4-1=3
$$
$$
y_{1,2}=2\pm\sqrt{3}
$$
se $y=2\pm\sqrt{3}$ allora 
$$
e^x=2-\sqrt{3}\rightarrow\ln(e^x)=\ln(2-\sqrt{3})
$$
$$
x=\ln(2-\sqrt{3})
$$
$$
\ln(2-\sqrt{3})<x<\ln(2+\sqrt{3})
$$
## Equazioni logaritmiche
$$
\ln(x^2-4)=\ln(x+2)
$$
c.e.
$$
\begin{cases}
x^2-4>0 \\
x+2>0
\end{cases}
$$
applico $e^x$ a entrambi i membri
$$
e^{\ln(x^2-4)}=e^{\ln(x+2)}
$$
$$
x^2-4=x+2
$$
$$
x_{1,2}=\frac{1\pm\sqrt{1+24}}{2}= 3\lor 2
$$
$$
\text{sol}= 2
$$
## Disequazioni logaritmiche
$$
\log_{\frac{1}{2}}(3x)\geq 3
$$
$$
\left(\frac{1}{2}\right)^{\log_{\frac{1}{2}}(3x)}\leq\left(\frac{1}{2}\right)^3
$$
