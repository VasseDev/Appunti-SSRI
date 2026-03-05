---
share: true
---
  
  
**Esercizio**  
  
$$  
a_n=e^n\qquad a^n=e^{-n}  
$$  
  
$$  
f(x)=e^x\qquad f(x)=e^{-x}  
$$  
  
```functionplot  
---  
title: e^x  
xLabel:  
yLabel:  
bounds: [-10,10,-10,10]  
disableZoom: true  
grid: false  
---  
f(x)=2.71^x  
```  
  
```functionplot  
---  
title: e^-x  
xLabel:  
yLabel:  
bounds: [-10,10,-10,10]  
disableZoom: true  
grid: false  
---  
f(x)=2.71^-x  
```  
  
$$  
\lim_{n\to+\infty}e^n=+\infty\qquad\mid\qquad\lim_{n\to\infty}e^{-n}=0  
$$  
  
_Dimostrazione_  
  
$$  
\forall\ \varepsilon > 0\quad\exists\ n(\varepsilon)\in N\text{ t.c.}  
$$  
  
$$  
|e^{-n}-0|<\varepsilon\quad\forall\ n>n(\varepsilon)  
$$  
  
$$  
|e^{-n}|=e^{-n}<\varepsilon\qquad e\  
$$  
  
$$  
\log_e=\ln  
$$  
  
$$  
\ln e^{-n}<\ln\varepsilon  
$$  
  
$$  
-n<\ln\varepsilon  
$$  
  
$$  
n>-\ln\varepsilon  
$$  
  
Se $\varepsilon$ tende a $0$, mi aspetto che $-\ln\varepsilon$ tenda a $+\infty$.  
Considero $n(\varepsilon)=\lfloor-\ln\varepsilon\rfloor+1$  
  
$$  
\forall\ \varepsilon>0\text{ ho trovato }n(\varepsilon)\in N\text{ t.c.}  
$$  
  
$$  
n(\varepsilon)>-\ln\varepsilon  
$$  
  
## Descrivere le successioni per le loro caratteristiche  
  
### Limitatezza  
  
> Ammettere limite non equivale ad essere limitato  
  
**Definizione**  
Una successione $\{a_n\}$ è limitata dal BASSO (oppure dall'ALTO) se  
  
$$  
\exists\ k\in\mathbb{R}\text{ t.c. }\quad a_n> k\qquad\text{(oppure }a_n<k\text{)}\quad\forall\ n\in N  
$$  
  
Diremo che una successione è LIMITATA se è limitata sia dal basso che dall'alto.  
  
_Esempi_  
  
$$  
a_n=e^n>0\ \forall n  
$$  
  
è limitata dal basso, ma non dall'alto.  
  
$$  
a_n=\sin n\qquad -1\leq a_n\leq 1\ \forall n  
$$  
  
quindi è limitata, ma non ammette limite.  
  
$$  
a_n=\arctan\qquad -\frac{\pi}{2}< a_n< \frac{\pi}{2}\ \forall n  
$$  
  
quindi è limitata e $\lim_{n\to\infty}\arctan n=\frac{\pi}{2}$.  
  
#### Proprietà  
  
Sia $\{a_n\}_n$ una successione che ammette limite $l$ allora $\{a_n\}_n$ è limitata.  
  
_Osservazione_  
Condizione sufficiente per essere limitata è ammettere limite.  
Condizione necessaria per ammettere limite è essere limitata.  
  
**Dimostrazione**  
  
$$  
\forall\varepsilon\text{ trovo un }n(\varepsilon)\in N\text{ t.c.}  
$$  
  
$$  
L-\varepsilon<a_n<L+\varepsilon\qquad\forall\ n>n(\varepsilon)  
$$  
  
$$  
\implies a_n\text{ limitata da }n(\varepsilon)\text{ in poi}  
$$  
  
_inoltre_  
  
$$  
\{a_n:\text{per }n\leq n(\varepsilon)\}\text{ è un insieme finito}  
$$  
  
quindi ammette massimo $M$ e minimo $m$.  
  
$$  
\{a_n\}_{n\in\mathbb{N}\cup\{0\}}\qquad\text{è limitata}  
$$  
  
_Esempio_  
Dimostrare che $a_n=\frac{3-2n}{2n+1}$ è limitata.  
  
1° modo:  
  
$$  
\lim_{n\to\infty}a_n=\lim_{n\to\infty}\frac{3-2n}{2n+1}=\lim_{n\to\infty}\frac{\frac{3}{n}-2}{2+\frac{1}{n}}=-1  
$$  
  
$$  
\implies a_n\text{ è limitata}  
$$  
  
2° modo:  
  
$$  
\frac{3-2n}{2n+1}\qquad\begin{align}  
&\text{se }n=0\quad a_n=3\\  
&\text{se }n=1\quad a_n=\frac{1}{3}\\  
&\text{se }n\geq2\quad a_n<0  
\end{align}  
$$  
  
$$  
a_n\leq3\ \forall n  
$$  
  
$$  
a_n=\frac{3-2n}{2n+1}=\frac{-2n-1+1+3}{2n+1}=\frac{-2n-1}{2n+1}+\frac{4}{2n+1}=-1+\frac{4}{2n+1}>-1  
$$  
  
$$  
\implies a_n>-1\ \forall n  
$$  
  
### Divergenza  
  
**Definizione**  
Data una successione $\{a_n\}_n\in\mathbb{N}\cup\{0\}$, si dice che  
  
$$  
\lim_{n\to\infty}a_n=+\infty  
$$  
  
(successione diverge a $+\infty$)  
se  
  
$$  
\forall k>0\ \exists\ n(k)\in\mathbb{N}\text{ t.c. }a_n>k\qquad\forall\ n>n(k)  
$$  
  
Diverge invece a $-\infty$ se  
  
$$  
\forall k>0\ \exists\ n(k)\in\mathbb{N}\text{ t.c. }a_n<-k\qquad\forall\ n>n(k)  
$$  
  
_Esempio_  
  
1.  $$  
    a_n=e^n\qquad\lim_{n\to\infty}e^n=+\infty  
    $$  
  
    $$  
    \forall >0\text{ trovo un }n(k)\in\mathbb{N}\text{ t.c.}  
    $$  
  
    $$  
    n(k)>\ln k  
    $$  
  
    scelgo  
  
    $$  
    n(k)=\lfloor\ln k\rfloor+1  
    $$  
  
2.  $$  
    a_n=\sqrt{n}  
    $$  
  
    $$  
    \lim_{n\to+\infty}\sqrt{n}=+\infty  
    $$  
  
    $$  
    \forall k>0\text{ trovo un }n(k)\in\mathbb{N}\text{ t.c.}  
    $$  
  
    $$  
    \sqrt{n}>k\qquad\forall n>n(k)\iff n>k^2  
    $$  
  
    $$  
    n(k)=\lfloor k^2\rfloor+1  
    $$  
  
3.  $$  
    a_n=\log_{\frac{1}{2}}n\qquad n\neq0  
    $$  
    $$  
    \lim_{n\to\infty}\log_{\frac{1}{2}}n=-\infty  
    $$  
    $$  
    \forall k>0\ \exists\ n(k)\in\mathbb{N}\text{ t.c.}  
    $$  
    $$  
    \log_{\frac{1}{2}}n<-k\qquad\forall n>n(k)\iff n>\left(\frac{1}{2}\right)^{-k}=2^k  
    $$  
    $$  
    \text{scelgo }n(k)=\lfloor 2^k\rfloor+1  
    $$  
  
---  
  
**Riepilogo**  
  
- $\{a_n\}_{n\in\mathbb{N}\cup\{0\}}$ è regolare se  
    1.  $\lim a_n=l\implies\text{limitata}$  
        oppure  
    2.  $\lim a_n=+\infty\implies\text{illimitata}$  
- $\{a_n\}_{n\in\mathbb{N}\cup\{0\}}$ è irregolare se  
    1.  $\lim a_n$ non esiste  
        e  
    2.  $\lim a_n=-\infty$  
        Possono essere limitate o illimitate.  
  
---  
  
## Limite della somma di successione  
  
$$  
\{a_n\}_{n\in\mathbb{N}}\qquad\{b_n\}_{n\in\mathbb{N}}  
$$  
  
1. Se $\lim a_n=a$ e $\lim b_n=b$ allora  
  
    $$  
    \lim (a_n+b_n)=a+b  
    $$  
  
    "Dimostrazione"  
  
    $$  
    \forall\varepsilon>0\text{ trovo }n(\varepsilon)\in\mathbb{N}\text{ t.c.}  
    $$  
  
    $$  
    |b_n+a_n-(a+b)|\leq|a_n-a|+|b_n-b|<\varepsilon\qquad\forall n>n(\varepsilon)  
    $$  
  
    $$  
    \forall\varepsilon>0\text{ trovo }n(\varepsilon)\in\mathbb{N}\text{ t.c.}  
    $$  
  
    $$  
    |a_n-a|<\frac{\varepsilon}{2}\qquad\text{e}\qquad|b_n-b|<\frac{\varepsilon}{2}\qquad\forall n>n(\varepsilon)  
    $$  
  
    $$  
    \forall\varepsilon>0\text{ trovo }n(\varepsilon)\in\mathbb{N}\text{ t.c.}  
    $$  
  
    $$  
    |b_n+a_n-(a+b)|\leq|a_n-a|+|b_n-b|<\frac{\varepsilon}{2}+\frac{\varepsilon}{2}=\varepsilon\qquad\forall n>n(\varepsilon)  
    $$  
  
2. Se $\lim a_n=a$ e $\lim b_n=+\infty$ allora  
  
    $$  
    \lim (a_n+b_n)=+\infty  
    $$  
  
3. Se $\lim a_n=\infty$ e $\lim b_n=\infty$ allora  
    - se concordi: $\lim (a_n+b_n)=\infty$  
    - se discordi: forma di indecisione $\infty-\infty$  
  
_Esempi_  
  
1.  $$  
    e_n=\frac{1}{n}\qquad b_n=2^n  
    $$  
  
    $$  
    \lim_{n\to\infty}e_n=0\qquad\lim_{n\to\infty}b_n=+\infty  
    $$  
  
    $$  
    \lim_{n\to\infty}(e_n+b_n)=+\infty  
    $$  
  
2.  $$  
    \lim_{n\to\infty}(n^2-n)=\lim_{n\to\infty}[n(n-1)]=+\infty  
    $$  
  
## Limite del prodotto di successioni  
  
$$  
\{a_n\}_{n\in\mathbb{N}}\qquad\{b_n\}_{n\in\mathbb{N}}  
$$  
  
1. Se $\lim a_n=a$ e $\lim b_n=b$ allora  
    $$  
    \lim (a_nb_n)=ab  
    $$  
2. Se $\lim a_n=a$ e $\lim b_n=+\infty$ allora  
    - se $a>0$: $\lim (a_nb_n)=+\infty$  
    - se $a<0$: $\lim (a_nb_n)=-\infty$  
    - se $a=0$: forma di indecisione $0\cdot\infty$  
3. Se $\lim a_n=\infty$ e $\lim b_n=\infty$ allora  
    - se concordi: $\lim (a_nb_n)=+\infty$  
    - se discordi: forma di indecisione $\infty\cdot\infty$  
4. Se $\lim a_n=0$ e $\lim b_n=\infty$ allora  
   è una forma di indecisione $0\cdot\infty$  
  
> **N.B.**  
> Se $\{a_n\}_n$ allora  
>  
> 1. $\lim a_n=a\neq0$ allora $\lim\frac{1}{a_n}=\frac{1}{a}$  
> 2. $\lim a_n=\infty$ allora $\lim\frac{1}{a_n}=0$  
>     - se $+\infty$ allora $0^+$  
>     - se $-\infty$ allora $0^-$  
> 3. $\lim a_n=0$ allora $\lim\frac{1}{a_n}=\infty$  
>     - se $0^+$ allora $+\infty$  
>     - se $0^-$ allora $-\infty$  
>     - se $0$ allora forma di indecisione $\frac{1}{0}$  
  
_Esempi_  
  
1)  
$$  
a_n=(-1)^n\cdot\frac{1}{n}  
$$  
$$  
a_{2n}=(-1)^{2n}\cdot\frac{1}{2n}=\frac{1}{2n}\qquad\lim_{n\to\infty}a_{2n}=0  
$$  
$$  
a_{2n+1}=(-1)^{2n+1}\cdot\frac{1}{2n+1}=-\frac{1}{2n+1}\qquad\lim_{n\to\infty}a_{2n+1}=0  
$$  
quindi  
$$  
\lim_{n\to\infty}a_n=0  
$$  
  
Considero  
$$  
\frac{1}{a_n}=\frac{1}{(-1)^n}\cdot n  
$$  
$$  
\frac{1}{(-1)^n}=(-1)^n  
$$  
$$  
\frac{1}{a_n}=(-1)^n\cdot n  
$$  
Oscilla con ampiezza sempre più grande $\implies$ irregolare.  
  
2)  
$$  
\lim_{n\to\infty}\left[\left(\frac{1}{n}+3\right)\left(\frac{2n-1}{n}\right)\right]  
$$  
$$  
=\lim_{n\to\infty}\left(\frac{1}{n}+3\right)\cdot\lim_{n\to\infty}\left(\frac{2n-1}{n}\right)  
$$  
$$  
=\lim_{n\to\infty}\left(\frac{1}{n}+3\right)\cdot\lim_{n\to\infty}\left(2-\frac{1}{n}\right)  
$$  
$$  
=\left(\lim_{n\to\infty}\frac{1}{n}+\lim_{n\to\infty}3\right)\cdot\left(\lim_{n\to\infty}2-\lim_{n\to\infty}\frac{1}{n}\right)  
$$  
$$  
=\left(\lim_{n\to\infty}\frac{1}{n}+3\right)\cdot\left(2-\lim_{n\to\infty}\frac{1}{n}\right)  
$$  
$$  
=\left(0+3\right)\cdot\left(2-0\right)=6  
$$  
  
3)  
$$  
\lim_{n\to+\infty}\frac{2^n+e^n}{5^n+3^n}  
$$  
$$  
=\lim_{n\to+\infty}\frac{e(1+\frac{2^n}{e^n})}{5^n(1+\frac{3^n}{5^n})}  
$$  
$$  
=\lim_{n\to+\infty}\frac{e}{5^n}\cdot\frac{1+\frac{2^n}{e^n}}{1+\frac{3^n}{5^n}}  
$$  
ora tutte le basi sono comprese tra $0$ e $1$  
$$  
=0\cdot1=0  
$$  
  
---  
  
  
