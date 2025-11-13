---
share: true
---
  
```table-of-contents  
  
```  
  
# Congruenze  
  
**Congruenze**: fissato $n\in\mathbb{N}$, dati $a,b\in\mathbb{Z}$ diciamo che $a\equiv b\mod n$ se $a$ e $b$ lasciano lo stesso resto nella divisione per $n$.  
i.e. $a-b$ sia diviso da $n$  
  
_Fatto 1_: $\mod n$ è una relazione di equivalenza  
_Fatto 2_: $[0]_n$, $[1]_n$, ..., $[n-1]_n$ sono i rappresentanti delle classi di equivalenza di $\mod n$  
_Fatto 3_: $\mathbb{Z}/\mathbb{Z}_n = \{[0]_n, [1]_n, ..., [n-1]_n\}$ è l'insieme quoziente di $\mathbb{Z}$ rispetto a $\mod n$  
  
## Somma e prodotto  
  
### Definizione  
  
Fissiamo $n$, dati qualsiasi $a,b\in\mathbb{Z}$, poniamo:  
  
$$  
[a]_n + [b]_n = [a+b]_n\quad\quad \text{es. } [2]_5 + [4]_5 = [6]_5  
$$  
  
$$  
[a]_n \cdot [b]_n = [a \cdot b]_n\quad\quad \text{es. } [2]_5 \cdot [4]_5 = [8]_5  
$$  
  
### Proprietà  
  
1. Le operazioni sono _ben definite_, cioè indipendenti dai rappresentanti scelti.  
   Prendo $a'\equiv a\mod n$ e $b'\equiv b\mod n$, allora:  
  
$$  
\begin{cases}  
a' + b' \equiv a + b \mod n \\  
a' \cdot b' \equiv a \cdot b \mod n  
\end{cases}  
$$  
  
$$  
a'\equiv a\mod n \implies n\mid (a'-a) \implies a' = a + k n, k\in\mathbb{Z}  
$$  
  
$$  
b'\equiv b\mod n \implies n\mid (b'-b) \implies b' = b + h n, h\in\mathbb{Z}  
$$  
  
$$  
a'+b'=a+b+(k+h)n \implies n\mid (a'+b'-(a+b)) \implies a'+b'\equiv a+b\mod n)  
$$  
  
2. _Elementi neutri_  
  
$$  
[0]_n \text{ per la somma}\quad \quad  
[1]_n \text{ per il prodotto}  
$$  
  
3. _Commutativa_  
  
$$  
[a]_n + [b]_n = [b]_n + [a]_n  
$$  
  
$$  
[a]_n \cdot [b]_n = [b]_n \cdot [a]_n  
$$  
  
4. _Distributiva_  
  
$$  
([a]_n + [b]_n) \cdot [c]_n = [a]_n \cdot [c]_n + [b]_n \cdot [c]_n  
$$  
  
5. _Inverso_  
  
$$  
[a]_n\text{ il suo inverso è }[-a]_n  
$$  
  
$$  
[a]_n\text{ rispetto al }\cdot?  
$$  
  
Esempio:  
  
$$  
[0]_n\text{ non ha mai l'inverso}  
$$  
  
$$  
[1]_n\text{ ha sempre }[1]_n\text{ come inverso}  
$$  
  
$$  
[n-1]=[-1]_n\text{ ha sempre }[-1]_n\text{ come inverso}  
$$  
  
$$  
[2]_n\quad  
\begin{align}  
n=2 &\Rightarrow [2]_2=[0]_2\text{ non ha inverso}\\  
n=3 &\Rightarrow [2]_3\text{ ha come inverso }[-1]_3\\  
n=4 &\Rightarrow [2]_4\text{ non ha inverso}\\  
n=5 &\Rightarrow [2]_5\text{ ha come inverso }[3]_5\\  
\end{align}  
$$  
  
_Ne deduciamo:_  
  
$$  
[2]_{2n}\text{ non ha inverso}\qquad [2]_{2n+1}\text{ ha inverso}  
$$  
  
Se $a$ ha un inverso modulo $n$ sto cercando $b$ per cuoi $a\cdot b\equiv 1\mod n$, cioè deve esistere $k\in\mathbb{Z}$ tale che  
  
$$  
a\cdot b + k n = 1\rightarrow\text{identità di Bezout}  
$$  
  
_Proposizione_: $a$ ha un inverso $\mod n$ se e solo se $(a,n)=1$.  
$a=3, n=15\rightarrow (3,15)=3\neq 1$ non ha inverso  
$a=3, n=17\rightarrow (3,17)=1$ ha inverso  
  
_Esempio_  
Inverso di $[7]_{13}$ in $\mathbb{Z}/\mathbb{Z}_{13}$:  
  
$$  
7\cdot b+13\cdot k=1  
$$  
  
Usiamo l'algoritmo di Euclide esteso:  
  
$$  
13 = 1\cdot 7 + 6  
$$  
  
$$  
7 = 1\cdot 6 + 1  
$$  
  
$$  
6 = 6\cdot 1 + 0  
$$  
  
Risalendo:  
  
$$  
1 = 7 - 1\cdot 6  
$$  
  
$$  
= 7 - 1\cdot (13 - 1\cdot 7)  
$$  
  
$$  
= 2\cdot 7 - 1\cdot 13  
$$  
  
Quindi $b=2$ è l'inverso di $7$ modulo $13$.  
  
_Osservazione_  
$n$ è primo se e solo se ogni $a\in\{1,2,...,n-1\}$ (tutte le classi tranne $[0]_n$) ha un inverso modulo $n$. Quindi se ogni $a$ è relativamente primo a $n$.  
  
es. $n=7$ primo, ogni $a\in\{1,2,3,4,5,6\}$ ha inverso modulo $7$. Simile ai razionali.  
  
## Congruenze lineari  
  
_Equazioni lineari_: dati $a,b\in\mathbb{Q}\quad ax=b$ trovami $x$.  
  
_Congruenze lineari_: dati $a,b\in\mathbb{Z}\quad [a]_n \cdot [x]_n = [b]_n$ trovami $[x]_n$.  
  
### Problema 1  
  
$a$ ce l'ha un inverso?  
Se sì, moltiplico entrambi i membri per l'inverso di $a$ e ottengo:  
  
_Esempio_:  
  
$$  
2x\equiv39\mod7\qquad (2,7)=1  
$$  
  
$$  
2^{-1}\equiv4\mod7  
$$  
  
$$  
4\cdot2x\equiv4\cdot39\mod7  
$$  
  
$$  
x=4\cdot39=156\equiv2\mod7  
$$  
  
### Problema 2  
  
E se $a$ non ha un inverso?  
Dipende.  
  
$$  
2x\equiv b\mod 4?\quad  
\begin{align}  
b=0 &\Rightarrow 2x\equiv0\mod4\quad x=0,2\\  
b=1 &\Rightarrow 2x\equiv1\mod4\quad \text{nessuna soluzione}\\  
b=2 &\Rightarrow 2x\equiv2\mod4\quad x=1,3\\  
b=3 &\Rightarrow 2x\equiv3\mod4\quad \text{nessuna soluzione}\\  
\end{align}  
$$  
  
$$  
ax\equiv1\mod n\qquad ax\equiv b\mod n  
$$  
  
_Proposizione_:  
Sia $d=(a,n)$.  
La congruenza $ax\equiv b\mod n$ ha soluzioni se e solo se $d\mid b$.  
  
$$  
3x\equiv1\mod6\quad (3,6)=3\nmid1\quad\text{nessuna soluzione}  
$$  
  
$$  
3x\equiv2\mod6\quad (3,6)=3\nmid2\quad\text{nessuna soluzione}  
$$  
  
$$  
3x\equiv3\mod6\quad (3,6)=3\mid3\quad\text{soluzioni}  
$$  
  
_Proposizione_:  
Se $ax\equiv b\mod n$ ha soluzioni e $d=(a,n)$, allora tutte e sole le altre soluzioni sono nella forma  
  
$$  
y_0=x_0+kn_0  
$$  
  
Dove $n_0=n/d$ e $k\in\mathbb{Z}$.  
  
$$  
\text{es. } 3x\equiv b\mod6\quad d=3\quad  
\begin{align}  
\text{domanda 1 }:&\text{ ha soluzione }\Leftrightarrow 3\mid b\\  
\text{domanda 2 }:&\text{ quante soluzioni? In }\mathbb{Z}/6\mathbb{Z}\text{ ce ne sono }d=3\\  
\end{align}  
$$  
  
_Osservazione_:  
Per quali $n\in\mathbb{N}$ se $ax\equiv b\mod n$ ha soluzione allora ha solo una soluzione di $\mathbb{Z}/n\mathbb{Z}$?  
Sono quelli per cui $(a,n)=1$.  
Se $n$ é primo e $a\neq[0]$, $ax\equiv b\mod n$ ha sempre una soluzione unica in $\mathbb{Z}/n\mathbb{Z}$.  
  
_Proposizione_  
  
1. Se $(c,n)=1$, allora $a\equiv b\mod n \Leftrightarrow ac\equiv bc\mod n$  
2. Se $ka\equiv kb\mod kn$ allora $a\equiv b\mod n$  
  
> $ax\equiv\mod n$ > _modo generale_: Bezout  
> _modo due_: se $n$ è piccolo (o altri motivi speciali) si trova a occhio  
> _modo tre_: $ax\equiv b$ ha soluzione in $\mathbb{Z}$. Se ha soluzione $x$ in $\mathbb{Z}$, allora $[x]_n$ é soluzione in $\mathbb{Z}/\mathbb{Z}$ qualsiasi sia $n$.  
  
_Esempi_:  
1  
  
$$  
7x\equiv-6\mod5\qquad(5,7)\mid(-6)  
$$  
  
$$  
2x\equiv4\mod6\qquad2x=4\qquad x=2\in\mathbb{Z}  
$$  
  
$$  
\begin{align}  
[2]_5\quad&\text{in }\mathbb{Z}/5\mathbb{Z}:[2]_5\\  
&\text{in }\mathbb{Z}:x\equiv2\mod5,\space x=2+5k,\space k\in\mathbb{Z}\\  
\end{align}  
$$  
  
2  
  
$$  
6x\equiv 12\mod15\qquad(6,15)=3\mid12\qquad x_0+15k=x_0+5\cdot3k\qquad k\in\mathbb{Z}  
$$  
  
$$  
x=2\qquad [2],[7],[12]\text{ in }\mathbb{Z}/15\mathbb{Z}  
$$  
  
$$  
x\in\mathbb{Z}\quad6x\equiv13\mod15\qquad(6,15)=3\nmid13\quad\text{nessuna soluzione}  
$$  
  
## Sistemi di congruenze lineari  
  
$$  
\begin{cases}  
a_1 x\equiv b_1\mod n_1\\  
\vdots\\  
a_r x\equiv b_r\mod n_r  
\end{cases}  
$$  
  
$$  
\begin{cases}  
2x\equiv3\mod5\\  
-x\equiv7\mod10  
\end{cases}  
$$  
  
oppure  
  
$$  
\begin{cases}  
2x\equiv3\mod5\\  
-x\equiv7\mod11  
\end{cases}  
$$  
  
### Teorema cinese del resto  
  
Siano $n_1,\dots,n_r\in\mathbb{N}$ a due a due coprimi.  
es.  
  
$$  
\begin{cases}  
n_1=4\\  
n_2=5\\  
n_3=6  
\end{cases}  
\quad  
\text{no}\qquad  
\begin{cases}  
n_1=8\\  
n_2=5\\  
n_3=21  
\end{cases}  
\quad\text{sì}  
$$  
  
Siano $b_1,\dots,b_r\in\mathbb{Z}$ allora  
  
1. il sistema $\begin{cases}x\equiv b_1\mod n_1\\ \vdots\\ x\equiv b_r\mod n_r\end{cases}$ ha soluzione $\exists c\in\mathbb{Z}\mid$ sostituito in tutte le congruenze risolve  
2. tutte le soluzioni sono della forma $c+kN$ con $k\in\mathbb{Z}$ e $N=n_1 n_2 \cdots n_r$, cioè la soluzione $[c]_{n_1}\cdot...\cdot_{n_r}$  
  
#### Osservazione 1  
  
$$  
\begin{cases}  
x\equiv3\mod8\\  
x\equiv-1\mod5\\  
x\equiv27\mod21  
\end{cases}  
$$  
  
_Fatto 1:_ una soluzione c'è perché i moduli sono a due a due primi.  
_Fatto2:_ se trovi una soluzione $c$ tutte le altre sono della forma $c+k\cdot 8\cdot 5\cdot 21=c+840k$  
  
#### Osservazione 2  
  
$$  
\begin{cases}  
2x\equiv7\mod8\\  
3x\equiv-5\mod3  
\end{cases}  
\quad\text{ non posso usare il TCR}  
$$  
  
se invece ho  
  
$$  
\begin{cases}  
2x\equiv3\mod5\\  
3x\equiv4\mod2  
\end{cases}  
\quad\rightarrow\quad  
\begin{cases}  
x\equiv4\mod5\\  
x\equiv0\mod2  
\end{cases}  
\quad\leftarrow[4]_{10}  
$$  
  
#### Osservazione 3  
  
$$  
x\equiv44\mod55\quad\Longleftrightarrow  
\quad  
\begin{cases}  
x\equiv44\mod5\\  
x\equiv44\mod11  
\end{cases}  
$$  
  
questo perché $55=5\cdot11$ e $5,11$ sono coprimi.  
  
$$  
x\equiv13\mod12\quad\Longleftrightarrow  
\quad  
\begin{cases}  
x\equiv13\mod3\\  
x\equiv13\mod4  
\end{cases}  
$$  
  
questo perché $12=3\cdot4$ e $3,4$ sono coprimi.  
  
#### Dimostrazione  
  
_Passo 1:_ risolvo indipendentemente le congruenze, per $i=1,\dots,r$  
  
$$  
N_1y_i\equiv1\mod n_i\text{, dove } N_i=\prod^r_{j=1,j\neq i} n_j  
$$  
  
_Esempio:_  
  
$$  
\begin{cases}  
x\equiv3\mod8\quad b_1=3,n_1=8\\  
x\equiv-1\mod5\quad b_2=-1,n_2=5\\  
x\equiv27\mod21\quad b_3=27,n_3=21  
\end{cases}  
$$  
  
$$  
N_1y_1\equiv1\mod n_1\quad N_2y_2\equiv1\mod n_2\quad N_3y_3\equiv1\mod n_3  
$$  
  
$$  
N_1=5\cdot21=105\quad N_2=8\cdot21=168\quad N_3=8\cdot5=40  
$$  
  
$$  
105y_1\equiv1\mod8\quad 168y_2\equiv1\mod5\quad 40y_3\equiv1\mod21  
$$  
  
$$  
y_1\equiv1\mod8\quad y_2\equiv3\mod5\quad y_3\equiv16\mod21  
$$  
  
_Passo 2_  
Pongo  
  
$$  
c=\sum^r_{i=1} b_i N_i y_i  
$$  
  
$$  
c\mod n_1?\quad c=b_1 N_1 y_1 + \sum^r_{i=2} b_i N_i y_i \equiv b_1\cdot 1 + 0 \equiv b_1\mod n_1  
$$  
  
#### Esempi  
  
1  
  
$$  
\begin{cases}  
x\equiv1\mod3\\  
x\equiv-3\mod7  
\end{cases}  
\quad\text{la soluzione è}\mod22  
$$  
  
$$  
x\equiv4\mod21  
$$  
  
$$  
b_1=1,n_1=3,N_1=7\rightarrow 7y_1\equiv1\mod3\rightarrow y_1\equiv1\mod3  
$$  
  
$$  
b_2=-3,n_2=7,N_2=3\rightarrow 3y_2\equiv1\mod7\rightarrow y_2\equiv5\mod7  
$$  
  
L'algoritmo:  
  
$$  
c=b_11 N_1 y_1 + b_2 N_2 y_2 = 1\cdot7\cdot1 + (-3)\cdot3\cdot5 = 7 - 45 = -38  
$$  
  
$$  
[-38]_{21} = [4]_{21}  
$$  
  
2  
  
$$  
\begin{cases}  
x\equiv1\mod2\\  
x\equiv2\mod15\\  
x\equiv3\mod7  
\end{cases}  
\begin{align}  
\qquad  
&(2,15)=1\\  
&(2,7)=1\\  
&(15,7)=1  
\end{align}  
\qquad  
[c]_{2\cdot15\cdot7}=[c]_{210}  
$$  
  
Passo 1  
  
$$  
\begin{align}  
&b_1,n_1=2,N_1=15\cdot7=195\\  
&b_2,n_2=15,N_2=2\cdot7=14\\  
&b_3,n_3=7,N_3=2\cdot15=30  
\end{align}  
$$  
  
$$  
\begin{align}  
&N_1y_1\equiv1\mod n_1\qquad &N_2y_2\equiv1\mod n_2\qquad &N_3y_3\equiv1\mod n_3\\  
&195y_1\equiv1\mod2\qquad &14y_2\equiv1\mod15\qquad &30y_3\equiv1\mod7\\  
&y_1\equiv1\mod2\qquad &14y_2\equiv1\mod15\qquad &2y_3\equiv1\mod7\\  
&\qquad &y_2\equiv11\mod15\qquad &y_3\equiv4\mod7  
\end{align}  
$$  
  
$$  
c==b_1 N_1 y_1 + b_2 N_2 y_2 + b_3 N_3 y_3b_1 N_1 y_1 + b_2 N_2 y_2 + b_3 N_3 y_3= 1\cdot195\cdot1 + 2\cdot14\cdot11 + 3\cdot30\cdot4=195 + 308 + 360 = 863  
$$  
  
$$  
[c]_{210} = [33]_{210}  
$$  
  
### Moduli non relativamente primi  
  
$$  
\begin{cases}  
x\equiv1\mod6\\  
x\equiv1\mod10  
\end{cases}  
\quad 1\in\mathbb{Z}\text{ risolve}  
$$  
  
$$  
\begin{cases}  
x\equiv1\mod2\\  
x\equiv0\mod2  
\end{cases}  
\quad  
\begin{cases}  
x\equiv1\mod6\\  
x\equiv0\mod10  
\end{cases}  
\quad  
\begin{cases}  
x\equiv1\mod3\\  
x\equiv1\mod2\\  
x\equiv0\mod2  
\end{cases}  
\quad\text{nessuna soluzione}  
$$  
  
#### Teorema cinese del resto generalizzato  
  
Il sistema $\begin{cases}x\equiv b_1\mod n_1\\ \vdots\\ x\equiv b_r\mod n_r\end{cases}$ ha soluzione se e solo se per ogni coppia $1,j\leq r$ che $MCD(n_i,n_j)\mid(b_i-b_j)$. Se solo due equazioni si parlano, anche i $b_i$ si devono parlare.  
  
Se ho una soluzione $c_1$, le altee sono della forma $c_1 + k N$, con $N=MCM(n_1,n_2,\dots,n_r)$.  
  
_Esempio_  
  
$$  
\begin{cases}  
x\equiv5\mod15\\  
x\equiv2\mod6\\  
x\equiv4\mod8  
\end{cases}  
\quad  
\begin{align}  
MCD(15,6)=3 &\mid (5-2)=3\\  
MCD(15,8)=1 &\mid (5-4)=1\\  
MCD(6,8)=2 &\nmid (2-4)=-2  
\end{align}  
$$  
  
le soluzioni sono $\mod 120=MCM(15,6,8)$.  
  
Spezzo le equazioni  
$$  
\begin{cases}  
x\equiv5\mod15\\  
x\equiv2\mod6\\  
x\equiv4\mod8  
\end{cases}  
\quad  
\Longleftrightarrow  
\quad  
\begin{cases}  
x\equiv5\mod3\\  
x\equiv5\mod5\\  
x\equiv0\mod2\\  
x\equiv2\mod3\\  
x\equiv4\mod8  
\end{cases}  
$$  
La prima e la quarta sono la stessa, quindi tolgo la quarta. Stessa cosa per la terza e la quinta.  
$$  
\begin{cases}  
x\equiv5\mod5\\  
x\equiv2\mod3\\  
x\equiv4\mod8  
\end{cases}  
$$  
In generale:  
$$  
x\equiv b\mod MCD(p_1^{d_1},p_2^{d_2}\dots p_k^{d_k})\quad\Longleftrightarrow\quad  
\begin{cases}  
x\equiv b\mod p_1^{d_1}\\  
x\equiv b\mod p_2^{d_2}\\  
\vdots\\  
x\equiv b\mod p_k^{d_k}  
\end{cases}  
$$  
