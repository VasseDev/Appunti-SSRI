---
share: true
---
[Lezione 19: Slides](<Primo/Matematica I/Slides/L19 (28.11.2025).pdf>)  
# Gruppi di permutazione/simmetrico Sn  
  
$$  
\{1,2,3,4,\dots,n\}=x\longrightarrow \{1,2,3,4,\dots,n\}  
$$  
  
funzioni biettive.  
  
$$  
S_n=\{\text{funzioni biettive da } \{1,\dots,n\}\rightarrow\{1,\dots,n\}\}  
$$  
  
$$  
|S_n|=n!  
$$  
  
Operazione: composizione $f\circ g$. (prima fai g poi f)  
  
$$  
f(g(x))=f\circ g(x)  
$$  
  
## Neutro  
  
$$  
\begin{align}  
&id\circ g(x)=g(x)\\  
&g\circ id(x)=g(x)  
\end{align}  
$$  
  
la funzione:  
  
$$  
\begin{align}  
&1\longrightarrow 1\\  
&2\longrightarrow 2\\  
&3\longrightarrow 3\\  
&\vdots\\  
&n\longrightarrow n  
\end{align}  
$$  
  
## Inverso  
  
$$  
\begin{align}  
&f\circ f^{-1}(x)=id(x)\\  
&f^{-1}\circ f(x)=id(x)  
\end{align}  
$$  
  
la funzione:  
  
$$  
\begin{align}  
&f(a_1)=b_1\\  
&f(a_2)=b_2\\  
&f(a_3)=b_3\\  
&\vdots\\  
&f(a_n)=b_n  
\end{align}  
$$  
  
allora:  
  
$$  
\begin{align}  
&f^{-1}(b_1)=a_1\\  
&f^{-1}(b_2)=a_2\\  
&f^{-1}(b_3)=a_3\\  
&\vdots\\  
&f^{-1}(b_n)=a_n  
\end{align}  
$$  
  
## Come scriverle meglio  
  
$$  
\sigma:  
\begin{pmatrix}  
1 & 2 & 3 & \dots & n\\  
f(1) & f(2) & f(3) & \dots & f(n)  
\end{pmatrix}  
$$  
  
Esempio:  
  
$$  
\sigma:  
\begin{pmatrix}  
1 & 2 & 3 & 4 & 5 & 6 & 7 & 8\\  
3 & 1 & 4 & 2 & 5 & 7 & 8 & 6  
\end{pmatrix}  
$$  
  
Permutazioni "facili": scambi $\begin{pmatrix}1 & 2\\2 & 1\end{pmatrix}$ solo 1 con 2  
cicli: $\sigma:\begin{pmatrix}1 & 2 & 3\\2 & 3 & 1\end{pmatrix}$ 1 va a 2, 2 va a 3, 3 va a 1.  
  
$$  
(a_1 a_2 a_3 \dots a_k)=\begin{pmatrix} a_1 & a_2 & a_3 & \dots & a_k\\ a_2 & a_3 & a_4 & \dots & a_1 \end{pmatrix}  
$$  
  
Osservazione:  
  
$$  
(2\ 5)\circ(2\ 5)=id\rightarrow\text{scambio/transposizione}  
$$  
  
cioè lo scambio è il suo inverso.  
  
$$  
(a\ b)^2=(a\ b)\circ(a\ b)=id\rightarrow\text{ordine/periodo di una trasposizione è 2}  
$$  
  
$$  
\sigma:  
(2\ 7\ 5)\rightarrow\text{ ciclo di lunghezza 3}  
$$  
  
l'ordine è 3.  
  
**Regola generale:**  
  
$$  
(a_1\ a_2\ a_3\ \dots\ a_k)^k=id  
$$  
  
L'ordine di un ciclo di lunghezza k è k.  
  
## Prodotto di cicli  
  
$$  
(1\ 3)(2\ 4\ 5)\leftarrow\sigma_1\text{ e }\sigma_2\text{ agiscono su elementi diversi}  
$$  
  
$$  
(1\ 3)(2\ 4\ 5)=(2\ 4\ 5)(1\ 3)  
$$  
  
Il prodotto di cicli disgiunti ha come risultato  
$$  
(1\ 3)(2\ 4\ 5)=\begin{pmatrix}  
1 & 2 & 3 & 4 & 5\\  
3 & 4 & 1 & 5 & 2  
\end{pmatrix}  
$$  
  
### Cicli disgiunti  
  
$$  
\sigma^2=(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)=(1\ 3)(1\ 3)(2\ 4\ 5)(2\ 4\ 5)=(2\ 5\ 4)(2\ 4\ 5)=id  
$$  
  
$$  
\sigma^3=(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)=(1\ 3)(1\ 3)(1\ 3)(2\ 4\ 5)(2\ 4\ 5)(2\ 4\ 5)=(1\ 3)  
$$  
  
$$  
\sigma^4=(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)(1\ 3)(2\ 4\ 5)=(1\ 3)(1\ 3)(1\ 3)(1\ 3)(2\ 4\ 5)(2\ 4\ 5)(2\ 4\ 5)(2\ 4\ 5)=(2\ 4\ 5)  
$$  
  
Quindi:  
  
$$  
\sigma^n=id?\qquad\sigma^n=\sigma^n_1\circ \sigma_2^n\qquad\sigma^n=id\Leftrightarrow\sigma_1^n=id\text{ e }\sigma_2^n=id  
$$  
  
$$  
\sigma_1^n\iff n\text{ multiplo dell'ordine di }\sigma_1  
$$  
  
$$  
\sigma_2^n\iff n\text{ multiplo dell'ordine di }\sigma_2  
$$  
  
$$  
\sigma^n=id\iff n\text{ multiplo dell'mcm degli ordini di }\sigma_1\text{ e }\sigma_2  
$$  
  
Ordine di $\sigma$ è l'mcm degli ordini di $\sigma_1$ e $\sigma_2$.  
  
Esempio:  
  
$$  
\sigma=(1\ 3)(2\ 4\ 5)\qquad o(\sigma_1)=2\qquad o(\sigma_2)=3\qquad o(\sigma)=\text{mcm}(2,3)=6  
$$  
  
**Caso brutto**  
  
$$  
(1\ 4)(2\ 1\ 3)=(2\ 1\ 3)(1\ 4)?\text{ NO}  
$$  
  
$$  
S_n\text{ non è commutativo}  
$$  
  
$$  
(1\ 4)(2\ 1\ 3)\text{ si può riscrivere meglio?}  
$$  
  
$$  
(1\ 4)(2\ 1\ 3)=\begin{pmatrix}  
1 & 2 & 3 & 4 & 5\\  
3 & 4 & 2 & 1 & 5  
\end{pmatrix}=  
(1\ 3\ 2\ 4)(5)  
$$  
  
$$  
(2\ 1\ 3)(1\ 4)=\begin{pmatrix}  
1 & 2 & 3 & 4 & 5\\  
4 & 1 & 2 & 3 & 5  
\end{pmatrix}=  
(1\ 4\ 3\ 2)(5)  
$$  
  
## Teorema  
  
Ogni permutazione si scrive come prodotto di cicli disgiunti in modo unico a meno dell'ordine dei fattori e dei cicli di lunghezza 1.  
  
$$  
(1\ 3\ 2)(4\ 5)=(4\ 5)(1\ 3\ 2)\neq (1\ 2\ 3)(4\ 5)  
$$  
  
**Algoritmo**  
  
$$  
\begin{pmatrix}  
1 & 2 & 3 & \dots & n\\  
a_1 & a_2 & a_3 & \dots & a_n  
\end{pmatrix}  
$$  
  
1. Prendi il primo elemento non ancora usato (1)  
2. Segui l'immagine fino a tornare al punto di partenza: ottieni un ciclo  
3. Ripeti con il primo elemento non ancora usato fino a che non hai usato tutti gli elementi.  
  
Esempio:  
  
$$  
\sigma=  
\begin{pmatrix}  
1 & 2 & 3 & 4 & 5 & 6 & 7 & 8\\  
3 & 1 & 4 & 2 & 5 & 7 & 8 & 6  
\end{pmatrix}  
$$  
  
1. Prendo 1: (1 3 4 2)  
2. Prendo 5: (5)  
3. Prendo 6: (6 7 8)  
  
Quindi:  
  
$$  
\sigma=(1\ 3\ 4\ 2)(5)(6\ 7\ 8)  
$$  
  
$$  
o(\sigma)=\text{m.c.m. }(4,1,3)=12  
$$  
  
## Inverso  
  
$$  
id^{-1}=id\qquad (a\ b)^{-1}=(a\ b)  
$$  
  
$$  
\sigma^{-1}\circ\sigma=\sigma\circ\sigma^{-1}=id  
$$  
  
esempio:  
  
$$  
(1\ 6\ 3\ 7\ 2)(1\ 8\ 7\ 3\ 6)  
$$  
  
**Procedura per l'inverso di un ciclo:**  
  
$$  
\begin{pmatrix}  
1 & 2 & 3 & 4 & 5\\  
2 & 1 & 4 & 5 & 3  
\end{pmatrix}  
$$  
  
modo 1:  
  
$$  
(1\ 2)(3\ 4\ 5)\rightarrow(2\ 1)(5\ 4\ 3)  
$$  
  
modo 2:  
  
$$  
\begin{pmatrix}  
1 & 2 & 3 & 4 & 5\\  
2 & 1 & 5 & 3 & 4  
\end{pmatrix}  
$$  
  
$$  
\begin{pmatrix}  
2 & 1 & 4 & 5 & 3\\  
1 & 2 & 3 & 4 & 5  
\end{pmatrix}  
$$  
  
e poi riordino la prima riga.  
  
## Scrittura alternativa  
  
$$  
\sigma = (1\ 2\ 3)(4\ 5)(6\ 7)  
$$  
  
prodotto di scambi? sì, non disgiunti.  
  
$$  
(1\ 2)=(1\ 3)(1\ 2)  
$$  
  
$$  
(1\ 5\ 7\ 6\ 8)= (1\ 5)(1\ 7)(1\ 6)(1\ 8)  
$$  
  
**Proprietà:**  
Ogni permutazione può essere scritta come prodotto di cicli in modi diversi. Non cambia la parità del numero di cicli da usare.  
Una permutazione si dice _pari_ se può essere scritta con un numero pari di cicli, dispari altrimenti.  
  
Esempio:  
  
$$  
(1\ 3)\rightarrow\text{dispari}  
$$  
  
$$  
(1\ 3)(4\ 7)\rightarrow\text{pari}  
$$  
  
$$  
(1\ 3\ 6\ 7\ 8)=(1\ 3)(1\ 6)(1\ 7)(1\ 8)\rightarrow\text{dispari}  
$$  
  
> Cicli lunghi dispari sono pari e viceversa.  
  
$$  
(1\ 2\ 6\ 7\ 3)(4\ 3\ 7)(2\ 1) = \text{pari + pari + dispari}= \text{dispari}  
$$  
  
$$  
(1\ 2\ 3)(4\ 5)(6\ 7\ 8\ 9) = \text{pari + dispari + dispari}= \text{pari}  
$$  
  
**Esempio da compito:**  
  
In $(S_8, 0)$ sia:  
  
$$  
\sigma=  
\begin{pmatrix}  
1 & 2 & 3 & 4 & 5 & 6 & 7 & 8\\  
2 & 4 & 1 & 7 & 3 & 8 & 5 & 6  
\end{pmatrix}  
$$  
  
1. Calcolare $\sigma$ come prodotto di cicli disgiunti  
  
$$  
\sigma=(1\ 2\ 4\ 7\ 5\ 3)(6\ 8)  
$$  
  
2. Calcolare l'inversa  
  
$$  
\sigma^{-1}=(3\ 5\ 7\ 4\ 2\ 1)(8\ 6)  
$$  
  
3. Calcolare l'ordine di $\sigma=\text{mcm}(\sigma_1,\sigma_2)$  
  
$$  
o(\sigma)=\text{mcm}(6,2)=6  
$$  
  
4. Stabilire se $\sigma$ è pari o dispari  
  
$$  
\sigma=\text{pari}  
$$  
  
perché 6 è pari e 2 è pari, pari + pari = pari.  
  
5. Dire se $S_8$ abbia un sottogruppo di ordine 15  
  
Ciclico? Sì  
Lagrange? No  
  
$$  
15=3\cdot 5  
$$  
  
Cicli disgiunti di lunghezza 3 e 5  
  
$$  
\sigma = (1\ 2\ 3)(4\ 5\ 6\ 7\ 8)\quad\{id, \sigma, \sigma^2, \sigma^3, \sigma^4, \sigma^5, \sigma^6, \sigma^7, \sigma^8, \sigma^9, \sigma^{10}, \sigma^{11}, \sigma^{12}, \sigma^{13}, \sigma^{14}\}  
$$  
  
Quindi sì, esiste un sottogruppo di ordine 15 in $S_8$.  
  
# Anelli  
  
## Anello dei polinomi  
  
$$  
3x^5+7x-3  
$$  
  
Sia $A=(A,+,\cdot)$ un anello.  
  
_Definizione_: l'anello dei polinomi ha coefficienti in $A:A[x]$  
  
$$  
\{0\}\cup\{\sum_{i=0}^n a_ix^i\mid n\in\mathbb{N}_0,a_i\in A\}  
$$  
  
*Esempi*  
  
$$  
3x^3-5x+8\qquad  
$$  
$$  
\text{Coefficenti in }\mathbb{Z}_5:\quad[2]x^3-x+[3]  
$$  
  
_Definizione_: il grado di un polinomio:  
  
- grado(0) = -1  
- grado($\sum_{i=0}^n a_ix^i$) = max$\{i\mid a_i\neq 0\}$  
  
monomio: $a_ix^i$  
  
### Operazioni  
  
$+$: è la classica somma termine a termine  
  
$$  
(\sum_{i=0}^n a_ix^i)+(\sum_{i=0}^m b_ix^i)=\sum_{i=0}^{max(n,m)}(a_i+b_i)x^i  
$$  
  
esempio:  
  
$$  
A:\mathbb{Z}_5\qquad ([3]x^2+[1]\cdot x-[2])+([4]x^3+[2]x^2-[1])=[4]x^3+[0]x^2+[1]x-[3]  
$$  
  
$\times$: è la classica moltiplicazione di polinomi  
  
$$  
(\sum_{i=0}^n a_ix^i)\cdot(\sum_{j=0}^m b_jx^j)=\sum_{k=0}^{n+m}c_kx^k\quad\text{con }c_k=\sum_{i+j=k}a_ib_j  
$$  
  
esempio:  
  
$$  
A:\mathbb{Z}_5\qquad ([3]x^2+[1]x-[2])\cdot([4]x^3+[2]x^2-[1])=[2]x^5+[1]x^4+[4]x^3+[4]x^2+[2]x+[2]  
$$  
  
#### Teorema di Ruffini  
  
Se $P(x)\in A[x]$ e $A$ campo.  
$a\in A$ è radice di $P(x)$ (cioè $P(a)=0$) $\iff (x-a)$ divide $P(x)$.  
  
*Esempio*  
$x-[2]$ divide $[\underset{\overset{||}{P(x)}}{3]x^3-[4]x+[3]}$ in $\mathbb{Z}$?  
  
$$  
P([2])=[3]\cdot[2]^3-[4]\cdot[2]+[3]=[24]-[8]+[3]=[19]\neq [0]  
$$  
  
no.  
  
# Matrici  
  
## Definizione  
  
Fissiamo $A$ anello.  
Una matrice di tipo $(m,n)$, con $m,n\in\mathbb{N}_{\geq1}$ è un una tabella  
  
$$  
M_{m,n}(A)=\{ \text{matrici } m\times n \text{ con elementi in } A\}  
$$  
  
m righe e n colonne.  
  
$$  
\begin{pmatrix}  
a_{11} & a_{12} & a_{13} & \dots & a_{1n}\\  
a_{21} & a_{22} & a_{23} & \dots & a_{2n}\\  
\vdots & \vdots & \vdots & \ddots & \vdots\\  
a_{m1} & a_{m2} & a_{m3} & \dots & a_{mn}  
\end{pmatrix}  
$$  
  
$$  
M(a_{1,j})_{i\leq m,j\leq n}  
$$  
  
$a_{a,j}$ sono i coefficienti/entrare di $M$.  
  
Vettore riga:   
  
$$  
(a_1,\dots,a_n)\quad n  
$$  
  
lunghezza del vettore  
  
Vettore colonna:  
  
$$  
\begin{pmatrix}  
a_1\\  
a_2\\  
\vdots\\  
a_n  
\end{pmatrix}  
\quad m  
$$  
  
$(m,n)$ è la dimensione della matrice; se $M$ è quadrata (cioè $m=n$) si dice di ordine $n$.  
  
$\begin{align}M_{m\times n}(A):=\\ M_{m,n}(A):=\end{align}$ insieme delle matrici di tipo $(m,n)$ con coefficienti in $A$.  
  
## Operazioni  
  
### Somma  
  
$$  
\begin{pmatrix}  
1 & 2\\  
-1 & 3  
\end{pmatrix}+  
\begin{pmatrix}  
1 & 2 & 7\\  
5 & 6 & 9  
\end{pmatrix}?  
$$  
  
non si può fare, dimensioni diverse.  
  
Somma è tra matrici della stessa dimensione.  
  
$$  
A,B\in M_{m\times n}(\mathbb{K})  
$$  
  
$$  
\begin{pmatrix}  
1 & 2 & 7\\  
5 & 6 & 9  
\end{pmatrix}+  
\begin{pmatrix}  
-1 & 3 & -1\\  
2 & 0 & -3  
\end{pmatrix}=  
\begin{pmatrix}  
0 & 5 & 6\\  
7 & 6 & 6  
\end{pmatrix}  
$$  
  
somma è posizione per posizione.  
  
#### Proprietà  
  
1. $A+B=B+A$ (commutativa) è possibile perché $\mathbb{K}$ è un anello.  
2. $(A+B)+C=A+(B+C)$ (associativa) è possibile perché $\mathbb{K}$ è un anello.  
3. Esiste l'elemento neutro $0$ tale che $A+0=A$ per ogni $A\in M_{m\times n}(\mathbb{K})$. $0$ è la matrice con tutti gli elementi uguali [](.md)a 0.  
4. Per ogni $A\in M_{m\times n}(\mathbb{K})$ esiste l'inverso $-A$ tale che $A+(-A)=0$. $-A$ si ottiene cambiando il segno a tutti gli elementi di $A$.  
  
### Trasposta  
  
$$  
A=\begin{pmatrix}  
1 & 2 & 3\\  
4 & 5 & 6  
\end{pmatrix}  
$$  
  
$$  
A^T=\begin{pmatrix}  
1 & 4\\  
2 & 5\\  
3 & 6  
\end{pmatrix}  
$$  
  
scambio righe con colonne. La prima riga di $A$ diventa la prima colonna di $A^T$ e così via.  
  
Se faccio due trasposte torno alla matrice di partenza:  
$$  
\begin{pmatrix}  
1 & 2 & 3\\  
4 & 5 & 6  
\end{pmatrix}^{T}=  
\begin{pmatrix}  
1 & 4\\  
2 & 5\\  
3 & 6  
\end{pmatrix}^{T}=  
\begin{pmatrix}  
1 & 2 & 3\\  
4 & 5 & 6  
\end{pmatrix}  
$$  
L'operazione di trasposizione è idempotente.  
  
Se $A\in M_{m\times n}(\mathbb{K})$ allora $A^T\in M_{n\times m}(\mathbb{K})$, mi manda da un spazio a un altro.  
L'unico caso in cui è interna è quando $m=n$.  
  
*Definizione*: $A$ è simmetrica se $A=A^T$.  
Esempio:  
$$  
\begin{pmatrix}  
1 & 2 & 3\\  
2 & 4 & 5\\  
3 & 5 & 6  
\end{pmatrix}^T=  
\begin{pmatrix}  
1 & 2 & 3\\  
2 & 4 & 5\\  
3 & 5 & 6  
\end{pmatrix}  
$$  
è simmetrica. Si specchia rispetto alla diagonale principale.  
  
### Prodotto  
  
#### Prodotto esterno  
  
$$  
A\in M_{m\times n}(\mathbb{K})\quad k=\Pi  
$$  
$$  
\Pi\cdot A=\Pi\begin{pmatrix} 1 & 3 & 7\\ -1 & 2 & 0 \end{pmatrix}= \begin{pmatrix} \Pi & 3\Pi & 7\Pi\\ -\Pi & 2\Pi & 0 \end{pmatrix}  
$$  
#### Prodotto interno  
$$  
v=(a_1\ \dots\ a_n)\quad w=\begin{pmatrix}b_1\\ \vdots\\ b_n\end{pmatrix}  
$$  
##### Prodotto tra vettori  
$$  
v\cdot w=\sum_{i=1}^n a_ib_i\in \mathbb{K}  
$$  
Esempio:  
$$  
v=(3)\quad w=(5)  
$$  
$$  
v\cdot w=3\cdot 5=15  
$$  
  
$$  
v=(3\ -1)\quad w=(5\ 3)  
$$  
$$  
v\cdot w=\sum^2_{i=1}a_1\cdot b_i=3\cdot 5 + (-1)\cdot 3=15-3=12  
$$  
  
$$  
v=(2\ 0\ -1)\quad w=(4\ 3\ 5)  
$$  
$$  
v\cdot w=2\cdot 4 + 0\cdot 3 + (-1)\cdot 5=8+0-5=3  
$$  
##### Prodotto tra matrici  
$$  
A\in M_{m\times n}(\mathbb{K})\quad B\in M_{l\times h}(\mathbb{K})  
$$  
$$  
A\cdot B\in M_{m\times h}(\mathbb{K})  
$$  
$$  
A=  
\begin{pmatrix}  
a_{11} & a_{12} & \dots & a_{1n}\\  
a_{21} & a_{22} & \dots & a_{2n}\\  
\vdots & \vdots & \ddots & \vdots\\  
a_{m1} & a_{m2} & \dots & a_{mn}  
\end{pmatrix}  
\quad  
B=  
\begin{pmatrix}  
b_{11} & b_{12} & \dots & b_{1p}\\  
b_{21} & b_{22} & \dots & b_{2p}\\  
\vdots & \vdots & \ddots & \vdots\\  
b_{n1} & b_{n2} & \dots & b_{np}  
\end{pmatrix}  
$$  
$$  
A\cdot B=  
\begin{pmatrix}  
c_{11} & c_{12} & \dots & c_{1p}\\  
c_{21} & c_{22} & \dots & c_{2p}\\  
\vdots & \vdots & \ddots & \vdots\\  
c_{m1} & c_{m2} & \dots & c_{mp}  
\end{pmatrix}  
$$  
con  
$$  
c_{ij}=\sum_{k=1}^n a_{ik}b_{kj}  
$$  
spiegato meglio: la riga $i$ di $A$ per la colonna $j$ di $B$.  
Ho bisogno che le colonne di $A$ siano tante quante le righe di $B$.  
$$  
n=l  
$$  
  
Esempio:  
$$  
A=  
\begin{pmatrix}  
1 & 2 & 3\\  
4 & 5 & 6  
\end{pmatrix}  
\quad  
B=  
\begin{pmatrix}  
7 & 8\\  
9 & 10\\  
11 & 12  
\end{pmatrix}  
$$  
$$  
A\cdot B=  
\begin{pmatrix}  
c_{11} & c_{12}\\  
c_{21} & c_{22}  
\end{pmatrix}  
$$  
con  
$$  
c_{11}=1\cdot 7 + 2\cdot 9 + 3\cdot 11=58  
$$  
$$  
c_{12}=1\cdot 8 + 2\cdot 10 + 3\cdot 12=64  
$$  
$$  
c_{21}=4\cdot 7 + 5\cdot 9 + 6\cdot 11=139  
$$  
$$  
c_{22}=4\cdot 8 + 5\cdot 10 + 6\cdot 12=154  
$$  
Prodotto tra matrici quadrate:  
$$  
A\in M_{n\times n}(\mathbb{K})\quad B\in M_{n\times n}(\mathbb{K})\Rightarrow A\cdot B\in M_{n\times n}(\mathbb{K})  
$$  
Esempio:  
$$  
A=  
\begin{pmatrix}  
1 & 2\\  
3 & 4  
\end{pmatrix}  
\quad  
B=  
\begin{pmatrix}  
5 & 6\\  
7 & 8  
\end{pmatrix}  
$$  
$$  
A\cdot B=  
\begin{pmatrix}  
1\cdot 5 + 2\cdot 7 & 1\cdot 6 + 2\cdot 8\\  
3\cdot 5 + 4\cdot 7 & 3\cdot 6 + 4\cdot 8  
\end{pmatrix}=  
\begin{pmatrix}  
19 & 22\\  
43 & 50  
\end{pmatrix}  
$$  
rimango nello stesso spazio.  
  
$A\cdot B$ ha senso, ma $B\cdot A$ solo se tra matrici quadrate, perché se non sono quadrate le dimensioni non combaciano.  
  
Il prodotto non è commutativo.  
$$  
A\cdot B\neq B\cdot A  
$$  
Esempio:  
$$  
A=  
\begin{pmatrix}  
1 & 2\\  
3 & 4  
\end{pmatrix}  
\quad  
B=  
\begin{pmatrix}  
5 & 6\\  
7 & 8  
\end{pmatrix}  
$$  
$$  
B\cdot A=  
\begin{pmatrix}  
5\cdot 1 + 6\cdot 3 & 5\cdot 2 + 6\cdot 4\\  
7\cdot 1 + 8\cdot 3 & 7\cdot 2 + 8\cdot 4  
\end{pmatrix}=  
\begin{pmatrix}  
23 & 34\\  
31 & 46  
\end{pmatrix}  
$$  
$$  
A\cdot B\neq B\cdot A  
$$  
  
  
###### Proprietà  
Date $A,B,C,D$ matrici compatibili per le operazioni:  
1. $A\cdot (B\cdot C)=(A\cdot B)\cdot C$ (associativa)  
2. $A\cdot (B+C)=A\cdot B + A\cdot C$ e $(A+B)\cdot C=A\cdot C + B\cdot C$ (distributiva)  
3. Esiste l'elemento neutro $I_n$ tale che $A\cdot I_n=A$ e $I_n\cdot A=A$ per ogni $A\in M_{n\times n}(\mathbb{K})$. $I_n=\begin{pmatrix}1 & 0 & \dots & 0\\0 & 1 & \dots & 0\\ \vdots & \vdots & \ddots & \vdots\\0 & 0 & \dots & 1\end{pmatrix}$  
4. Se $A\in M_{m\times n}(\mathbb{K})$ e $B\in M_{n\times p}(\mathbb{K})$ allora $(A\cdot B)^T=B^T\cdot A^T$.  
  
## Sistemi di equazioni lineari (grado max 1)  
$$  
x_1,x_2,\dots,x_n\text{ variabili}  
$$  
Equazione lineare omogenea:  
$$  
a_1x_1 + a_2x_2 + \dots + a_nx_n = 0  
$$  
Equazione lineare non omogenea:  
$$  
a_1x_1 + a_2x_2 + \dots + a_nx_n = b  
$$  
Sistema di equazioni lineari:  
$$  
\begin{cases}  
a_{11}x_1 + a_{12}x_2 + \dots + a_{1n}x_n = b_1\\  
a_{21}x_1 + a_{22}x_2 + \dots + a_{2n}x_n = b_2\\  
\vdots\\  
a_{m1}x_1 + a_{m2}x_2 + \dots + a_{mn}x_n = b_m  
\end{cases}  
$$  
Sistema di $m$ equazioni in $n$ incognite.  
Gli $a_{ij}$ sono i coefficienti del sistema.  
$(b_1,b_2,\dots,b_m)$ è il vettore dei termini noti. Se tutti i $b_i=0$ il sistema è omogeneo, altrimenti non omogeneo.  
Una soluzione del sistema è una qualche $(x_1,x_2,\dots,x_n)$ che soddisfa tutte le equazioni del sistema.  
  
Esempio:   
$$  
\begin{cases}  
x+y=1\\   
x+2y=0  
\end{cases}  
\quad  
\begin{cases}  
x=2\\   
y=-1  
\end{cases}  
$$  
$$  
\begin{pmatrix}  
1 & 1\\  
1 & 2  
\end{pmatrix}  
\begin{pmatrix}  
x\\  
y  
\end{pmatrix}=  
\begin{pmatrix}  
1\\  
0  
\end{pmatrix}  
$$  
  
Come sono collegati i sistemi di equazioni lineari con le matrici?  
$$  
\begin{cases}  
a_{11}x_1 + a_{12}x_2 + \dots + a_{1n}x_n = b_1\\  
a_{21}x_1 + a_{22}x_2 + \dots + a_{2n}x_n = b_2\\  
\vdots\\  
a_{m1}x_1 + a_{m2}x_2 + \dots + a_{mn}x_n = b_m  
\end{cases}  
$$  
$$  
\begin{pmatrix}  
a_{11} & a_{12} & \dots & a_{1n}\\  
a_{21} & a_{22} & \dots & a_{2n}\\  
\vdots & \vdots & \ddots & \vdots\\  
a_{m1} & a_{m2} & \dots & a_{mn}  
\end{pmatrix}  
\cdot  
\begin{pmatrix}  
x_1\\  
x_2\\  
\vdots\\  
x_n  
\end{pmatrix}=  
\begin{pmatrix}  
b_1\\  
b_2\\  
\vdots\\  
b_m  
\end{pmatrix}  
$$  
  
> matrice coefficienti $\times$ vettore incognite $=$ vettore termini noti.  
  
$$  
[A\mid b]  
$$  
queste sono quelle da manipolare.