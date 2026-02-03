---
share: true
---
[Lezione 12: Slides](<Primo/Matematica I/Slides/L12 (06.11.2025).pdf>)  
  
# Induzione  
Sia $n_0$ numero naturale, $P(n)$ proprietà definita $\forall n\geq n_0$.  
Se:  
  
1. Vale $P(n_0)$  
2. Per ogni $k\geq n_0$, $P(k)\Rightarrow P(k+1)$   
  
Allora $P(n)$ vale per ogni $n\geq n_0$.  
  
**Esercizio**  
Sia $(u_n)$ sequenza definita così:  
  
1. $u_1=u_2=u_3=1$  
2. $\forall\space n\geq4\quad u_n=u_{n-1}+u_{n-2}+u_{n-3}$  
  
Dimostrare che  
$$  
\forall\space n\geq4\quad u_n<2^n  
$$  
$$  
P(n):u_n<2^n  
$$  
**Passo base:**  
$$  
P(4):\text{ controllo che }u_4<2^4  
$$  
$$  
\begin{align}  
u_4=u_3+u_2+u_1=1+1+1=3&\\  
2^4=16&  
\end{align}  
\space>3<16:P(4)\text{ vale}  
$$  
**Passo induttivo**  
*Ipotesi*: $\forall\space k$ con $4\leq k\leq n\quad u_k<2^k$  
*Tesi*: $P(n+1)$, cioè $u_{n+1}<2^{n+1}$  
  
 **Svolgimento**  
 Per definizione della successione:  
$$  
 u_{n+1}=u_n+u_{n-1}+u_{n-2}  
$$  
Per ipotesi induttiva:  
$$  
u_n<2^n\quad u_{n-1}<2^{n-1}\quad u_{n-2}<2^{n-2}  
$$  
$$  
u_{n+1}<2^n+2^{n-1}+2^{n-2}=2^{n-2}(4+2+1)=7\cdot2^{n-2}  
$$  
$$  
7\cdot2^{n-2}<8\cdot2^{n-2}=2^{n+1}  
$$  
$$  
u_{n+1}<2^{n+1}\quad\blacksquare  
$$  
### Quanti numeri primi ci sono?  
  
**Dimostrazione**  
Quanti numeri primi ci sono? _infiniti_  
  
$$  
x=p_1\cdot...\cdot p_n+1  
$$  
  
$x$ è primo $=$ vorrebbe dire $x\in p$, ma $x>p_n$  
quindi c'è uno dei $p_i$ che lo divide  
  
$$  
p_i|x  
$$  
  
ma  
  
$$  
p_i|p_1\cdot...\cdot p_n  
$$  
  
$$  
x=p_i\quad p_i\cdot ...\cdot p_n=p_i\cdot t  
$$  
  
$$  
1=x-p_1\cdot...\cdot p_n=p_i(s-t)  
$$  
  
$p_1|1$: 1 non è diviso da numeri più grandi di 1.  
  
# Proprietà divisione  
  
Siano $a,b,c\in\mathbb{H} (\mathbb{Z}\text{ uguale})$  
  
1. Se $a|b$ e $b|c$ allora $a|c$  
  
**Dimostrazione**  
$b=ra\quad c=sb$  
$c=sra\quad\text{cioè}\quad c=(sr)a$  
  
*Esempio*  
$2|4$ e $4|8$ allora $2|8$  
  
2. Se $a|b$ e $a|c$ allora $a|(hb+kc)$ qualsiasi siano $h,k\in\mathbb{Z}$  
  
**Dimostrazione**  
$b=ra\quad c=sa$  
$$  
hb+kc=h(ra)+k(sa)=(hr+ks)a  
$$  
  
*Esempio*  
$3|6$ e $3|9$ allora $3|(2\cdot6+4\cdot9)$  
  
# Fattorizzazione come prodotto di numeri primi  
  
## Teorema fondamentale dell'aritmetica  
  
Ogni numero   
$$  
\begin{align}  
&n\in\mathbb{N},n\neq0,1\\  
&z\in\mathbb{Z},z\neq-1,0,1  
\end{align}  
$$  
può essere scritto come prodotto di numeri primi in modo essenzialmente unico, cioè se $n=p_1\cdot...\cdot p_s=q\cdot...\cdot q_t$ allora  
  
1. $s=t$  
2. a meno di riordinare $<\begin{align}&\text{caso }\mathbb{N}\space p_1=q_1,\dots,p_s=q_s\\&\text{caso }\mathbb{Z}\space p_1=\pm q_1,\dots,p_s=\pm q_s\end{align}$  
  
**Dimostrazione**  
Esistenza della fattorizzazione: induzione.  
  
Passo base: $n=2$  
Passo induttivo:  
  
- $P(n)$: "ogni numero fino ad n ha una fattorizzazione come prodotto di primi"  
- $P(n+1)$: "n+1 ha una fattorizzazione come prodotto di primi"  
  
$n+1$. Se $n+1$ è primo: fine.  
  
Altrimenti se $n+1$ non è primo $(n+1)=a\cdot b$  
  
$$  
\begin{align}  
a\text{ è un prodotto di primi}\\  
b\text{ è un prodotto di primi}  
\end{align}  
> n+1\text{ è un prodotto di primi}  
$$  
  
$$  
[60=\underset{2\cdot3}{6}\cdot\underset{2\cdot5}{10}=60=2\cdot3\cdot2\cdot5=2^2\cdot3\cdot5]  
$$  
  
**Unicità**  
$$  
n=p_1\cdot...\cdot p_s=q_1\cdot...\cdot q_t\Rightarrow  
\begin{align}  
1)& s=t\\  
2)&p_1=q_i\quad\forall\space i\leq t  
\end{align}  
$$  
Si suppone che uno stesso numero naturale n possa essere scritto come prodotto di numeri primi in due modi dove tutti i $p_i$ e i $q_j$ sono **numeri primi**.  
  
L’affermazione a destra dice che allora devono valere due cose:  
1. s = t  
    Cioè: il numero di fattori primi è lo stesso in entrambe le scomposizioni.  
2. $p_1 = q_i$ **per ogni** $i \le t$ (a meno dell’ordine)  
    Significa che i primi che compaiono sono gli stessi, eventualmente **in ordine diverso**. In modo più preciso: a ogni $p_k$ corrisponde un $q_j$ uguale, dopo aver riordinato i fattori.  
  
### Induzione su s  
  
$s=1\qquad n=p_1=q_1\cdot...\cdot q_t\leftrightarrow t=1,q_1=p_1$  
Passo induttivo:  
  
- vale $P(s)$ ipotesi  
- tesi $P(s+1)$  
  
$n=(p_1\cdot...\cdot p_s)\cdot(p_{s+1})=q_1\cdot\overset{(\space)}{...}\cdot q_t$  
$p_{s+1}\mid n$, quindi $p_{s+1}\mid q_1\cdot...\cdot q_t$, cioè $p_{s+1}\mid q_i$ per qualche $i\leq t$.  
$n/p_1=p_i1\cdot...\cdot p_{s}=q_1\cdot...\cdot q_{i-1}\cdot q_{i+1}\cdot...\cdot q_t$  
Per ipotesi induttiva $s=t-1\Rightarrow s+1=t$  
  
> **Corollario**  
> Se $n\in\mathbb{N},n$ si scrive in un modo unico nella forma $n=p_1^{\alpha_1}\cdot p_2^{\alpha_2}\cdot...\cdot p_k^{\alpha_k}$ con $p_1<p_2<...<p_k$ primi e $\alpha_i\in\mathbb{N},\alpha_i\neq0$.  
  
**Esempio**  
  
$$  
12=2^2\cdot 3^1  
$$  
  
$$  
210=2^1\cdot 3^1\cdot 5^1\cdot 7^1  
$$  
  
$$  
152=2^3\cdot 19^1  
$$  
  
#### Calcolo del M.C.D. e del m.c.m.  
  
30 e 12  
  
$$  
30 = 2^1\cdot 3^1\cdot 5^1  
$$  
  
$$  
12 = 2^2\cdot 3^1  
$$  
  
$$  
MCD(30,12)=2^{min(1,2)}\cdot 3^{min(1,1)}=2^1\cdot 3^1=6  
$$  
  
$$  
mcm(30,12)=2^{max(1,2)}\cdot 3^{max(1,1)}\cdot 5^{max(1,0)}=2^2\cdot 3^1\cdot 5^1=60  
$$  
  
$$  
60\cdot 6=30\cdot 12  
$$  
  
$$  
p|a\quad p|b\quad\Rightarrow\quad p|(mcd(a,b))  
$$  
  
- MCD appaiono i primi che appaiono in entrambe le fattorizzazioni con esponente minore  
- mcm appaiono i primi che appaiono in almeno una delle fattorizzazioni con esponente maggiore  
- $MCD(a,b)\cdot mcm(a,b)=a\cdot b$  
  
**Esempi**  
  
$216, 720$  
  
$$  
216=2^3\cdot 3^3  
$$  
  
$$  
720=2^4\cdot 3^2\cdot 5^1  
$$  
  
$$  
MCD(216,720)=2^{min(3,4)}\cdot 3^{min(3,2)}=2^3\cdot 3^2=72  
$$  
  
$$  
mcm(216,720)=2^{max(3,4)}\cdot 3^{max(3,2)}\cdot 5^{max(0,1)}=2^4\cdot 3^3\cdot 5^1=2160  
$$  
  
$$  
\frac{216\cdot72}{MCD(216,720)}=mcm(216,720)  
$$  
  
$100,280$  
  
$$  
100=2^2\cdot 5^2  
$$  
  
$$  
280=2^3\cdot 5^1\cdot 7^1  
$$  
  
$$  
MCD(100,280)=2^{min(2,3)}\cdot 5^{min(2,1)}=2^2\cdot 5^1=20  
$$  
  
$$  
mcm(100,280)=2^{max(2,3)}\cdot 5^{max(2,1)}\cdot 7^{max(0,1)}=2^3\cdot 5^2\cdot 7^1=700  
$$  
  
$$  
\frac{100\cdot280}{MCD(100,280)}=mcm(100,280)  
$$  
  
---  
  
# Scrittura in base n  
  
> Scrivere un numero in una certa base significa rappresentarlo come somma di potenze di quella base.  
  
**Esemepi**  
  
$$  
13875_{10}=1\cdot10^4+3\cdot10^3+8\cdot10^2+7\cdot10^1+5\cdot10^0  
$$  
  
$$  
10010110_2=1\cdot2^7+0\cdot2^6+0\cdot2^5+1\cdot2^4+0\cdot2^3+1\cdot2^2+1\cdot2^1+0\cdot2^0=150_{10}  
$$  
  
## Teorema  
  
Sia $n\in\mathbb{N},n\geq2$ e siano $a_0,a_1,...,a_k\in\mathbb{N}$ tali che $0\leq a_i<n$ per ogni $i=0,1,...,k$. Allora esiste un unico numero $x\in\mathbb{N}$ tale che  
  
$$  
x=a_k\cdot n^k+a_{k-1}\cdot n^{k-1}+...+a_1\cdot n^1+a_0\cdot n^0  
$$  
  
**Esempi**  
  
$$  
n=7  
$$  
  
$$  
65_{10}=k_n\cdot7^k+...+k_1\cdot7^1+k_0\cdot7^0  
$$  
  
$$  
65=49+16  
$$  
  
$$  
65=7^2+2\cdot 7+2\rightarrow 122_7  
$$  
  
$$  
n=12  
$$  
  
$$  
65=5\cdot12^1+5\cdot12^0\rightarrow 55_{12}  
$$  
  
$$  
132=1\cdot12^2+1\cdot12^1+0\cdot12^0\rightarrow 110_{12}  
$$  
  
**Dimostrazione**  
  
Per induzione su $a$  
Passo base $a=0$  
Passo induttivo:  
  
**Esempio**  
Scrivere $3147$ in base $2$  
  
$$  
3147:2=1573\quad \text{resto }1  
$$  
  
$$  
1573:2=786\quad \text{resto }1  
$$  
  
$$  
786:2=393\quad \text{resto }0  
$$  
  
$$  
393:2=196\quad \text{resto }1  
$$  
  
$$  
196:2=98\quad \text{resto }0  
$$  
  
$$  
98:2=49\quad \text{resto }0  
$$  
  
$$  
49:2=24\quad \text{resto }1  
$$  
  
$$  
24:2=12\quad \text{resto }0  
$$  
  
$$  
12:2=6\quad \text{resto }0  
$$  
  
$$  
6:2=3\quad \text{resto }0  
$$  
  
$$  
3:2=1\quad \text{resto }1  
$$  
  
$$  
1:2=0\quad \text{resto }1  
$$  
  
Leggendo i resti dal basso verso l'alto:  
  
$$  
3147_{10}=110001000011_2  
$$  
  
## Cambi di base  
  
Scritto in base $n$ a scritto in base $m$.  
  
**Esempio**  
$(312)_5$ e lo voglio scrivere in base 2  
  
$$  
(312)_5=3\cdot5^2+1\cdot5^1+2\cdot5^0=75+5+2=82_{10}  
$$  
  
$82$ lo riscrivo in base 2  
  
## Prodotti  
  
$$  
(111)_2\cdot(1010)_2  
$$  
  
Scritto in colonna:  
  
```  
			1 1 1  
		x 1 0 1 0  
		__________  
			0 0 0 0  
		1 1 1  
	0 0 0 0  
	1 1 1  
	__________  
	1 0 0 0 1 1 0  
```  
  
# Congruenze in $\mathbb{Z}$  
  
**Definizione**  
Sia $n\in\mathbb{N},n\geq1$. Si dice che due interi $a,b\in\mathbb{Z}$ sono congruenti modulo $n$ se $n|(a-b)$ e si scrive  
  
$$  
a\equiv b\mod n  
$$  
  
cioè se il resto della divisione di $a$ per $n$ è uguale al resto della divisione di $b$ per $n$.  
  
**Esempio**  
$\mod 2$  
  
$$  
a\equiv b\mod 2  
$$  
se e solo se $a$ e $b$ sono entrambi pari o entrambi dispari.  
  
**Equivalentemente**  
$$  
a\equiv b\mod n  
$$  
$$  
b-a=kn  
$$  
$a$ è congruo a $b$ modulo $n$ se e solo se la differenza $b-a$ è divisibile per $n$, cioè $n|(a,b)$.  
  
**Esempio**  
$$  
137\equiv113\mod 4  
$$  
$$  
113-137=-24  
$$  
$$  
4|-24  
$$  
## Teorema  
La relazione di congruenza modulo $n$ è una relazione di equivalenza qualsiasi sia $n\in\mathbb{N}$.  
  
**Dimostrazione**  
Riflessiva:  
$$  
\forall a\in\mathbb{Z}\quad a-a=0\quad n|0  
$$  
Simmetrica:  
$$  
\forall a,b\in\mathbb{Z}\quad a\equiv b\mod n\Rightarrow n|(b-a)\Rightarrow n|(a-b)\Rightarrow b\equiv a\mod n  
$$  
Transitiva:  
$$  
\forall a,b,c\in\mathbb{Z}\quad a\equiv b\mod n\quad b\equiv c\mod n  
$$  
## Quante classi di equivalenza ci sono?  
  
La **classe di equivalenza di un numero** a (modulo n) è **l’insieme di tutti gli interi che sono congrui ad** a **modulo** n:  
$$  
[a]_n = \{x \in \mathbb{Z} \mid x \equiv a \pmod n\}  
$$  
Esempio con $n=5$:  
$$  
[2]_5 = \{\ldots,-8,-3,2,7,12,\ldots\}  
$$  
  
Ci sono esattamente $n$ classi di equivalenza modulo $n$.  
$$  
[0]_n, [1]_n, [2]_n, ..., [n-1]_n  
$$  
0 rappresenta $[0]_n=\{x\in\mathbb{Z}|x\equiv0\mod n\}$  
1 rappresenta $[1]_n=\{x\in\mathbb{Z}|x\equiv1\mod n\}$  
  
$$  
[n]_n=[0]_n=[-n]_n=[2n]_n=[-171n]_n  
$$  
$$  
\mathbb{Z}\rightarrow\mathbb{Z}/n\mathbb{Z}=\{[0]_n,[1]_n,...,[n-1]_n\}  
$$  
Somme e prodotti in un modo "ovvio".  
  
  
  
