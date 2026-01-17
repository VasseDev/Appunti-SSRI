---
share: true
---
[Lezione 21: Slides](<Primo/Matematica I/Slides/L21 (04.12.2025).pdf>)  
  
# Matrici invertibili  
  
$$  
M(\mathbb{R}, N) = \{\text{matrici quadrate }N\times N\text{ a coefficienti in }\mathbb{R}\}  
$$  
  
$$  
A=\begin{pmatrix}  
2 & 3\\  
0 & -1  
\end{pmatrix}  
\in M(\mathbb{R}, 2)  
$$  
  
$$  
(M(\mathbb{R}, N), +, \cdot)\text{ anello non commutativo}  
$$  
  
cioè  
  
$$  
AB \neq BA  
$$  
  
È unitario, esiste l'elemento neutro rispetto al prodotto che è la matrice identità  
  
$$  
I=\begin{pmatrix}  
1 & 0 & \cdots & 0\\  
0 & 1 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & 1  
\end{pmatrix}  
\in M(\mathbb{R}, N)  
$$  
  
per esempio  
  
$$  
I=\begin{pmatrix}  
1 & 0\\  
0 & 1  
\end{pmatrix}  
\quad\text{matrice identità }2\times2  
$$  
  
perché:  
  
$$  
M=\begin{pmatrix}  
a & b\\  
c & d  
\end{pmatrix}  
\times  
\begin{pmatrix}  
1 & 0\\  
0 & 1  
\end{pmatrix}  
=  
\begin{pmatrix}  
a\cdot1 + b\cdot0 & a\cdot0 + b\cdot1\\  
c\cdot1 + d\cdot0 & c\cdot0 + d\cdot1  
\end{pmatrix}  
=  
\begin{pmatrix}  
a & b\\  
c & d  
\end{pmatrix}  
$$  
  
$$  
I = \begin{pmatrix}  
1 & 0 & 0\\  
0 & 1 & 0\\  
0 & 0 & 1  
\end{pmatrix}  
\quad\text{matrice identità }3\times3  
$$  
  
**Proprietà**  
  
$$  
AI = IA = A \quad \forall A \in M(\mathbb{R}, N)  
$$  
  
**Definizione**  
  
Una matrice quadrata $N\times N$ è invertibile se esiste una matrice $B$ quadrata $N\times N$ tale che  
  
$$  
AB = BA = I  
$$  
  
si dice che $B$ è l'inversa di $A$ e si indica con $A^{-1}$.  
  
> *Osservazione*  
> Non tutte le matrici non nulle sono invertibili.  
> Per esempio $A = \begin{pmatrix}0 & 1\\ 0 & 0\end{pmatrix}$ non è invertibile.   
  
> *Osservazione*  
> Le matrici non quadrate non sono invertibili.  
  
*Come si calcola la matrice inversa?*  
  
Data $A$ voglio trovare $B$ tale che  
  
$$  
AB = BA = I  
$$  
  
$$  
B = \begin{pmatrix}  
\underline{b_1}\ \  \mid& \underline{b_2}\ \ \mid& \cdots\ \ \mid& \underline{b_N}  
\end{pmatrix}  
\quad  
I= \begin{pmatrix}  
1 & 0 & \cdots & 0\\  
0 & 1 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & 1  
\end{pmatrix}  
$$  
  
$$  
A\cdot B=I\iff A\cdot \underline{b_i} = \begin{pmatrix}  
1\\  
0\\  
\vdots\\  
0  
\end{pmatrix}, A\cdot \underline{b_2} = \begin{pmatrix}  
0\\  
1\\  
\vdots\\  
0  
\end{pmatrix}, \ldots, A\cdot \underline{b_N} = \begin{pmatrix}  
0\\  
0\\  
\vdots\\  
1  
\end{pmatrix}  
$$  
$$  
\iff\left(A\ \vdots\ I\right)\underset{\text{dall'alto e dal basso}}{\overset{\text{Gauss-Jordan}}{\longrightarrow}}\left(I\ \vdots\ B\right)  
$$  
  
con $B=A^{-1}$ matrice inversa.  
  
> **Corollario**  
> $A$ (di tipo $N\times N$) invertibile $\iff \mathrm{rk}(A)=N$ (ossia è massimale).  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 1 & 2\\  
0 & 1 & 0\\  
-1 & 0 & 1  
\end{pmatrix},  
\text{ calcolare }A^{-1}  
$$  
  
applico Gauss-Jordan due volte dall'alto e dal basso alla matrice $(A\ \vdots\ I)$  
  
$$  
\begin{pmatrix}  
1 & 1 & 2 & \vdots & 1 & 0 & 0\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
-1 & 0 & 1 & \vdots & 0 & 0 & 1  
\end{pmatrix}  
\underset{\begin{align}  
R_2 & \rightarrow R_2\\  
R_3 & \rightarrow R_3 + R_1  
\end{align}}{\overset{R_1 \rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & 1 & 2 & \vdots & 1 & 0 & 0\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
0 & 1 & 3 & \vdots & 1 & 0 & 1  
\end{pmatrix}  
$$  
$$  
\underset{\begin{align}  
R_2 & \rightarrow R_2\\  
R_3 & \rightarrow R_3 - R_2  
\end{align}}{\overset{R_1 \rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & 1 & 2 & \vdots & 1 & 0 & 0\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
0 & 0 & 3 & \vdots & 1 & -1 & 1  
\end{pmatrix}  
\underset{\begin{align}  
R_2 & \rightarrow R_2\\  
R_3 & \rightarrow \frac{1}{3} R_3  
\end{align}}{\overset{R_1 \rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & 1 & 2 & \vdots & 1 & 0 & 0\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
0 & 0 & 1 & \vdots & \frac{1}{3} & -\frac{1}{3} & \frac{1}{3}  
\end{pmatrix}  
$$  
$$  
\underset{\begin{align}  
R_2 & \rightarrow R_2\\  
R_3 & \rightarrow R_3  
\end{align}}{\overset{R_1 \rightarrow R_1- 2 R_3}{\longrightarrow}}  
\begin{pmatrix}  
1 & 1 & 0 & \vdots & \frac{1}{3} & \frac{2}{3} & -\frac{2}{3}\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
0 & 0 & 1 & \vdots & \frac{1}{3} & -\frac{1}{3} & \frac{1}{3}  
\end{pmatrix}  
\underset{\begin{align}  
R_2 & \rightarrow R_2\\  
R_3 & \rightarrow R_3  
\end{align}}{\overset{R_1 \rightarrow R_1 - R_2}{\longrightarrow}}  
\begin{pmatrix}  
1 & 0 & 0 & \vdots & \frac{1}{3} & -\frac{1}{3} & -\frac{2}{3}\\  
0 & 1 & 0 & \vdots & 0 & 1 & 0\\  
0 & 0 & 1 & \vdots & \frac{1}{3} & -\frac{1}{3} & \frac{1}{3}  
\end{pmatrix}  
$$  
  
$$  
\implies A^{-1} = \begin{pmatrix}  
\frac{1}{3} & -\frac{1}{3} & -\frac{2}{3}\\  
0 & 1 & 0\\  
\frac{1}{3} & -\frac{1}{3} & \frac{1}{3}  
\end{pmatrix}  
$$  
  
**Formule**  
  
1. $(AB)^{-1}=B^{-1}A^{-1}$  
2. $(A^{-1})^{-1}=A$  
3. $(A^T)^{-1}=(A^{-1})^T$  
  
# Determinanti  
  
## Determinante 2×2  
  
$$  
A=\begin{pmatrix}  
a_{11} & a_{12} & \cdots & a_{1N}\\  
a_{21} & a_{22} & \cdots & a_{2N}\\  
\vdots & \vdots & \ddots & \vdots\\  
a_{N1} & a_{N2} & \cdots & a_{NN}  
\end{pmatrix}  
\quad\text{matrice }N\times N  
$$  
  
il determinante di $A$ è il numero reale.  
  
$$  
\det(A) = |A| = \sum_{\sigma \in S_N} \left( \mathrm{sgn}(\sigma) \prod_{i=1}^N a_{i, \sigma(i)} \right)  
$$  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
a & b\\  
c & d  
\end{pmatrix}  
\quad2\times2  
$$  
  
$$  
S_2=\{\text{gruppo simmetrico su 2 elementi}\}=\{\text{id},(1\ 2)\}  
$$  
$$  
\det(A)= \mathrm{sgn}(\text{id})\cdot a_{1,1}\cdot a_{2,2} + \mathrm{sgn}((1\ 2))\cdot a_{1,2}\cdot a_{2,1} = ad - bc  
$$  
  
## Determinante 3×3  
  
### Regola di Sarrus  
  
$$  
A=\begin{pmatrix}  
a & b & c\\  
d & e & f\\  
g & h & i  
\end{pmatrix}  
$$  
  
$$  
\det(A) = aei + bfg + cdh - ceg - bdi - afh  
$$  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
3 & 1 & -1\\  
2 & 1 & 0\\  
0 & 1 & 3  
\end{pmatrix}  
$$  
  
$$  
\det(A) = 3\cdot1\cdot3 + 1\cdot0\cdot0 + (-1)\cdot2\cdot1 - (-1)\cdot1\cdot0 - 1\cdot2\cdot3 - 3\cdot0\cdot1 = 9 + 0 - 2 - 0 - 6 - 0 = 1  
$$  
  
## Proprietà dei determinanti  
  
1. Se $B$ si ottiene da $A$ scambiando due righe o colonne, allora $\det(B) = -\det(A)$ (perché comporre con un 2-ciclo cambia la parità)  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 3\\  
-2 & 5  
\end{pmatrix},  
\quad  
\det(A) = 11  
\qquad  
B=\begin{pmatrix}  
-2 & 5\\  
1 & 3  
\end{pmatrix}  
\quad  
\det(B) = -11  
$$  
  
2. Se $A$ ha due righe o colonne uguali, il determinante è zero.  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 2\\  
1 & 2  
\end{pmatrix},  
\quad  
\det(A) = 1\cdot2 - 2\cdot1 = 0  
$$  
  
3. Se $A$ ha una riga o colonna di zeri, il determinante è zero.  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 0\\  
2 & 0  
\end{pmatrix},  
\quad  
\det(A) = 1\cdot0 - 0\cdot2 = 0  
$$  
  
4. Se $B$ si ottiene da $A$ moltiplicando una riga o colonna per uno scalare $k\in\mathbb{R}$, allora $\det(B) = k \det(A)$.  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 2\\  
3 & 4  
\end{pmatrix},  
\quad  
\det(A) = 1\cdot4 - 2\cdot3 = -2  
\qquad  
B=\begin{pmatrix}  
3 & 6\\  
3 & 4  
\end{pmatrix}  
\quad  
\det(B) = 3\cdot(-2) = -6  
$$  
  
$$  
in particolare \det(kA) = k^N \det(A) \text{ se } A \text{ è } N\times N  
$$  
  
5. Se $B$ si ottiene da $A$ sommando a una riga o colonna di $A$ un multiplo di un'altra riga o colonna, allora $\det(B) = \det(A)$.  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 0 & -1\\  
2 & 3 & -1\\  
-1 & 1 & 2  
\end{pmatrix}  
\underrightarrow{R_2 \rightarrow R_2 - 2 R_1}  
\begin{pmatrix}  
1 & 0 & -1\\  
1 & 3 & 0\\  
-1 & 1 & 2  
\end{pmatrix}  
$$  
  
$$  
\begin{align}  
&\det(A)=2\\  
&\det(B)=2  
\end{align}  
\qquad\text{si usa Sarrus } 3\times3  
$$  
  
6. Matrici triangolari superiori  
  
$$  
A=\begin{pmatrix}  
a_{11} & a_{12} & \cdots & a_{1N}\\  
0 & a_{22} & \cdots & a_{2N}\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & a_{NN}  
\end{pmatrix}  
\quad\det(A) = a_{11} \cdot a_{22} \cdots a_{NN}  
$$  
  
*Esmepio*  
  
$$  
A=\begin{pmatrix}  
2 & 3 & 1\\  
0 & -1 & 4\\  
0 & 0 & 5  
\end{pmatrix}  
$$  
  
è triangolare superiore  
  
$$  
\det(A) = 2 \cdot (-1) \cdot 5 = -10  
$$  
  
Le proprietà enunciate permettono di calcolare il determinante col processo di Gauss-Jordan.  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 0 & 3\\  
2 & 0 & 4\\  
0 & 5 & 0  
\end{pmatrix}  
\underrightarrow{R_2 \rightarrow R_2 - 2 R_1}  
\begin{pmatrix}  
1 & 0 & 3\\  
0 & 0 & -2\\  
0 & 5 & 0  
\end{pmatrix}  
\underrightarrow{R_3 \leftrightarrow R_2}  
\begin{pmatrix}  
1 & 0 & 3\\  
0 & 5 & 0\\  
0 & 0 & -2  
\end{pmatrix}  
=B\text{ triangolare superiore}  
$$  
  
$$  
\det(B) = 1 \cdot 5 \cdot (-2) = -10  
\quad  
\det(A) = -\det(B) = 10  
$$  
  
> Bisogna tenere conto degli scambi e degli scalari con cui moltiplico le righe.  
  
> **Osservazione importante**  
> $A\ N\times N$ è invertibile $\iff\mathrm{rk}(A)=N$  
> $\iff$ forma a gradini ha $N$ pivot  
> $\iff$ forma a gradini è $\begin{pmatrix} 1_1 & * & * & *\\ 0 & 1_2 & * & *\\ \vdots & \vdots & \ddots & \vdots\\ 0 & 0 & \cdots & 1_N \end{pmatrix}$  
> $\iff \det(A) \neq 0$  
  
> **Conclusione**  
> A è invertibile $\iff \det(A) \neq 0$  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
0 & 1\\  
0 & 0  
\end{pmatrix}  
\quad  
\det(A) = 0 \implies A \text{ non è invertibile}  
$$  
  
## Regola di Laplace  
  
(determinante per matrici di dimensione superiore a 3)  
  
$$  
A=\begin{pmatrix}  
a_{11} & a_{12} & \cdots & a_{1N}\\  
a_{21} & a_{22} & \cdots & a_{2N}\\  
\vdots & \vdots & \ddots & \vdots\\  
a_{N1} & a_{N2} & \cdots & a_{NN}  
\end{pmatrix}  
\quad\text{matrice }N\times N  
$$  
  
indichiamo con $A_{ij}$ la matrice $(N-1)\times(N-1)$ ottenuta da $A$ eliminando la riga $i$ e la colonna $j$.  
  
Allora fissato $i\in\{1,\ldots,N\}$  
si ha  
  
$$  
\det(A) = \sum_{j=1}^N a_{ij} (-1)^{i+j} \det(A_{ij})  
$$  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
1 & 2 & -1 & 0\\  
0 & -2 & -3 & 1\\  
1 & - & 0 & -2\\  
1 & 1 & 0 & 1  
\end{pmatrix}  
\quad  
\overset{\text{matrice dei segni}}{\underset{\text{l'elemento di posto }i,j\text{ è }(-1)^{1+j}}{\begin{pmatrix}  
+ & - & + & -\\  
- & + & - & +\\  
+ & - & + & -\\  
- & + & - & +  
\end{pmatrix}}}  
$$  
  
possiamo scegliere una riga o colonna lungo la quale facciamo lo sviluppo. Conviene scegliere quella con più zeri.  
  
Scegliamo la terza riga  
  
$$  
\det(A)=1\det\begin{pmatrix}  
2 & -1 & 0\\  
-2 & -3 & 1\\  
1 & 0 & 1  
\end{pmatrix}  
-(0)\det\begin{pmatrix}  
1 & -1 & 0\\  
0 & -3 & 1\\  
1 & 0 & 1  
\end{pmatrix}  
$$  
$$  
+(0))\det\begin{pmatrix}  
1 & 2 & 0\\  
0 & -2 & 1\\  
1 & 1 & 1  
\end{pmatrix}  
-(-2)\det\begin{pmatrix}  
1 & 2 & -1\\  
0 & -2 & -3\\  
1 & 1 & 0  
\end{pmatrix}  
$$  
$$  
\overset{\text{Sarrus }3\times3}{=}(-6+0-1-0-0-2)-0+0+2(-6-2+3)  
$$  
  
## Teorema di Binet  
  
1. $\det(AB) = \det(A) \cdot \det(B)$  
2. $\det(A^{-1}) = \frac{1}{\det(A)}$ se $A$ è invertibile  
3. $\det(A^k)) = (\det(A))^k$  
  
# Algebra lineare  
## Spazio vettoriale  
  
Uno spazio vettoriale su un campo $\mathbb{K}$ è un insieme $V$ dotato di due operazioni:  
  
1. somma: $+: V \times V \rightarrow V$  
2. prodotto per scalare: $\cdot: \mathbb{K} \times V \rightarrow V$  
  
tali che valgono le seguenti proprietà:  
  
1. $(V, +)$ è un gruppo abeliano  
2. $c\cdot (u + v) = c \cdot u + c \cdot v$ per ogni $c \in \mathbb{K}$ e per ogni $u, v \in V$  
3. $(c_1 + c_2) \cdot v = c_1 \cdot v + c_2 \cdot v$ per ogni $c_1, c_2 \in \mathbb{K}$ e per ogni $v \in V$  
4. $(c_1 c_2) \cdot v = c_1 \cdot (c_2 \cdot v)$ per ogni $c_1, c_2 \in \mathbb{K}$ e per ogni $v \in V$  
5. $1 \cdot v = v$ per ogni $v \in V$, dove $1$ è l'elemento neutro del campo $\mathbb{K}$  
  
**conseguenze immediate**  
  
1. il vettore nullo $0$ è unico  
2. $0\cdot v = 0$ per ogni $v \in V$  
3. $c \cdot 0 = 0$ per ogni $c \in \mathbb{K}$  
  
*Esempio*  
  
$$  
\mathbb{R}^2=\{\begin{pmatrix}x\\y\end{pmatrix} : x,y \in \mathbb{R}\}  
$$  
  
è l'insieme dei vettori colonna a due entrate.  
  
![Screenshot 2026-01-16 alle 21.01.09](../../../Immagini/Screenshot%202026-01-16%20alle%2021.01.09.png)  
  
$\mathbb{R}^2$ è uno spazio vettoriale su $\mathbb{R}$ con le operazioni. Perché?  
  
1. somma: $\begin{pmatrix}x_1\\y_1\end{pmatrix} + \begin{pmatrix}x_2\\y_2\end{pmatrix} = \begin{pmatrix}x_1 + x_2\\y_1 + y_2\end{pmatrix}$  
2. prodotto per scalare: $c \cdot \begin{pmatrix}x\\y\end{pmatrix} = \begin{pmatrix}c x\\c y\end{pmatrix}$  
  
si può verificare che valgono le proprietà di spazio vettoriale facilmente.  
  
Chi è il vettoriale nullo di $\mathbb{R}^2$?  
  
$$  
0 = \begin{pmatrix}0\\0\end{pmatrix}\in \mathbb{R}^2  
$$  
  
Chi è l'opposto di un vettore $\begin{pmatrix}x\\y\end{pmatrix}$?  
  
$$  
-\begin{pmatrix}x\\y\end{pmatrix} = \begin{pmatrix}-x\\-y\end{pmatrix}  
$$  
  
![Screenshot 2026-01-16 alle 21.04.00](../../../Immagini/Screenshot%202026-01-16%20alle%2021.04.00.png)  
  
*Altri esempi*  
  
$$  
\mathbb{R}^3=\{\begin{pmatrix}x\\y\\z\end{pmatrix} : x,y,z \in \mathbb{R}\}  
$$  
  
![Screenshot 2026-01-16 alle 21.04.42](../../../Immagini/Screenshot%202026-01-16%20alle%2021.04.42.png)  
  
in generale  
  
$$  
\mathbb{R}^N=\{\begin{pmatrix}x_1\\x_2\\\vdots\\x_N\end{pmatrix} : x_i \in \mathbb{R}, i=1,\ldots,N\}  
$$  
  
l'insieme dei vettori colonna a $N$ entrate.  
  
---  
  
L'insieme delle matrici quadrate $N\times N$ è uno spazio vettoriale su su $\mathbb{R}$:  
  
$$  
M(\mathbb{R}, N) = \{\text{matrici quadrate }N\times N\text{ a coefficienti in }\mathbb{R}\}  
$$  
  
$$  
A,B\in M(\mathbb{R}, N)\text{ allora } A + B \in M(\mathbb{R}, N)  
$$  
  
$$  
c \in \mathbb{R}, A \in M(\mathbb{R}, N) \text{ allora } c \cdot A \in M(\mathbb{R}, N)  
$$  
  
Sono definite le 2 operazioni.  
  
Il vettore nullo in $M(\mathbb{R}, N)$ è la matrice nulla  
  
$$  
0 = \begin{pmatrix}  
0 & 0 & \cdots & 0\\  
0 & 0 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & 0  
\end{pmatrix}  
$$  
  
---  
  
### Polinomi di grado $\leq N$  
  
È uno spazio vettoriale su $\mathbb{R}$.  
  
$$  
R_N[x] = \{p(x) = a_0 + a_1 x + a_2 x^2 + \cdots + a_N x^N : a_i \in \mathbb{R}, i=0,\ldots,N\}  
$$  
  
$$  
p(x), q(x) \in R_N[x] \implies p(x) + q(x) \in R_N[x]  
$$  
  
$$  
c \in \mathbb{R}, p(x) \in R_N[x] \implies c \cdot p(x) \in R_N[x]  
$$  
  
il vettore nullo di $R_N[x]$ è il polinomio nullo  
  
### Sottospazi  
  
> **Definizione**  
> Un sottoinsieme non vuoto $W$ di uno spazio vettoriale $V$ sul campo $\mathbb{K}$ si dice sottospazio vettoriale di $V$ se:  
  
1. $W$ è chiuso rispetto alla somma:  
  
$$  
u,v \in W \implies u + v \in W  
$$  
  
2. $W$ è chiuso rispetto al prodotto per scalare:  
  
$$  
c \in \mathbb{K}, v \in W \implies c \cdot v \in W  
$$  
  
*Osservazione*  
$W$ è di nuovo uno spazio vettoriale.  
  
*Esempi*  
  
$$  
V=M(\mathbb{R}, 2)  
$$  
  
$$  
V\supset W=\{A\in M(\mathbb{R}, 2)\mid A=\begin{pmatrix}  
a & 0\\  
0 & b  
\end{pmatrix}\}  
$$  
  
$W$ è un sottospazio vettoriale di $V$?  
  
$W$ chiuso rispetto alla somma? Sì  
  
$$  
A_1=\begin{pmatrix}  
a_1 & 0\\  
0 & b_1  
\end{pmatrix},  
\quad  
A_2=\begin{pmatrix}  
a_2 & 0\\  
0 & b_2  
\end{pmatrix}  
$$  
  
$$  
A_1 + A_2 = \begin{pmatrix}  
a_1 + a_2 & 0\\  
0 & b_1 + b_2  
\end{pmatrix} \in W  
$$  
  
$W$ è chiuso rispetto alla moltiplicazione per scalare? Sì  
  
$$  
c \in \mathbb{R},\quad  
A=\begin{pmatrix}  
a & 0\\  
0 & b  
\end{pmatrix}  
\in W  
$$  
  
$$  
c \cdot A = \begin{pmatrix}  
c a & 0\\  
0 & c b  
\end{pmatrix} \in W  
$$  
  
Quindi $W$ è un sottospazio vettoriale di $V$.