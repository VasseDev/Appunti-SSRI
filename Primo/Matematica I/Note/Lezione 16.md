---
share: true
---
[Lezione 16: Slides](<Primo/Matematica I/Slides/L16 (18.11.2025).pdf>)  
  
# Esercizi su congruenze lineari  
Dati  
$$  
a,b\in\mathbb{Z}\quad\text{e}\quad n\in\mathbb{N}, n>0  
$$  
vogliamo risolvere  
$$  
ax\equiv b\pmod n  
$$  
  
> **Osservazione**  
> Esiste una soluzione $x\in\mathbb{Z}$  
> $\iff[a]_n[x]_n=[b]_n\quad\text{in}\mathbb{Z}_n$  
> $\iff[ax-b]_n=[0]_n$  
> $\iff ax-b=hn\quad\text{per qualche }h\in\mathbb{Z}$  
> $\iff ax=b+hn\quad\text{per qualche }h\in\mathbb{Z}$  
> $\iff ax-hn=b\quad\text{per qualche }h\in\mathbb{Z}$  
> $\iff MCD(a,n)|b$  
  
## A cosa serve risolvere le congruenze lineari?  
  
**Esempio classico**  
Il 1° novembre 2012 cadeva di giovedì. In quale giorno della settimana cade il 1° novembre 2015?  
  
1. Non ci sono anni bisestili  
2. Giovedì è il 4° giorno della settimana  
3. Passano 3 anni $= 3\cdot365$ giorni $= 1095$ giorni  
  
$$  
[x]=\text{ giorno della settimana di 1° novembre 2015}  
$$  
$$  
[x]\in\mathbb{Z}_7=\{\underset{\text{lun}}{[0]},\underset{\text{mar}}{[1]},\underset{\text{mer}}{[2]},\underset{\text{gio}}{[3]},\underset{\text{ven}}{[4]},\underset{\text{sab}}{[5]},\underset{\text{dom}}{[6]}\}  
$$  
$$  
\begin{align}  
[x]_7&=[3]_7+[3\cdot365]_7\\  
&=[3]_7+[3]_7\cdot[1]_7\\  
&=[3]_7+[3]_7[365-350]_7\\  
&=[3]_7+[3]_7[15]_7\\  
&=[3]_7+[3]_7\\  
&=[6]_7  
\end{align}  
$$  
  
Quindi è domenica.  
  
## Ricordiamo le equazioni diofantee  
  
$$  
ax+by=c\qquad a,b,c\in\mathbb{Z}  
$$  
$$  
x,y\in\mathbb{Z}  
$$  
Ammette soluzione $\iff MCD(a,b)|c$.  
Se $(x_0,y_0)$ è una soluzione particolare, tutte le soluzioni sono della forma  
$$  
\begin{cases}  
x=x_0-\frac{b}{d}h\\  
y=y_0+\frac{a}{d}h  
\end{cases}  
\quad h\in\mathbb{Z}\quad d=MCD(a,b)  
$$  
  
### Teorema  
  
$$  
ax\equiv b\pmod n  
$$  
$$  
d=(a,n)  
$$  
  
Ammette soluzione $\iff d|b$.  
  
In questo caso, sia $x_0$ una soluzione particolare, tutte le soluzioni sono della forma  
$$  
x=x_0+\frac{n}{d}k\qquad k\in\mathbb{Z}  
$$  
di queste soluzioni  
$$  
x_0,x_0+\frac{n}{d},x_0+2\frac{n}{d},\ldots,x_0+(d-1)\frac{n}{d}  
$$  
non sono congruenti tra loro.  
  
Ogni altra soluzione è congruente a una di queste.  
  
**Esempi**  
  
A)  
$$  
x\equiv1\pmod 3  
$$  
scrivere tutte le soluzioni:  
$$  
x=1+3k\quad k\in\mathbb{Z}  
$$  
  
B)  
$$  
b\in\mathbb{Z}\qquad x\equiv b\pmod 3  
$$  
le soluzioni sono:  
$$  
x=b+3k\quad k\in\mathbb{Z}  
$$  
  
C)  
$$  
3x\equiv5\pmod 4  
$$  
 Mi serve trovare l'inverso della classe $[3]_4$.  
 Cioè trovare $[y]_4$ tale che  
$$  
[3]_4[y]_4=[1]_4  
$$  
Poiché $MCD(3,4)=1$ l'inverso esiste. Usando Bézout:  
$$  
3(3)-4(2)=1  
$$  
Quindi $[y]_4=[3]_4$.  
Infatti  
$$  
[3]_4[3]_4=[9]_4=[1]_4  
$$  
Ritorniamo alla congruenza:  
$$  
3\cdot3x\equiv3\cdot5\pmod 4  
$$  
$$  
x\equiv15\pmod 4  
$$  
Semplifico classe 15:  
$$  
x\equiv3\pmod 4  
$$  
Ammette soluzione poiché $(3,4)=1|3$.  
$$  
x=3+4k\quad k\in\mathbb{Z}  
$$  
  
D)  
$$  
3x\equiv9\pmod{6}  
$$  
Test: $(3,6)=3|9$ quindi ammette soluzione.  
Problema: $3$ non è invertibile in $\mathbb{Z}_6$.  
Motivo: $(3,6)=3\neq1$.  
Più concretamente sappiamo:  
$$  
[3]_6\cdot[2]_6=[0]_6  
$$  
Se $[3]_6$ fosse invertibile, moltiplicando entrambi i membri per l'inverso si avrebbe:  
$$  
[y]6\cdot[3]_6\cdot[2]_6=[y]_6\cdot[0]_6  
$$  
$$  
[2]_6=[0]_6  
$$  
impossibile.  
Ritorniamo alla congruenza:  
$$  
3x\equiv9\pmod{6}  
$$  
Divido tutto per $3$:  
$$  
x\equiv3\pmod{2}  
$$  
Infatti vale il lemma:  
se  
$$  
a\cdot c\equiv b\cdot c\pmod{n\cdot c}  
$$  
allora  
$$  
a\equiv b\pmod n  
$$  
Le soluzioni sono:  
$$  
x\equiv 1\pmod 2\longrightarrow x=1+2k\quad k\in\mathbb{Z}  
$$  
  
E)  
$$  
6x\equiv 8\pmod 9  
$$  
Test: $(6,9)=3\nmid8$ quindi non ammette soluzione.  
  
## Sistemi  
### Teorema cinese dei resti  
  
$$  
\begin{cases}  
x\equiv b_1\pmod{n_1}\\  
x\equiv b_2\pmod{n_2}\\  
\vdots\\  
x\equiv b_r\pmod{n_r}  
\end{cases}  
$$  
  
Se $MCD(n_i,n_j)=1$ per ogni $i\neq j$ allora il sistema ammette soluzione e se $c$ è una soluzione, tutte le altre sono  
  
$$  
x=c+kN\quad k\in\mathbb{Z}\quad N=n_1 n_2 \cdots n_r  
$$  
  
> **Osservazione**  
> Il teorema cinese dei resti fornisce una condizione *sufficiente*, ma *non necessaria* per l'esistenza di una soluzione.  
  
**Esempio + algoritmo**  
  
$$  
\begin{cases}  
x\equiv 2\pmod 3\\  
x\equiv 3\pmod 5\\  
\end{cases}  
\qquad  
N_i=\prod_{j\neq i}^rn_j=n_1 n_2 \cdots n_{i-1} n_{i+1} \cdots n_r  
$$  
  
Ammette soluzione?  
  
$$  
(3,5)=1\Longrightarrow\text{TCR assicura una soluzione}  
$$  
  
*Algoritmo:*  
  
$$  
\begin{align}  
b_1=2,\qquad n_1=3,\qquad N_1=5\\  
b_2=3,\qquad n_2=5,\qquad N_2=3  
\end{align}  
$$  
  
Andiamo a trovare una singola soluzione delle seguenti nuove congruenze:  
  
$$  
\begin{array}{c c c \qquad c c c}  
N_1y_1 & \equiv & 1 \pmod{n_1} & N_2y_2 & \equiv & 1 \pmod{n_2} \\  
       & \downarrow &          &        & \downarrow &          \\  
5y_1  & \equiv & 1 \pmod{3}   & 3y_2   & \equiv & 1 \pmod{5}   \\  
       & \downarrow &          &        & \downarrow &          \\  
2y_1  & \equiv & 1 \pmod{3}   & 3y_2   & \equiv & 1 \pmod{5}   \\  
       & \downarrow &          &        & \downarrow &          \\  
y_1   & \equiv & 2 \pmod{3}   & y_2    & \equiv & 2 \pmod{5}  
\end{array}  
$$  
  
Secondo step:  
  
$$  
c=\sum_{i=1}^r b_i N_i y_i=b_1 N_1 y_1 + b_2 N_2 y_2=2\cdot5\cdot2 + 3\cdot3\cdot2=20+18=38  
$$  
  
$c=38$ è una soluzione del sistema, le altre sono:  
  
$$  
x=38+15k\quad k\in\mathbb{Z}  
$$  
  
**Esempio senza TCR**  
  
$$  
\begin{cases}  
x\equiv3\pmod{10}\\  
x\equiv5\pmod 6  
\end{cases}  
\qquad(10,6)=2\neq1  
$$  
  
Non si può usare il TCR e non sappiamo a priori se una soluzione esiste.  
  
Lo risolviamo per sostituzione.  
Risolvo la 2a equazione:  
  
$$  
x=5+6k\quad k\in\mathbb{Z}  
$$  
  
Sostituisco nella 1a:  
  
$$  
5+6k\equiv3\pmod{10}  
$$  
$$  
6k\equiv-2\pmod{10}  
$$  
$$  
6k\equiv8\pmod{10}  
$$  
$$  
3k\equiv4\pmod{5}  
$$  
  
Test: $(3,5)=1|4$ quindi ammette soluzione.  
Trovo l'inverso di $[3]_5$:  
  
$$  
3(2)-5(1)=1  
$$  
  
Quindi l'inverso è $[2]_5$.  
Moltiplico entrambi i membri per $2$:  
  
$$  
k\equiv8\pmod{5}  
$$  
$$  
k\equiv3\pmod{5}  
$$  
  
Le soluzioni sono:  
  
$$  
k=3+5t\quad t\in\mathbb{Z}  
$$  
  
Ricordiamo che:  
  
$$  
x=5+6k=5+6(3+5t)=23+30t\quad t\in\mathbb{Z}  
$$