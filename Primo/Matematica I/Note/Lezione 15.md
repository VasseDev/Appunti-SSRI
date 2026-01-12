---
share: true
---
[Lezione 15: Slides](<Primo/Matematica I/Slides/L15 (14.11.2025).pdf>)  
  
# Insieme delle classi resto  
Vediamo il caso di $\mathbb{Z}_4$ per esempio  
$$  
\mathbb{Z}_4=\{[0],[1],[2],[3]\}  
$$  
Gli elementi di $\mathbb{Z}_4$ rappresentano i possibili resti della divisione per 4.  
Le classi ripartiscono $\mathbb{Z}$ in 4 sottoinsiemi:  
- $[0]=\{\text{interi che divisi per }4\text{ danno resto }0\}=\{4k\mid k\in\mathbb{Z}\}$  
- $[1]=\{\text{interi che divisi per }4\text{ danno resto }1\}=\{4k+1\mid k\in\mathbb{Z}\}$  
- $[2]=\{\text{interi che divisi per }4\text{ danno resto }2\}=\{4k+2\mid k\in\mathbb{Z}\}$  
- $[3]=\{\text{interi che divisi per }4\text{ danno resto }3\}=\{4k+3\mid k\in\mathbb{Z}\}$  
  
È consigliabile lavorare con i rappresentanti più semplici possibili, ovvero  
$$  
[0],[1],[2],[3]  
$$  
**Esempio**  
$$  
[42]=[2]  
$$  
## Operazioni  
$$  
[a]+[b]=[a+b]  
$$  
$$  
[a]\cdot[b]=[a\cdot b]  
$$  
Sono operazioni ben definite perché non dipendono dai rappresentanti.  
Questo viene dal fatto  
$$  
a_1\equiv a_2\mod n,\quad b_1\equiv b_2\mod n  
\begin{align}  
&\implies a_1+b_1\equiv a_2+b_2\mod n\\  
&\implies a_1\cdot b_1\equiv a_2\cdot b_2\mod n  
\end{align}  
$$  
cioè  
$$  
[a_1+b_1]_n=[a_2+b_2]_n  
$$  
$$  
[a_1\cdot b_1]_n=[a_2\cdot b_2]_n  
$$  
## Ricerca dell'elemento inverso  
$$  
[3]\in\mathbb{Z}_4  
$$  
Esiste una classe $[x]\in\mathbb{Z}_4$ tale che  
$$  
[3]\cdot[x]=[1]?  
$$  
In questo caso sì, prendo $[x]=[3]$ allora  
$$  
[3]\cdot[3]=[9]=[1]\in\mathbb{Z}_4  
$$  
Si dice che $[3]$ è invertibile con inversa $[3]$.  
  
> **Attenzione**  
> Non tutte le classi sono invertibili.  
  
> **Regola generale**  
> Una classe $[a]\neq[0]$ è invertibile in $\mathbb{Z}_n$ se e solo se $MCD(a,n)=1$.  
  
Infatti:  
$[a]$ invertibile in $\mathbb{Z}_n\begin{align}&\iff \exists\space[x]\text{ tale che }[a]\cdot[x]=[1]\\ &\iff[a\cdot x]=[1]\\ &\iff ax\equiv1\pmod n\\ &\iff n\mid(ax-1)\\ &\iff ax-1=kn\text{ con }k\in\mathbb{Z}\\ &\iff \underset{(Bézout)}{ax-kn=1}\text{ con }k\in\mathbb{Z}\\ &\iff(a,n)=1\end{align}$  
  
**Domanda**: In $\mathbb{Z}_n$ quante classi sono invertibili? In $\mathbb{Z}_4,\mathbb{Z}_5,\mathbb{Z}_6$ quante classi sono invertibili?  
  
**Osservazione**  
Se $n=p$ numero primo.  
$\mathbb{Z}_p$ quali sono le classi invertibili?  
$$  
[a]\text{ invertibile in }\mathbb{Z}_p\iff MCD(a,p)=1  
$$  
$$  
\mathbb{Z}_p=\{[0],[1],[2],\ldots,[p-1]\}  
$$  
Ogni $1\leq a\leq p-1$ è coprimo con $p$ perché $p$ è primo.  
Quindi tutte le classi diverse da $[0]$ sono invertibili, ho $p-1$ classi invertibili in $\mathbb{Z}_p$.  
  
## Funzione di Eulero  
  
> **Notazione**  
> Se $A$ è un insieme finito, il simbolo $\#A$ indica il numero di elementi di $A$.  
  
### Definizione  
Sia $n\in\mathbb{N}, n>1$.  
$$  
\varphi(n)\begin{align}&=\#\{a\in\mathbb{Z}\mid1\leq a< n\text{ e }MCD(a,n)=1\}\\ &=\#\{\text{classi invertibili in }\mathbb{Z}_n\}\end{align}  
$$  
  
**Esempi**  
$$  
\varphi(2)=1\qquad (1,2)=1  
$$  
$$  
\varphi(3)=2\qquad (1,3)=1,\quad(2,3)=1  
$$  
$$  
\mathbb{Z}_3=\{[0],[1],[2]\}\quad\text{classi invertibili }[1],[2]  
$$  
  
### Come si calcola  
  
**A) Se $p$ è un numero primo**  
$$  
\varphi(p)=p-1  
$$  
$$  
1,2,3,\ldots,p-1  
$$  
sono tutti coprimi con $p$.  
  
**B) Se $p$ è un numero primo e $h\in\mathbb{N}, h\geq1$**  
$$  
\varphi(p^h)=p^h-p^{h-1}=p^h\left(1-\frac{1}{p}\right)  
$$  
*Dimostrazione*  
Se $1\leq a\leq p^h-1$  
$$  
(a,p^h)\neq1\iff a=ip\quad(\text{multiplo di }p)  
$$  
$$  
1\leq i\leq p^{h-1}-1  
$$  
Ho $p^{h-1}-1$ numeri non coprimi con $p^h$.  
Perciò avrò  
$$  
p^h-1-(p^{h-1}-1)=p^h-p^{h-1}  
$$  
elementi coprimi con $p^h$.  
  
*Esempio*  
$$  
\varphi(9)=\varphi(3^2)=3^2-3^1=9-3=6  
$$  
$$  
\begin{align}  
&p=3\\  
&h=2  
\end{align}  
\quad\text{ci sono 6 classi invertibili in }\mathbb{Z}_9  
$$  
$$  
\mathbb{Z}_9=\{\underset{no}{[0]},\underset{si}{[1]},\underset{si}{[2]},\underset{no}{[3]},\underset{si}{[4]},\underset{si}{[5]},\underset{no}{[6]},\underset{si}{[7]},\underset{si}{[8]}\}  
$$  
  
**C) $n\geq1$**  
$$  
n=p_1^{h_1}\cdot p_2^{h_2}\cdots p_r^{h_r}  
$$  
Decomposizione in fattori primi.  
Allora  
$$  
\varphi(n)=\varphi(p_1^{h_1})\cdot\varphi(p_2^{h_2})\cdots\varphi(p_r^{h_r})  
$$  
  
*Esempio*  
$$  
\varphi(75)=\varphi(3^1)\cdot\varphi(5^2)= (3-1)(25-5)=2\cdot20=40  
$$  
  
## Piccolo teorema di Fermat  
  
$$  
a\in\mathbb{Z},\quad p\text{ primo}  
$$  
allora  
$$  
a^p\equiv a\mod p  
$$  
  
> **Corollario**  
> Se $(a,p)=1$ allora posso semplificare una $a$  
  
$$  
a^{p-1}\equiv 1\mod p  
$$  
  
Segue dal fatto che se $(c,n)=1$:  
$$  
a\equiv b\mod n\implies a\cdot c\equiv b\cdot c\mod n  
$$  
  
## Teorema di Eulero  
  
Generalizza il corollario con $n$ qualsiasi invece di $n=p$ primo.  
  
Se $(a,n)=1$ allora  
$$  
a^{\varphi(n)}\equiv 1\mod n  
$$  
  
> **Osservazione**  
> Se $n=p$ primo allora $\varphi(p)=p-1$ e il teorema di Eulero coincide con il corollario del piccolo teorema di Fermat.  
  
