---
share: true
---
[Lezione 20: Slides](<Primo/Matematica I/Slides/L20 (02.12.2025).pdf>)  
# Sistemi lineari  
## Processo di Gauss-Jordan  
  
$$  
\begin{cases}  
a_{11}x_1+a_{12}x_2+\dots+a_{1n}x_n=b_1\\  
a_{21}x_1+a_{22}x_2+\dots+a_{2n}x_n=b_2\\  
\vdots\\  
a_{m1}x_1+a_{m2}x_2+\dots+a_{mn}x_n=b_m  
\end{cases}  
$$  
  
$$  
a_{ij}\in\mathbb{R},\quad b_k\in\mathbb{R}  
$$  
  
Sistema:  
- $m$ equazioni  
- $n$ incognite  
  
*Processo di Gauss-Jordan:*  
Ridurre il sistema ad un sistema a gradini equivalente.  
  
$$  
\begin{cases}  
a'_{11}x_1+a'_{12}x_2+\dots+a'_{1n}x_n=b'_1\\  
0\cdot x_1+a'_{22}x_2+\dots+a'_{2n}x_n=b'_2\\  
\vdots\\  
0\cdot x_1+0\cdot x_2+\dots+a'_{mn}x_n=b'_m  
\end{cases}  
$$  
  
sono sistemi equivalenti, cioè hanno le stesse soluzioni. Il sistema a gradini è facile da risolvere perché si risolve per sostituzione a partire dall'ultima equazione.  
  
Si ottengono sistemi equivalenti se opero con le seguenti operazioni, dette elementari:  
  
1. scambiare di posto due equazioni  
2. moltiplicare una equazione per uno scalare (= numero reale) non nullo  
3. sostituire una equazione con la somma di se stessa e un multiplo scalare di un'altra equazione  
  
 **Esempio**  
  
$$  
\begin{cases}  
x-y+z=0\\  
2x+3y+5z=-3\\  
-x+7y-2z=1  
\end{cases}  
$$  
  
considero le matrici dei coefficienti.  
  
$$  
A=  
\begin{pmatrix}  
1 & -1 & 1\\  
2 & 3 & 5\\  
-1 & 7 & -2  
\end{pmatrix}  
\quad  
\underline{b}=  
\begin{pmatrix}  
0\\  
-3\\  
1  
\end{pmatrix}  
$$  
  
riduciamo a gradini la matrice  
  
$$  
(A\ \vdots\ \underline{b})=  
\begin{pmatrix}  
1 & -1 & 1 & \vdots & 0\\  
2 & 3 & 5 & \vdots & -3\\  
-1 & 7 & -2 & \vdots & 1  
\end{pmatrix}  
\underset{\begin{align}  
R_2&\rightarrow R_2-2R_1\\  
R_3&\rightarrow R_3  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & -1 & 1 & \vdots & 0\\  
0 & 5 & 3 & \vdots & -3\\  
0 & 6 & -1 & \vdots & 1  
\end{pmatrix}  
$$  
$$  
\underset{\begin{align}  
R_2&\rightarrow R_2\\  
R_3&\rightarrow R_3+R_1  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & -1 & 1 & \vdots & 0\\  
0 & 5 & 3 & \vdots & -3\\  
0 & 6 & -1 & \vdots & 1  
\end{pmatrix}  
\underset{\begin{align}  
R_2&\rightarrow \frac{1}{5}R_2\\  
R_3&\rightarrow R_3  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & -1 & 1 & \vdots & 0\\  
0 & 1 & \frac{3}{5} & \vdots & -\frac{3}{5}\\  
0 & 6 & -1 & \vdots & 1  
\end{pmatrix}  
$$  
$$  
\underset{\begin{align}  
R_2&\rightarrow R_2\\  
R_3&\rightarrow R_3-6R_2  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & -1 & 1 & \vdots & 0\\  
0 & 1 & \frac{3}{5} & \vdots & -\frac{3}{5}\\  
0 & 0 & -\frac{23}{5} & \vdots & \frac{23}{5}  
\end{pmatrix}  
$$  
  
$$  
\begin{cases}  
x - y + z = 0\\  
y + \frac{3}{5}z = -\frac{3}{5}\\  
-\frac{23}{5}z = \frac{23}{5}\ \rightarrow \ z = -1  
\end{cases}  
$$  
  
$$  
y + \frac{3}{5}(-1) = -\frac{3}{5}\ \rightarrow\ y = 0  
$$  
  
$$  
x - 0 + (-1) = 0\ \rightarrow\ x = 1  
$$  
  
Soluzione unica:  
$$  
\begin{pmatrix}  
x\\  
y\\  
z  
\end{pmatrix}  
=  
\begin{pmatrix}  
1\\  
0\\  
-1  
\end{pmatrix}  
\qquad\text{una sola soluzione}  
$$  
  
**Forme a gradini**  
  
$$  
\begin{pmatrix}  
1 & 2 & 3\\  
0 & 4 & 5\\  
0 & 0 & 6  
\end{pmatrix}  
\quad  
\text{è in forma a gradini}  
$$  
  
$$  
\begin{pmatrix}  
1 & 2 & 3\\  
0 & 4 & 5\\  
0 & 6 & 7  
\end{pmatrix}  
\quad  
\text{non è in forma a gradini}  
$$  
  
$$  
\begin{pmatrix}  
1 & 2 & 3\\  
0 & 0 & 0\\  
0 & 0 &0  
\end{pmatrix}  
\quad  
\text{è in forma a gradini}  
$$  
  
Gli elementi non nulli sui gradini si chiamano pivot.  
  
**Definizione**  
Il rango di una matrice $A$ è il numero di pivot della sua forma a gradini.  
Si indice con $\mathrm{rg}(A)$.  
  
*Esempio*  
  
$$  
\begin{cases}  
x + y + z = -3\\  
2x - y + 3z = -4\\  
3x\qquad+4z=-7  
\end{cases}  
$$  
  
$$  
A=  
\begin{pmatrix}  
1 & 1 & 1\\  
2 & -1 & 3\\  
3 & 0 & 4  
\end{pmatrix}  
\quad  
\underline{b}=  
\begin{pmatrix}  
-3\\  
-4\\  
-7  
\end{pmatrix}  
$$  
  
$$  
(A\ \vdots\ \underline{b})=  
\begin{pmatrix}  
1 & 1 & 1 & \vdots & -3\\  
2 & -1 & 3 & \vdots & -4\\  
3 & 0 & 4 & \vdots & -7  
\end{pmatrix}  
$$  
  
$$  
\underset{\begin{align}  
R_2&\rightarrow R_2-2R_1\\  
R_3&\rightarrow R_3-3R_1  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
1 & 1 & 1 & \vdots & -3\\  
0 & -3 & 1 & \vdots & 2\\  
0 & -3 & 1 & \vdots & 2  
\end{pmatrix}  
\quad\text{a gradini}  
$$  
  
$$  
\mathrm{rg}(A)=2\qquad \mathrm{rg}(A\ \vdots\ \underline{b})=2  
$$  
  
Ranghi uguali $\Rightarrow$ sistema compatibile.  
  
$$  
\begin{align}  
&\infty^{n-r}\text{ soluzioni}\\  
&n=3\text{ incognite}\\  
&r=2\text{ rango}\\  
&\infty^{3-2}=\infty^1=\infty\text{ soluzioni}  
\end{align}  
$$  
  
$$  
\begin{cases}  
x + y + z = -3\\  
0\cdot x - 3y + z = 2\\  
0\cdot x + 0\cdot y + 0\cdot z = 0  
\end{cases}  
$$  
  
risolviamo partendo dall'ultima operazione  
  
$$  
-3y = -z + 2  
$$  
  
quindi $z$ è variabile libera.  
  
$$  
z=t\quad t\in\mathbb{R}  
$$  
  
$$  
-3y = -t + 2\ \rightarrow\ y = \frac{t - 2}{3}  
$$  
  
sostituisco $y$ e $z$ nella prima equazione:  
  
$$  
x + \frac{t - 2}{3} + t = -3  
$$  
  
$$  
x + \frac{t - 2 + 3t}{3} = -3\ \rightarrow\ x + \frac{4t - 2}{3} = -3\rightarrow\ x = -\frac{7 + 4t}{3}  
$$  
  
$$  
\infty^1\text{ soluzioni: (un parametro libero)}  
$$  
  
Esempio*  
  
$$  
\begin{cases}  
x + y -z+w=1\\  
0+2y+2z-w=0  
\end{cases}  
$$  
  
è già a gradini.  
  
4 incognite, 2 equazioni.  
  
$$  
z=t\quad w=s\quad t,s\in\mathbb{R}  
$$  
  
ricavo $y$ dalla seconda equazione:  
  
$$  
2y + 2t - s = 0\ \rightarrow\ y = \frac{s - 2t}{2}  
$$  
  
ricavo $x$ dalla prima equazione:  
  
$$  
x + \frac{s - 2t}{2} - t + s = 1  
$$  
  
$$  
x + \frac{s - 2t - 2t + 2s}{2} = 1\ \rightarrow\ x + \frac{3s - 4t}{2} = 1\ \rightarrow\ x = 1 - \frac{3s - 4t}{2}  
$$  
  
$$  
2\text{ parametri liberi }t,s\Rightarrow\infty^2-\text{soluzioni}  
$$  
  
*Esempio*  
  
$$  
\begin{cases}  
2x+y-z=5\\  
4x-3y-2z=3\\  
8x-y-4z=0  
\end{cases}  
\qquad   
A=  
\begin{pmatrix}  
2 & 1 & -1\\  
4 & -3 & -2\\  
8 & -1 & -4  
\end{pmatrix}  
\quad  
\underline{b}=  
\begin{pmatrix}  
5\\  
3\\  
0  
\end{pmatrix}  
$$  
  
$(A\ \vdots\ \underline{b})$ è detta matrice completa associata al sistema  
  
$$  
(A\ \vdots\ \underline{b})=  
\begin{pmatrix}  
2 & 1 & -1 & \vdots & 5\\  
4 & -3 & -2 & \vdots & 3\\  
8 & -1 & -4 & \vdots & 0  
\end{pmatrix}  
\quad  
\underset{\begin{align}  
R_2&\rightarrow R_2-2R_1\\  
R_3&\rightarrow R_3-4R_1  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
2 & 1 & -1 & \vdots & 5\\  
0 & -5 & 0 & \vdots & -7\\  
0 & -5 & 0 & \vdots & -20  
\end{pmatrix}  
$$  
  
$$  
\underset{\begin{align}  
R_2&\rightarrow R_2\\  
R_3&\rightarrow R_3 - R_2  
\end{align}}{\overset{R_1\rightarrow R_1}{\longrightarrow}}  
\begin{pmatrix}  
2 & 1 & -1 & \vdots & 5\\  
0 & -5 & 0 & \vdots & -7\\  
0 & 0 & 0 & \vdots & -13  
\end{pmatrix}  
\quad\text{a gradini}  
$$  
  
$$  
\mathrm{rg}(A)=2\qquad \mathrm{rg}(A\ \vdots\ \underline{b})=3  
$$  
  
Ranghi diversi $\Rightarrow$ sistema incompatibile $\Rightarrow$ nessuna soluzione.  
  
$$  
\begin{cases}  
2x + y - z = 5\\  
0\cdot x - 5y + 0\cdot z = -7\\  
0\cdot x + 0\cdot y + 0\cdot z = -13\quad\text{(impossibile)}  
\end{cases}  
$$  
  
### Teorema di Rouché-Capelli  
  
Un sistema lineare è compatibile solo e solo se  
  
$$  
\mathrm{rg}(A) = \mathrm{rg}(A\ \vdots\ \underline{b})  
$$  
  
in tal caso il sistema possiede  
  
$$  
\infty^{n - r}\text{ soluzioni}  
$$  
  
dove $n$ è il numero di incognite e $r$ è il rango della matrice dei coefficienti.  
  
  
