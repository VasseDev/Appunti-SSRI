---
share: true
---
### Trigonometria  
#### Simmetrie  
$$  
\sin(-\alpha)=-\sin(\alpha)  
$$  
$$  
\cos(-\alpha)=\cos(\alpha)  
$$  
$$  
\sin(\pi+\alpha)=-\sin(\alpha)  
$$  
$$  
\sin(\pi-\alpha)=\sin(\alpha)  
$$  
$$  
\cos(\pi\pm\alpha)=-\cos(\alpha)  
$$  
#### Formule di bisezione  
$$  
\sin(\frac{\alpha}{2})=\pm\sqrt{\frac{1-\cos(\alpha)}{2}}  
$$  
$$  
\cos(\frac{\alpha}{2})=\pm\sqrt{\frac{1+\cos(\alpha)}{2}}  
$$  
#### Formule di addizione  
$$  
\sin(a\pm b)=\sin(a)\cos(b)\pm\cos(a)\sin(b)  
$$  
$$  
\cos(a\pm b)=\cos(a)\cos(b)\mp\sin(a)\sin(b)  
$$  
#### Formule di duplicazione  
$$  
\sin(2a)=2\sin(a)\cos(a)  
$$  
$$  
\cos(2a)=\cos^2(a)-\sin^2(a)=2\cos^2(a)-1=1-2\sin^2(a)  
$$  
### Relazione di equivalenza  
**Riflessiva**  
$$  
\forall\space x \in X\quad (x,x)\in R\mid R(x,x)\mid xRx  
$$  
**Simmetrica**  
$$  
\forall\space x,y\in X\text{ se }(x,y)\in R\text{ allora }(y,x)\in R  
$$  
$$  
((x,y)\in R\Rightarrow(y,x)\in R)  
$$  
**Transitiva**  
$$  
\forall\space x,y,z\text{ se }(x,y)\in R\text{ e }(y,z)\in R\quad\text{[ipotesi]}  
$$  
$$  
\text{allora }(x,z)\in R  
$$  
### Principio di induzione (I forma)  
1. capire cosa dimostrare (definire $P(n)$)  
2. dimostrare il passo base  
3. dimostrare il passo induttivo  
    1. scrivere l'ipotesi induttiva  
    2. scrivere la tesi induttiva  
    3. dimostrare la tesi usando l'ipotesi  
### Principio di induzione (II forma)  
Sia $P(n)$ una proposizione che dipende da un numero naturale $n$. Se:  
1. Esiste un numero naturale $m$ tale che $P(m)$ è vera (base dell'induzione).  
2. Per ogni $k\geq m$, se $P(k)$ è vera, allora $P(k+1)$ è vera (passo induttivo).  
Allora $P(n)$ è vera per ogni numero naturale $n\geq m$.  
### Equazioni diofantee  
$$  
ax+by=c\text{ ha soluzioni intere}\iff MCD(a,b)|c  
$$  
1. calcolare $d=MCD(a,b)$  
2. se $d\nmid c$ l'equazione non ha soluzioni intere  
3. se $d|c$ dividere tutto per $d$ e risolvere l'equazione ridotta  
4. trovare una soluzione particolare dell'equazione ridotta usando l'algoritmo di Euclide esteso  
### Numeri complessi  
$$  
z=x+iy\quad x,y\in\mathbb{R}\quad i^2=-1  
$$  
$$  
\bar{z}=x-iy  
$$  
$$  
|z|=\sqrt{x^2+y^2}  
$$  
$$  
|z|^2=z\bar{z}  
$$  
#### Operazioni con i complessi  
$$  
z_1=x_1+iy_1\quad z_2=x_2+iy_2  
$$  
$$  
z_1+z_2=(x_1+x_2)+(y_1+y_2)i  
$$  
$$  
z_1\cdot z_2=(x_1x_2-y_1y_2)+(x_1y_2+x_2y_1)i  
$$  
$$  
\frac{z_1}{z_2}=\frac{x_1x_2+y_1y_2}{x_2^2+y_2^2}+ \frac{x_2y_1-x_1y_2}{x_2^2+y_2^2}i  
$$  
#### Forma trigonometrica  
$$  
z=\rho(\cos\theta+i\sin\theta)  
$$  
$$  
\theta=\arg(z)=\begin{cases}  
\arctan\frac{y}{x}&a>0\\  
\arctan\frac{y}{x}+\pi& x<0,y\geq0\\  
\arctan\frac{y}{x}-\pi& x<0,y<0\\  
\frac{\pi}{2}& x=0,y>0\\  
-\frac{\pi}{2}& x=0,y<0  
\end{cases}  
$$  
oppure  
$$  
\theta=\begin{cases}  
\cos\theta=\frac{x}{\rho}\\  
\sin\theta=\frac{y}{\rho}  
\end{cases}  
$$  
##### Trovare la forma trigonometrica  
Calcolo $\rho$:  
$$  
\rho=|z|=\sqrt{x^2+y^2}  
$$  
Calcolo $\theta$:  
$$  
\begin{cases}  
\cos\theta=\frac{x}{\rho}\\  
\sin\theta=\frac{y}{\rho}  
\end{cases}  
$$  
#### Formule di Moivre  
$$  
z_1\cdot z_2=\rho_1\rho_2\left[\cos(\theta_1+\theta_2)+i\sin(\theta_1+\theta_2)\right]  
$$  
$$  
\frac{z_1}{z_2}=\frac{\rho_1}{\rho_2}\left[\cos(\theta_1-\theta_2)+i\sin(\theta_1-\theta_2)\right]  
$$  
#### Equazioni con i complessi  
$$  
z^n=r(\cos n\theta+i\sin n\theta)  
$$  
$$  
z^n=w  
$$  
$$  
z_k=r^{\frac{1}{n}}\left[\cos\left(\frac{\varphi+2k\pi}{n}\right)+i\sin\left(\frac{\varphi+2k\pi}{n}\right)\right]\quad k=0,1,...,n-1  
$$  
#### Moltiplicazione per i  
$$  
iz=\rho(\cos(\theta+\frac{\pi}{2})+i\sin(\theta+\frac{\pi}{2}))  
$$  
  
### MCD e mcm  
#### Identità di Bézout  
Si trova usando l'algoritmo di Euclide esteso.  
$$  
ax+by=d  
$$  
con  
$$  
d=MCD(a,b)  
$$  
e  
$$  
x,y\in\mathbb{Z}  
$$  
#### Calcolo usando la scomposizione in fattori primi  
Scomponiamo $a$ e $b$ in fattori primi:  
$$  
a=p_1^{\alpha_1}\cdot p_2^{\alpha_2}\cdots p_n^{\alpha_n}  
$$  
$$  
b=p_1^{\beta_1}\cdot p_2^{\beta_2}\cdots p_n^{\beta_n}  
$$  
Allora:  
$$  
MCD(a,b)=p_1^{\min(\alpha_1,\beta_1)}\cdot p_2^{\min(\alpha_2,\beta_2)}\cdots p_n^{\min(\alpha_n,\beta_n)}  
$$  
$$  
mcm(a,b)=p_1^{\max(\alpha_1,\beta_1)}\cdot p_2^{\max(\alpha_2,\beta_2)}\cdots p_n^{\max(\alpha_n,\beta_n)}  
$$  
#### Relazione tra MCD e mcm  
$$  
MCD(a,b)\cdot mcm(a,b)=a\cdot b  
$$  
#### Equazioni diofantee  
$$  
ax+by=c\text{ ha soluzioni intere}\iff MCD(a,b)|c  
$$  
1. calcolare $d=MCD(a,b)$  
2. se $d\nmid c$ l'equazione non ha soluzioni intere  
3. se $d|c$ dividere tutto per $d$ e risolvere l'equazione ridotta  
  
**Esempio**  
$$  
5x+3y=16  
$$  
Risolvo l'equazione ridotta:  
$$  
5u+3v=1  
$$  
E poi moltiplico le soluzioni per 16:  
$$  
5(16u)+3(16v)=16  
$$  
Tutte le altre soluzioni sono nella forma:  
$$  
\begin{align}  
x=16u+3t\\  
y=16v-5t  
\end{align}\quad t\in\mathbb{Z}  
$$  
### Classi di equivalenza  
Sia $n\in\mathbb{N},n\geq1$. Si dice che due interi $a,b\in\mathbb{Z}$ sono congruenti modulo $n$ se $n|(a-b)$ e si scrive  
$$  
a\equiv b\mod n  
$$  
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
#### Relazione di congruenza $\mod n$  
La relazione di congruenza modulo $n$ è una relazione di equivalenza qualsiasi sia $n\in\mathbb{N}$.  
Su $\mathbb{Z}$ definiamo la relazione:  
$$  
a\equiv b\mod n\iff n|(b-a)\iff a\rho_nb  
$$  
#### Somma e prodotto  
Siano $a,b\in\mathbb{Z}$:  
$$  
[a]_n+[b]_n=[a+b]_n  
$$  
$$  
[a]_n\cdot[b]_n=[a\cdot b]_n  
$$  
##### Inverso  
L'inverso additivo di $[a]_n$ è $[-a]_n$ perché:  
$$  
[a]_n+[-a]_n=[0]_n  
$$  
L'inverso moltiplicativo di $[a]_n$ esiste se e solo se $MCD(a,n)=1$ ed è $[a']_n$ tale che:  
$$  
[a]_n\cdot[a']_n=[1]_n  
$$  
Per trovare l’inverso di $a \pmod{n}$:  
1. Verifica che $\gcd(a,n)=1$.  
2. Applica l’algoritmo di Euclide esteso.  
3. Il coefficiente di $a$ nell’identità di Bézout è l’inverso modulo $n$.  
#### Congruenze lineari  
Una congruenza lineare è un'equazione della forma:  
$$  
a,b\in\mathbb{Z}\quad [a]_n\cdot[x]_n=[b]_n  
$$  
oppure  
$$  
a\cdot x\equiv b\mod n  
$$  
Se $a$ ha un inverso moltiplicativo modulo $n$ allora la congruenza ha una e una sola soluzione:  
$$  
[x]_n=[a']_n\cdot[b]_n  
$$  
oppure   
$$  
x\equiv a'b\mod n  
$$  
(ho moltiplicato entrambi i lati per l'inverso di $a$ modulo $n$).  
Se $MCD(a,n)=d>1$ allora:  
1. se $d\nmid b$ la congruenza non ha soluzioni  
2. se $d\mid b$ la congruenza si riduce a:  
$$  
y_0=x_0+kn_0\quad n_0=n/d,\space k\in\mathbb{Z}  
$$  
che ha esattamente $d$ soluzioni modulo $n$.  
3. Se $(c,n)=1$, allora $a\equiv b\mod n \Leftrightarrow ac\equiv bc\mod n$  
4. Se $ka\equiv kb\mod kn$ allora $a\equiv b\mod n$  
> $ax\equiv\mod n$   
> _modo generale_: Bezout  
> _modo due_: se $n$ è piccolo (o altri motivi speciali) si trova a occhio  
> _modo tre_: $ax= b$ ha soluzione in $\mathbb{Z}$. Se ha soluzione $x$ in $\mathbb{Z}$, allora $[x]_n$ é soluzione in $\mathbb{Z}/\mathbb{Z}$ qualsiasi sia $n$.  
  
#### Sistemi di congruenze lineari  
$$  
\begin{cases}  
a_1 x\equiv b_1\mod n_1\\  
\vdots\\  
a_r x\equiv b_r\mod n_r  
\end{cases}  
$$  
##### Teorema cinese del resto  
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
##### Risoluzione  
1. calcolare $N=n_1 n_2 \cdots n_r$  
2. calcolare $N_i=\frac{N}{n_i}$ per ogni $i=1,...,r$  
3. trovare l'inverso moltiplicativo di $N_i$ modulo $n_i$, cioè trovare $y_i$ tale che:  
$$  
N_i\cdot y_i\equiv 1\mod n_i  
$$  
4. la soluzione del sistema è:  
$$  
x\equiv\sum_{i=1}^r b_i\cdot N_i\cdot y_i\mod N  
$$  
##### Teorema cinese del resto generalizzato  
