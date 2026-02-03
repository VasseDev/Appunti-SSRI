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
  
$ax\equiv b\mod n$   
_modo generale_: Bezout  
$$  
ax+ny=b  
$$  
_modo due_: se $n$ è piccolo (o altri motivi speciali) si trova a occhio  
_modo tre_: $ax= b$ ha soluzione in $\mathbb{Z}$. Se ha soluzione $x$ in $\mathbb{Z}$, allora $[x]_n$ é soluzione in $\mathbb{Z}/\mathbb{Z}_n$ qualsiasi sia $n$.  
  
> Ricordati di ridurre sempre tutto a modulo $n$ prima di fare qualsiasi passaggio.  
> Se il termine noto è negativo, aggiungi $n$ fino a renderlo positivo.  
  
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
Il sistema ha soluzione se e solo se per ogni coppia di numeri non coprimi tra di loro $i,j\leq r$ si ha che $MCD(n_i,n_j)\mid(b_i-b_j)$.  
Se ho una soluzione $c_1$, le altre sono della forma $c_1 + k N$, con $N=mcm(n_1,n_2,\dots,n_r)$.  
  
Spezzo le congruenze in congruenze con moduli coprimi a due a due (scomponendo i moduli nei loro fattori primi) e risolvo ogni sistema ottenuto con il teorema cinese del resto.  
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
MCD(6,8)=2 &\mid (2-4)=-2  
\end{align}  
$$  
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
  
#### Funzione di Eulero  
Sia $n\in\mathbb{N}, n>1$.  
$$  
\varphi(n)\begin{align}&=\#\{a\in\mathbb{Z}\mid1\leq a< n\text{ e }MCD(a,n)=1\}\\ &=\#\{\text{classi invertibili in }\mathbb{Z}_n\}\end{align}  
$$  
##### Come si calcola  
**A) Se $p$ è un numero primo**  
$$  
\varphi(p)=p-1  
$$  
**B) Se $p$ è un numero primo e $h\in\mathbb{N}, h\geq1$**  
$$  
\varphi(p^h)=p^h-p^{h-1}=p^h\left(1-\frac{1}{p}\right)  
$$  
**C) Se $n$ è un intero positivo con scomposizione in fattori primi**  
$$  
\varphi(n)=\varphi(p_1^{h_1})\cdot\varphi(p_2^{h_2})\cdots\varphi(p_r^{h_r})  
$$  
#### Piccolo teorema di Fermat  
Sia $p$ un numero primo e sia $a\in\mathbb{Z}$ con $p\nmid a$. Allora:  
$$  
a^p\equiv a\mod p\longrightarrow a^{p-1}\equiv 1\mod p  
$$  
#### Teorema di Eulero  
Sia $n\in\mathbb{N}, n>1$ e sia $a\in\mathbb{Z}$ con $MCD(a,n)=1$. Allora:  
$$  
a^{\varphi(n)}\equiv 1\mod n  
$$  
### Gruppi  
Un gruppo (G, \*) è un'insieme G dotato di una operazione binaria  
$$  
\ast: G \times G \to G  
$$  
tale che  
1. $\ast$ è associativa: per ogni a, b, c in G, (a \* b) \* c = a \* (b \* c)  
2. Esiste un elemento neutro e in G tale che per ogni a in G, a \* e = e \* a = a  
3. Per ogni a in G, esiste un elemento inverso a^-1 in G tale che a \* a^-1 = a^-1 \* a = e  
4. (Se il gruppo è commutativo o abeliano) Per ogni a, b in G, a \* b = b \* a  
#### Teorema di Lagrange  
$$  
\forall g\in G\quad\text{con G gruppo finito}  
$$  
allora  
$$  
o(g) \mid |G|  
$$  
ossia l'ordine di un elemento divide l'ordine del gruppo.  
### Anelli  
_Definizione_   
un anello $(R, +, \cdot)$ è un insieme dotato di due operazioni binarie:  
$$  
+: R \times R \to R  
$$  
$$  
\cdot: R \times R \to R  
$$  
tali che  
1.    
	- $+$ è associativa: $(a+b))+c=a+(b+c)$  
    - esiste l'elemento neutro $0\in\mathbb{R}$ rispetto alla $+$: $a+0=a=0+a\quad\forall\space a\in\mathbb{R}$  
    - $\forall\space a\in\mathbb{R}\space\exists-a\in\mathbb{R}$ detto elemento opposto tale che: $\begin{align} &a+(-a)=0\\ &(-a)+a=0\end{align}$  
    - $+$ è commutativa: per ogni a, b in R, $a + b = b + a$  
2. $\cdot$ è associativa: per ogni a, b, c in R, $(a \cdot b) \cdot c = a \cdot (b \cdot c)$  
3.  la moltiplicazione è distributiva rispetto alla somma:  
    - per ogni a, b, c in R, $a \cdot (b + c) = (a \cdot b) + (a \cdot c)$  
    - per ogni a, b, c in R, $(a + b) \cdot c = (a \cdot c) + (b \cdot c)$  
  
_osservazione:_ $(R, +)$ è un gruppo abeliano.  
Se vale che $\cdot$ è commutativo si dice che l'anello è commutativo.  
Se vale che esiste l'elemento neutro $I\in R$ rispetto al prodotto si dice che l'anello è _unitario_.  
### Campo  
_Definizione_   
un campo è un anello commutativo unitario in cui ogni elemento diverso da 0 è invertibile.  
### Gruppi di permutazione  
  
**Composizione**  
$$  
f(g(x))=f\circ g(x)  
$$  
*Proprietà*  
  
$$  
(a_1\ a_2\ a_3\ \dots\ a_k)^k=id  
$$  
L'ordine di un ciclo di lunghezza k è k.  
  
**Elevamento a potenza**  
$$  
f^n(x)=\underbrace{f\circ f\circ f\circ \dots \circ f}_{n\text{ volte}}(x)  
$$  
  
**Neutro**  
$$  
id\circ g(x)=g\circ id(x)=g(x)  
$$  
  
**Inverso**  
$$  
f\circ f^{-1}(x)=f^{-1}\circ f(x)=id(x)=x  
$$  
Come si calcola l'inverso di un ciclo:  
$$  
(a_1 a_2 a_3 \dots a_k)^{-1}=(a_k a_{k-1} \dots a_2 a_1)  
$$  
**Notazione**  
$$  
\sigma:  
\begin{pmatrix}  
1 & 2 & 3 & \dots & n\\  
f(1) & f(2) & f(3) & \dots & f(n)  
\end{pmatrix}  
$$  
$$  
(a_1 a_2 a_3 \dots a_k)=\begin{pmatrix} a_1 & a_2 & a_3 & \dots & a_k\\ a_2 & a_3 & a_4 & \dots & a_1 \end{pmatrix}  
$$  
  
**Prodotto cicli disgiunti**  
$$  
\sigma_1\cdot\sigma_2=\sigma_2\cdot\sigma_1  
$$  
Fai prima $\sigma_1$ poi $\sigma_2$.  
Ordine di $\sigma$ è l'mcm degli ordini di $\sigma_1$ e $\sigma_2$.  
  
**Prodotto cicli congiunti**  
$$  
\sigma_1\cdot\sigma_2\neq\sigma_2\cdot\sigma_1  
$$  
  
**Parità**  
La permutazione si dice _pari_ se può essere scritta con un numero pari di trasposizioni, _dispari_ altrimenti.  
#### Teorema  
Ogni permutazione si scrive come prodotto di cicli disgiunti in modo unico a meno dell'ordine dei fattori e dei cicli di lunghezza 1.  
  
**Algoritmo**  
1. Prendi il primo elemento non ancora usato (1)  
2. Segui l'immagine fino a tornare al punto di partenza: ottieni un ciclo  
3. Ripeti con il primo elemento non ancora usato fino a che non hai usato tutti gli elementi.  
  
**Proprietà:**  
Ogni permutazione può essere scritta come prodotto di cicli in modi diversi. Non cambia la parità del numero di cicli da usare.  
Una permutazione si dice _pari_ se può essere scritta con un numero pari di cicli, dispari altrimenti.  
### Anello dei polinomi  
_Definizione_: l'anello dei polinomi ha coefficienti in $A:A[x]$  
  
$$  
\{0\}\cup\{\sum_{i=0}^n a_ix^i\mid n\in\mathbb{N}_0,a_i\in A\}  
$$  
Grado: max$\{i\mid a_i\neq 0\}$  
#### Operazioni  
Somma:  
$$  
\left(\sum_{i=0}^n a_ix^i\right)+\left(\sum_{i=0}^m b_ix^i\right)=\sum_{i=0}^{\max(n,m)}(a_i+b_i)x^i  
$$  
  
Prodotto:  
$$  
\left(\sum_{i=0}^n a_ix^i\right)\cdot\left(\sum_{j=0}^m b_jx^j\right)=\sum_{k=0}^{n+m}\left(\sum_{i+j=k}a_ib_j\right)x^k  
$$  
  
#### Teorema di Ruffini  
Sia $A$ un anello commutativo unitario e sia $f(x)\in A[x]$ un polinomio di grado $n\geq1$. Allora per ogni $a\in A$ esistono un polinomio $q(x)\in A[x]$ di grado $n-1$ e un elemento $r\in A$ tali che:  
$$  
f(x)=(x-a)q(x)+r  
$$  
In particolare, si ha che $r=f(a)$.  
  
### Matrici  
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
#### Operazioni  
  
**Somma**  
Si può fare solamente tra matrici della stessa dimensione.  
Si somma posizione per posizione.  
  
**Proprietà**  
- commutativa  
- associativa  
- esiste elemento neutro (matrice zero, tutti gli elementi sono 0)  
- esiste l'inverso (matrice opposta, si cambia il segno di ogni elemento)  
  
**Trasposta**  
Scambio righe con colonne.  
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
È idempotente:  
$$  
(A^T)^T=A  
$$  
$A$ è simmetrica se $A=A^T$.  
  
**Prodotto esterno**  
$$  
\Pi\cdot A=\Pi\begin{pmatrix} 1 & 3 & 7\\ -1 & 2 & 0 \end{pmatrix}= \begin{pmatrix} \Pi & 3\Pi & 7\Pi\\ -\Pi & 2\Pi & 0 \end{pmatrix}  
$$  
  
**Prodotto interno**  
Tra vettori:  
$$  
v\cdot w=\sum_{i=1}^n a_ib_i\in \mathbb{K}  
$$  
Tra matrici:  
$$  
A\in M_{m\times n}(\mathbb{K})\quad B\in M_{n\times p}(\mathbb{K})  
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
$$  
c_{ij}=\sum_{k=1}^n a_{ik}b_{kj}  
$$  
La riga $i$ di $A$ per la colonna $j$ di $B$.  
$$  
A\cdot B\neq B\cdot A  
$$  
  
**Proprietà**  
Date $A,B,C,D$ matrici compatibili per le operazioni:  
1. $A\cdot (B\cdot C)=(A\cdot B)\cdot C$ (associativa)  
2. $A\cdot (B+C)=A\cdot B + A\cdot C$ e $(A+B)\cdot C=A\cdot C + B\cdot C$ (distributiva)  
3. Esiste l'elemento neutro $I_n$ tale che $A\cdot I_n=A$ e $I_n\cdot A=A$ per ogni $A\in M_{n\times n}(\mathbb{K})$. $I_n=\begin{pmatrix}1 & 0 & \dots & 0\\0 & 1 & \dots & 0\\ \vdots & \vdots & \ddots & \vdots\\0 & 0 & \dots & 1\end{pmatrix}$  
4. Se $A\in M_{m\times n}(\mathbb{K})$ e $B\in M_{n\times p}(\mathbb{K})$ allora $(A\cdot B)^T=B^T\cdot A^T$.  
### Sistemi di equazioni lineari  
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
matrice coefficienti $\times$ vettore incognite $=$ vettore termini noti.  
$$  
(A\mid b)  
$$  
#### Processo di Gauss-Jordan  
  
 Ridurre il sistema ad un sistema a gradini equivalente  
$$  
 \begin{cases}  
a'_{11}x_1+a'_{12}x_2+\dots+a'_{1n}x_n=b'_1\\  
0\cdot x_1+a'_{22}x_2+\dots+a'_{2n}x_n=b'_2\\  
\vdots\\  
0\cdot x_1+0\cdot x_2+\dots+a'_{mn}x_n=b'_m  
\end{cases}  
$$  
Operazioni permesse:  
1. scambiare di posto due equazioni  
2. moltiplicare una equazione per uno scalare (= numero reale) non nullo  
3. sostituire una equazione con la somma di se stessa e un multiplo scalare di un'altra equazione  
  
*Esempio*  
$$  
\begin{pmatrix} 1 & 2 & 3 & \vdots & 4\\ 2 & 5 & 3 & \vdots & 7\\ 4 & 4 & 9 & \vdots & 10 \end{pmatrix}  
\quad  
\underset{R_2-2R_1\to R_2}{\longrightarrow}  
\quad  
\begin{pmatrix} 1 & 2 & 3 & \vdots & 4\\ 0 & 1 & -3 & \vdots & -1\\ 4 & 4 & 9 & \vdots & 10 \end{pmatrix}  
$$  
  
$(A\ \vdots\ \underline{b})$ è detta matrice completa associata al sistema  
  
##### Passi da seguire sempre nello stesso ordine  
**1. Parti dalla prima colonna**  
- Cerca il **pivot** (un numero ≠ 0).  
- Se in alto c’è 0, **scambia righe**.  
**2. Rendi il pivot uguale a 1**  
- Dividi **tutta la riga** per il valore del pivot.  
**3. Azzera tutta la colonna del pivot**  
- Usa il pivot per fare **zeri sopra e sotto**.  
- Alla fine, in quella colonna deve restare **solo il 1 del pivot**.  
**4. Passa alla colonna successiva**  
- Scendi di una riga e ripeti **esattamente gli stessi passi**.  
  
👉 Continui finché:  
- ottieni l’identità (se stai invertendo una matrice), oppure  
- non puoi più scendere (fine algoritmo).  
  
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
  
##### Teorema di Rouché-Capelli  
Un sistema lineare è compatibile solo e solo se  
$$  
\mathrm{rg}(A) = \mathrm{rg}(A\ \vdots\ \underline{b})  
$$  
in tal caso il sistema possiede  
$$  
\infty^{n - r}\text{ soluzioni}  
$$  
dove $n$ è il numero di incognite e $r$ è il rango della matrice dei coefficienti.  
Ranghi uguali $\Rightarrow$ sistema compatibile.  
Ranghi diversi $\Rightarrow$ sistema incompatibile $\Rightarrow$ nessuna soluzione.  
  
#### Matrici invertibili  
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
A\cdot B=I\iff A\cdot \underline{b_1} = \begin{pmatrix}  
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
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2 & 3\\  
0 & 1 & 4\\  
5 & 6 & 0  
\end{pmatrix}  
\quad  
\left(A\ \vdots\ I\right)=\begin{pmatrix}  
1 & 2 & 3 & \vdots & 1 & 0 & 0\\  
0 & 1 & 4 & \vdots & 0 & 1 & 0\\  
5 & 6 & 0 & \vdots & 0 & 0 & 1  
\end{pmatrix}  
$$  
$$  
\underset{R_3-5R_1\to R_3}{\longrightarrow}  
\begin{pmatrix}  
1 & 2 & 3 & \vdots & 1 & 0 & 0\\  
0 & 1 & 4 & \vdots & 0 & 1 & 0\\  
0 & -4 & -15 & \vdots & -5 & 0 & 1  
\end{pmatrix}  
$$  
$$  
\underset{R_3+4R_2\to R_3}{\longrightarrow}  
\begin{pmatrix}  
1 & 2 & 3 & \vdots & 1 & 0 & 0\\  
0 & 1 & 4 & \vdots & 0 & 1 & 0\\  
0 & 0 & 1 & \vdots & -5 & 4 & 1  
\end{pmatrix}  
$$  
$$  
\underset{R_2-4R_3\to R_2}{\longrightarrow}  
\begin{pmatrix}  
1 & 2 & 3 & \vdots & 1 & 0 & 0\\  
0 & 1 & 0 & \vdots & 20 & -15 & -4\\  
0 & 0 & 1 & \vdots & -5 & 4 & 1  
\end{pmatrix}  
$$  
$$  
\underset{R_1-3R_3\to R_1}{\longrightarrow}  
\begin{pmatrix}  
1 & 0 & 0 & \vdots & 16 & -12 & -3\\  
0 & 1 & 0 & \vdots & 20 & -15 & -4\\  
0 & 0 & 1 & \vdots & -5 & 4 & 1  
\end{pmatrix}  
$$  
$$  
\Longrightarrow  
\quad  
A^{-1}=\begin{pmatrix}  
16 & -12 & -3\\  
20 & -15 & -4\\  
-5 & 4 & 1  
\end{pmatrix}  
$$  
  
**Formule**  
1. $(AB)^{-1}=B^{-1}A^{-1}$  
2. $(A^{-1})^{-1}=A$  
3. $(A^T)^{-1}=(A^{-1})^T$  
  
#### Determinanti  
$$  
\det(A) = |A| = \sum_{\sigma \in S_N} \left( \mathrm{sgn}(\sigma) \prod_{i=1}^N a_{i, \sigma(i)} \right)  
$$  
**Matrici** $2\times2$  
$$  
A=\begin{pmatrix}  
a & b\\  
c & d  
\end{pmatrix}  
\quad  
\det(A)=ad-bc  
$$  
**Matrici** $3\times3$  
$$  
A=\begin{pmatrix}  
a & b & c\\  
d & e & f\\  
g & h & i  
\end{pmatrix}  
\quad  
\det(A)=a(ei-fh)-b(di-fg)+c(dh-eg)  
$$  
oppure accosto la matrice a se stessa e sommo i prodotti delle diagonali principali e sottraggo i prodotti delle diagonali secondarie:  
$$  
\det(A)=aei+bfg+cdh-ceg-bdi-afh  
$$  
**Proprietà**  
1. Se $B$ si ottiene da $A$ scambiando due righe o colonne, allora $\det(B) = -\det(A)$ (perché comporre con un 2-ciclo cambia la parità)  
2. Se $A$ ha due righe o colonne uguali, il determinante è zero.  
3. Se $A$ ha una riga o colonna di zeri, il determinante è zero.  
4. Se $B$ si ottiene da $A$ moltiplicando una riga o colonna per uno scalare $k\in\mathbb{R}$, allora $\det(B) = k \det(A)$.  
5. Se $B$ si ottiene da $A$ sommando a una riga o colonna di $A$ un multiplo di un'altra riga o colonna, allora $\det(B) = \det(A)$.  
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
  
Le proprietà enunciate permettono di calcolare il determinante col processo di Gauss-Jordan.  
  
##### Regola di Laplace  
(Determinante per matrici di dimensione superiore a 3)  
$$  
\det(A) = \sum_{j=1}^N a_{ij} (-1)^{i+j} \det(A_{ij})  
$$  
dove $A_{ij}$ è la matrice quadrata ottenuta da $A$ eliminando la riga $i$ e la colonna $j$.  
  
##### Teorema di Binet  
1. $\det(AB) = \det(A) \cdot \det(B)$  
2. $\det(A^{-1}) = \frac{1}{\det(A)}$ se $A$ è invertibile  
3. $\det(A^k)) = (\det(A))^k$  
  
### Spazio vettoriale  
$$  
\mathbb{R}^2=\{\begin{pmatrix}x\\y\end{pmatrix} : x,y \in \mathbb{R}\}  
$$  
è l'insieme dei vettori colonna a due entrate.  
  
Uno spazio vettoriale su un campo $\mathbb{K}$ è un insieme chiuso $V$ dotato di due operazioni:  
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
  
**Operazioni**  
1. somma: $\begin{pmatrix}x_1\\y_1\end{pmatrix} + \begin{pmatrix}x_2\\y_2\end{pmatrix} = \begin{pmatrix}x_1 + x_2\\y_1 + y_2\end{pmatrix}$ (combinazione lineare dei due vettori)  
2. prodotto per scalare: $c \cdot \begin{pmatrix}x\\y\end{pmatrix} = \begin{pmatrix}c x\\c y\end{pmatrix}$  
  
**Vettore nullo**  
$$  
0 = \begin{pmatrix}0\\0\end{pmatrix}\in \mathbb{R}^2  
$$  
  
**Vettore opposto**  
$$  
-\begin{pmatrix}x\\y\end{pmatrix} = \begin{pmatrix}-x\\-y\end{pmatrix}  
$$  
  
**In generale**  
$$  
\mathbb{R}^N=\{\begin{pmatrix}x_1\\x_2\\\vdots\\x_N\end{pmatrix} : x_i \in \mathbb{R}, i=1,\ldots,N\}  
$$  
  
#### Dimostrare che un insieme è uno spazio vettoriale  
1. Definire le due operazioni  
2. Verificare la chiusura rispetto alle due operazioni  
3. Verificare esistenza del vettore nullo  
4. Verificare l'esistenza dell'opposto  
  
#### Insieme matrici quadrate  
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
  
#### Polinomi di grado $\leq N$  
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
Il vettore nullo di $R_N[x]$ è il polinomio nullo  
  
#### Sottospazi  
Un sottoinsieme non vuoto $W$ di uno spazio vettoriale $V$ sul campo $\mathbb{K}$ si dice sottospazio vettoriale di $V$ se:  
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
  
**Teorema**  
Se $W\subseteq V$ è un sottospazio vettoriale di $V$ allora $\dim(W) \leq \dim(V)$.  
Inoltre se $\dim(W) = \dim(V)$ allora $W = V$.  
  
#### Generatori  
Diciamo che i vettori $v_1, v_2, \ldots, v_k$ generano lo spazio vettoriale $V$ se ogni vettore $v\in V$ è combinazione lineare di $v_1, v_2, \ldots, v_k$. Si scrive  
$$  
V = \langle v_1, v_2, \ldots, v_k \rangle  
$$  
In generale $\mathbb{R}^n$ è generato dai vettori  
$$  
\underline{e}_1 = \begin{pmatrix}  
1 \\  
0 \\  
\vdots \\  
0  
\end{pmatrix}, \underline{e}_2 = \begin{pmatrix}  
0 \\  
1 \\  
\vdots \\  
0  
\end{pmatrix}, \ldots, \underline{e}_n = \begin{pmatrix}  
0 \\  
0 \\  
\vdots \\  
1  
\end{pmatrix}  
$$  
detti **vettori canonici**.  
  
#### Dipendenza lineare  
I vettori $v_1, v_2, \ldots, v_k$ di uno spazio vettoriale $V$ si dicono linearmente dipendenti se esistono scalari $c_1, c_2, \ldots, c_k$, non tutti nulli, tali che  
$$  
c_1 v_1 + c_2 v_2 + \cdots + c_k v_k = 0  
$$  
Esiste una combinazione lineare non banale dei vettori che dà il vettore nullo. Altrimenti sono **linearmente indipendenti.**  
  
**Determinare il numero di vettori linearmente indipendenti**  
Applicare Gauss-Jordan alla matrice i cui vettori sono le colonne.  
I vettori corrispondenti ai pivot sono indipendenti, altrimenti avrei delle variabili libere e quindi pesi non nulli.  
Il numero di pivot è il massimo numero di vettori linearmente indipendenti.  
  
#### Base  
Una **base** di uno spazio vettoriale $V$ è un insieme di vettori $\{v_1, v_2, \ldots, v_n\}$ che genera $V$ e i cui vettori sono linearmente indipendenti.  
  
$$  
\mathbb{R}^2.\qquad\{\begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1\end{pmatrix}\} \text{ è una base di } \mathbb{R}^2  
$$  
Generano $+$ sono linearmente indipendenti.   
$\dim(\mathbb{R}^2) = 2$.  
  
$$  
\mathbb{R}^n.\qquad\{\begin{pmatrix}1 \\ 0 \\ \vdots \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ \vdots \\ 0\end{pmatrix}, \ldots, \begin{pmatrix}0 \\ 0 \\ \vdots \\ 1\end{pmatrix}\} \text{ è una base di } \mathbb{R}^n\qquad\dim(\mathbb{R}^n) = n  
$$  
Questa è una base "speciale" formata dai vettori canonici, detta **base canonica** di $\mathbb{R}^n$.  
  
##### Trovare la base di uno spazio dato con parametri  
1. separi i parametri  
2. scrivi come combinazione lineare  
3. i vettori che moltiplicano i parametri **sono i generatori**  
4. se sono indipendenti → base  
  
##### Teorema di equicardinalità delle basi  
Tutte le basi di uno spazio vettoriale $V$ hanno lo stesso numero di vettori.  
Questo numero si chiama **dimensione** di $V$ e si indica con $\dim(V)$.  
Se uno spazio vettoriale ha dimensione finita $n$, allora ogni insieme di $n$ vettori linearmente indipendenti è una base di $V$.  
  
**Corollario**  
$N$ vettori $\underline v_1, \underline v_2, \ldots, \underline v_N$ di $\mathbb{R}^N$ sono una base  
$$  
\iff\mathrm{rk}\begin{pmatrix}  
\mid & \mid &        & \mid \\  
v_1  & v_2  & \cdots & v_n  \\  
\mid & \mid &        & \mid  
\end{pmatrix} = N  
$$  
$$  
\iff\det\begin{pmatrix}  
\mid & \mid &        & \mid \\  
v_1  & v_2  & \cdots & v_n  \\  
\mid & \mid &        & \mid  
\end{pmatrix}\neq 0  
$$  
  
##### Estrazione di una base  
Dati vettori di $V$ che generano esiste un loro sottoinsieme formante una base di $V$ (basta rimuovere i vettori dipendenti)  
$$  
\mathbb{R}^3\qquad\{\begin{pmatrix}1 \\ 0\end{pmatrix},  
\begin{pmatrix}2 \\ 1\end{pmatrix},  
\xcancel{\begin{pmatrix}2 \\ 0\end{pmatrix}}\}  
$$  
generano, però non è una base  
$$  
\implies \{\begin{pmatrix}1 \\ 0\end{pmatrix},  
\begin{pmatrix}2 \\ 1\end{pmatrix}\}  
\quad\text{è una base}  
$$  
  
##### Completamento a una base  
Dati vettori di $V$ linearmente indipendenti, possiamo aggiungere altri vettori in modo da ottenere una base di $V$.  
$$  
\mathbb{R}^3\qquad\{\begin{pmatrix}1 \\ 2 \\ 1\end{pmatrix},  
\begin{pmatrix}0 \\ 1 \\ 2\end{pmatrix}\}  
\quad\text{ sono linearmente indipendenti}  
$$  
aggiungo il vettore $\begin{pmatrix}1 \\ 0 \\ 0\end{pmatrix}$ in modo da avere una base  
$$  
\{\begin{pmatrix}1 \\ 2 \\ 1\end{pmatrix},  
\begin{pmatrix}0 \\ 1 \\ 2\end{pmatrix},  
\begin{pmatrix}1 \\ 0 \\ 0\end{pmatrix}\}  
$$  
  
(in realtà posso aggiungere un qualsiasi vettore indipendente dai primi 2)  
  
Verifichiamo che ho ottenuto una base.  
Devo dimostrare che  
$$  
\mathrm{rk}\begin{pmatrix}  
1 & 0 & 1 \\  
2 & 1 & 0 \\  
1 & 2 & 0  
\end{pmatrix} = 3  
$$  
oppure più semplicemente che  
$$  
\det\begin{pmatrix}  
1 & 0 & 1 \\  
2 & 1 & 0 \\  
1 & 2 & 0  
\end{pmatrix} \neq 0  
$$  
Calcoliamo  
$$  
\det\begin{pmatrix}  
1 & 0 & 1 \\  
2 & 1 & 0 \\  
1 & 2 & 0  
\end{pmatrix}^{\text{sarrus}} =  
0+4+0-1-0-0=3\neq 0\implies\text{è una base}  
$$  
  
#### Sottospazi generati da vettori  
Dati $v_1, v_2, \ldots, v_n \in V$.  
Lo spazio generato da questi vettori è definito come  
  
$$  
\langle v_1, v_2, \ldots, v_n \rangle = \{c_1 v_1 + c_2 v_2 + \ldots + c_n v_n \mid c_i \in \mathbb{R}\}  
$$  
  
si vede facilmente che $\langle v_1, v_2, \ldots, v_n \rangle$ è un sottospazio di $V$.  
  
##### Somma  
Siano $S\subseteq V$ e $T\subseteq V$ due sottospazi di $V$.  
$$  
\dim(S)=M\quad\dim(T)=N  
$$  
definiamo  
$$  
S+T=\{\underline v+\underline w \mid \underline v \in S, \underline w \in T\}\subseteq V  
$$  
Allora $S+T$ è generato da  
$$  
\mathbb{B}_{S+T}=\{\underline{v}_1,\dots,\underline{v}_M,\underline{w}_1,\dots,\underline{w}_N\}  
$$  
Non è sempre vero che  
$$  
\dim(S+T) = \dim(S) + \dim(T)  
$$  
però è vero che  
$$  
\dim(S+T) \leq \dim(S) + \dim(T)  
$$  
  
##### Intersezione  
Siano $S\subseteq V$ e $T\subseteq V$ due sottospazi di $V$.  
$$  
S\cap T=\{\underline v \mid \underline v \in S \text{ e } \underline v \in T\}\subseteq V  
$$  
  
#### Formula di Grassmann  
$$  
\dim(S)+\dim(T) = \dim(S+T) + \dim(S\cap T)  
$$  
  
**Definizione**  
$S,T\subseteq V$ sottospazi e $S+T=V$ e $S\cap T=\{0\}$ si dice che  
$$  
V=S\oplus T  
$$  
è somma diretta di $S$ e $T$.  
  
Ogni $\underline v \in V$ si scrive in modo unico come  
$$  
\underline{v}=\underline{v}_1 + \underline{v}_2\quad\text{con }\underline{v}_1 \in S,\underline{v}_2 \in T  
$$  
  
### Autovettore e autovalore  
Sia $A$ una matrice quadrata di taglia $N\times N$ a coefficienti in $\mathbb{K}$, cioè  
$$  
A\in M(\mathbb{K}, N\times N)  
$$  
un vettore non nullo  
$$  
\underline{v}=\begin{pmatrix}  
v_1\\  
v_2\\  
\vdots\\  
v_N  
\end{pmatrix}\in\mathbb{K}^N,\quad \underline{v}\neq \underline{0}  
$$  
è un *autovettore per $A$* se esiste $\lambda \in\mathbb{K}$ tale che  
$$  
A\underline{v}=\lambda \underline{v}  
$$  
si dice che $\lambda$ è un *autovalore per $A$* e $\underline{v}$ si dice *autovettore relativo all'autovalore* $\lambda$.  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix},\quad \underline{v}=\begin{pmatrix}  
1\\  
1  
\end{pmatrix}  
$$  
$$  
A\cdot \underline{v}=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix}\begin{pmatrix}  
1\\  
1  
\end{pmatrix}=\begin{pmatrix}  
3\\  
3  
\end{pmatrix}=3\begin{pmatrix}  
1\\  
1  
\end{pmatrix}  
=3\underline{v}  
$$  
  
#### Polinomio caratteristico  
$$  
\chi_A(t)=\det(A - tI)\in\mathbb{K}[t]  
$$  
polinomio nella variabile $t$.  
  
> **Teorema**  
> Gli zeri di $\chi_A(t)$ sono gli autovalori di $A$, e viceversa.  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix}\qquad  
I=\begin{pmatrix}  
1 & 0\\  
0 & 1  
\end{pmatrix}  
$$  
$$  
A-tI=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix}-t\begin{pmatrix}  
1 & 0\\  
0 & 1  
\end{pmatrix}=\begin{pmatrix}  
1-t & 2\\  
4 & -1-t  
\end{pmatrix}  
$$  
$$  
\chi_A(t)=\det(A-tI)=\det\begin{pmatrix}  
1-t & 2\\  
4 & -1-t  
\end{pmatrix}=(1-t)(-1-t)-8=t^2-9  
$$  
calcoliamo gli zeri  
$$  
t^2-9=0\qquad t_1=3\qquad t_2=-3  
$$  
gli autovalori di $A$ sono $3$ e $-3$.  
  
##### Autospazio  
Dato $\lambda$ un autovalore di $A$ definiamo *l'autospazio relativo all'autovalore* $\lambda$:  
$$  
V_\lambda=\left\{\underline{v}=\begin{pmatrix}  
v_1\\ v_2\\ \vdots\\ v_N \end{pmatrix}\in\mathbb{K}^N:A\underline{v}=\lambda \underline{v}\right\}  
$$  
ossia l'insieme degli autovettori relativi a $\lambda$ più il vettore nullo.  
$$  
=\{\underline{v}\in\mathbb{K}^N\mid A\underline{v}- V\underline{v}=\underline{0}\}=\{ \underline{v}\in\mathbb{K}^N\mid (A-\lambda I)\underline{v}=\underline{0}\}  
$$  
  
##### Molteplicità algebrica  
La *molteplicità algebrica* di un autovalore $\lambda$ è la molteplicità dello zero $\lambda$ del polinomio caratteristico $\chi_A(t)$.  
Si indica con $m_a(\lambda)$.  
  
*Esempio*  
$$  
\chi_A(t)=(t-1)^3t(t-2)^2  
$$  
gli zeri sono: $1,0,2$  
che sono gli autovalori  
$$  
m_a(1)=3\quad m_a(0)=1\quad m_a(2)=2  
$$  
  
##### Molteplicità geometrica  
a molteplicità geometrica dell'autovalore $\lambda$ è la dimensione di $V_\lambda$. Si indica con  
$$  
m_g(\lambda)=\dim(V_\lambda)  
$$  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix},\quad \lambda_A(t)=t^2-9  
$$  
autovalori: $3,-3$  
Calcoliamo basi e dimensioni degli autospazi: $V_3$ e $V_{-3}$  
$$  
A-tI=\begin{pmatrix}  
1-t & 2\\  
4 & -1-t  
\end{pmatrix}  
$$  
Calcoliamo $V_3$:  
$$  
t=3\qquad V_3:(A-3I)\begin{pmatrix}x\\ y\end{pmatrix}=\begin{pmatrix}0\\ 0\end{pmatrix}  
$$  
$$  
\begin{pmatrix}  
1-3 & 2\\  
4 & -1-3  
\end{pmatrix}  
\begin{pmatrix}  
x\\ y  
\end{pmatrix}=\begin{pmatrix}  
0\\ 0  
\end{pmatrix}  
$$  
$$  
\begin{pmatrix}  
-2 & 2\\  
4 & -4  
\end{pmatrix}  
\begin{pmatrix}  
x\\ y  
\end{pmatrix}=\begin{pmatrix}  
0\\ 0  
\end{pmatrix}  
$$  
$$  
\begin{cases}  
-2x+2y=0\\  
4x-4y=0  
\end{cases}  
\qquad\text{sistema, risolviamo}  
$$  
$$  
\begin{cases}  
x-y=0\\  
x-y=0  
\end{cases}  
\qquad\Rightarrow\qquad x=y  
$$  
quindi $y$ è variabile libera, poniamo $y=t$, otteniamo  
$$  
\begin{pmatrix}x\\ y\end{pmatrix}=  
\begin{pmatrix}t\\ t\end{pmatrix}=  
t\begin{pmatrix}1\\ 1\end{pmatrix},\quad t\in\mathbb{K}  
$$  
ogni vettore di $V_3$ è una combinazione lineare di $\begin{pmatrix}1\\ 1\end{pmatrix}$, quindi  
$$  
V_3=\langle\begin{pmatrix}1\\ 1\end{pmatrix}\rangle\Rightarrow V_3\text{ ha per base }\left\{\begin{pmatrix}  
1\\ 1  
\end{pmatrix}\right\}  
$$  
$$  
\dim(V_3)=1  
$$  
$$  
m_g(3)=1  
$$  
ora calcoliamo $V_{-3}$:  
$$  
A-tI=\begin{pmatrix}  
1-t & 2\\  
4 & -1-t  
\end{pmatrix}  
$$  
$$  
t=-3\qquad\begin{pmatrix}  
4 & 2\\  
4 & 2  
\end{pmatrix}  
\begin{pmatrix}  
x\\ y  
\end{pmatrix}=\begin{pmatrix}  
0\\ 0  
\end{pmatrix}  
$$  
$$  
\begin{cases}  
4x+2y=0\\  
\cancel{4x+2y=0}  
\end{cases}  
\qquad\Rightarrow\qquad 2x+y=0\Rightarrow x=-\frac{y}{2}  
$$  
poniamo $y=t$, otteniamo  
$$  
\begin{pmatrix}x\\ y\end{pmatrix}=  
\begin{pmatrix}  
-\frac{t}{2}\\ t\end{pmatrix}=  
t\begin{pmatrix}  
-\frac{1}{2}\\ 1  
\end{pmatrix},\quad t\in\mathbb{K}  
$$  
$$  
V_{-3} \text{ ha base } \left\{\begin{pmatrix} -\frac{1}{2}\\ 1 \end{pmatrix}\right\}  
$$  
$$  
\dim(V_{-3})=1\qquad m_g(-3)=1  
$$  
  
**Fatto importante:**  
$$  
1 \le m_g(a) \le m_a(a)  
$$  
  
### Diagonalizzazione  
Due matrici $A,B\in M(\mathbb{K},N\times N)$ si dicono *simili* se esiste una matrice invertibile tale che  
$$  
B=C^{-1}\cdot A\cdot C  
$$  
  
Una matrice $A$ è diagonalizzabile se è simile ad una matrice diagonale  
$$  
\land=\begin{pmatrix}  
\lambda_1 & 0 & \cdots & 0\\  
0 & \lambda_2 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & \lambda_N  
\end{pmatrix}  
$$  
$A$ diagonalizzabile  
se e solo se esiste una base di autovettori per $A$.  
  
#### Criteri di diagonalizzabilità  
1. Se $A$ ha $N$ autovalori distinti in $\mathbb{K}$ allora $A$ è diagonalizzabile su $\mathbb{K}$.  
2. $A$ è diagonalizzabile su $\mathbb{K}$ se e solo se per ogni autovalore $\lambda$ di $A$ si ha  
$$  
m_a(\lambda) = m_g(\lambda)  
$$  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix},\quad \chi_A(t)=t^2-9  
$$  
autovalori: $3,-3$  
Calcoliamo le molteplicità algebriche e geometriche:  
$$  
m_a(3)=1\quad m_a(-3)=1  
$$  
$$  
m_g(3)=1\quad m_g(-3)=1  
$$  
Quindi $A$ è diagonalizzabile su $\mathbb{R}$.  
Costruiamo la matrice di cambiamento di base $C$ le cui colonne sono gli autovettori calcolati in precedenza:  
$$  
C=\begin{pmatrix}  
1 & -\frac{1}{2}\\  
1 & 1  
\end{pmatrix}  
$$  
Calcoliamo l'inversa di $C$:  
$$  
C^{-1}=\frac{1}{1\cdot 1 - (-\frac{1}{2}\cdot 1)}\begin{pmatrix}  
1 & \frac{1}{2}\\  
-1 & 1  
\end{pmatrix}=\frac{1}{\frac{3}{2}}\begin{pmatrix}  
1 & \frac{1}{2}\\  
-1 & 1  
\end{pmatrix}=\begin{pmatrix}  
\frac{2}{3} & \frac{1}{3}\\  
-\frac{2}{3} & \frac{2}{3}  
\end{pmatrix}  
$$  
Calcoliamo la matrice diagonale:  
$$  
\land=C^{-1}\cdot A\cdot C=  
\begin{pmatrix}  
\frac{2}{3} & \frac{1}{3}\\  
-\frac{2}{3} & \frac{2}{3}  
\end{pmatrix}  
\cdot  
\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix}  
\cdot  
\begin{pmatrix}  
1 & -\frac{1}{2}\\  
1 & 1  
\end{pmatrix}=  
\begin{pmatrix}  
3 & 0\\  
0 & -3  
\end{pmatrix}  
$$  
Formata dagli autovalori di $A$.  
  
### Applicazioni lineari / Omomorfismi tra spazi vettoriali  
Siano $V$ e $W$ spazi vettoriali su un campo $\mathbb{K}$. Un omomorfismo/applicazione lineare tra $V$ e $W$ è una funzione  
$$  
f:V\to W\mid\forall\ v_1,v_2\in V,\forall\ k \in \mathbb{K}  
$$  
$$  
\begin{cases}  
\boxed{1}\ f(v_1+v_2)=f(v_1)+f(v_2)\\  
\boxed{2}\ f(kv_1)=kf(v_1)  
\end{cases}  
$$  
equivalentemente  
$$  
f(\sum_{i=1}^n k_iv_i)=\sum_{i=1}^n k_if(v_i)  
$$  
per ogni $n\in\mathbb{N}$, $v_1,v_2,\ldots,v_n\in V$ e $k_1,k_2,\ldots,k_n\in\mathbb{K}$.  
  
#### Nucleo e immagine  
$$  
\begin{align}  
&\boxed{1}\ \mathrm{Ker}(f)=\{v\in V\mid f(v)=0\}\quad\text{nucleo di }f\\  
&\boxed{2}\ \mathrm{Im}(f)=\{w\in W\mid \exists v\in V:f(v)=w\}\quad\text{immagine di }f  
\end{align}  
$$  
$$  
\underset{V}{\mathrm{Ker}}\curvearrowright\underset{W}{\mathrm{Im}}  
$$  
$$  
\begin{align}  
&\boxed{1}\ \mathrm{Ker}(f)\text{ è sottospazio vettoriale di }V\\  
&\boxed{2}\ \mathrm{Im}(f)\text{ è sottospazio vettoriale di }W  
\end{align}  
$$  
  
Esempio:  
- se $f(x,y)=(x,0)$, allora $\ker(f)=\{(0,y)\}$  
  
> Un’applicazione lineare preserva le combinazioni lineari; il suo nucleo misura la perdita di informazione, la sua immagine ciò che viene effettivamente raggiunto.  
#### Teorema nullità + rango  
Sia $f:V\to W$ un'applicazione lineare con $V$ di dimensione finita. Allora  
$$  
\dim(V)=\dim(\mathrm{Ker}(f))+\dim(\mathrm{Im}(f))  
$$  
  
#### Terminologia  
Un applicazione lineare si dice:  
$$  
\begin{align}  
&\boxed{1}\text{ iniettiva, quando è iniettiva come funzione}\\  
&\boxed{2}\text{ suriettiva, quando è suriettiva come funzione}\\  
&\boxed{3}\text{ isomorfismo, quando è biettiva come funzione}  
\end{align}  
$$  
  
#### Rappresentazione  
Sia $f:V\to W$ un'applicazione lineare.  
$$  
\begin{align}  
&\mathbb{V}=\{v_1,\dots,v_n\}\text{ base di }V\\  
&\mathbb{W}=\{w_1,\dots,w_m\}\text{ base di }W  
\end{align}  
\qquad  
f\text{ lo rappresento come matrice usando }V,W  
$$  
*Passo 1*  
$$  
\begin{align}  
&f(v_1)=a_{11}w_1+a_{21}w_2+\dots+a_{m1}w_m\\  
&f(v_2)=a_{12}w_1+a_{22}w_2+\dots+a_{m2}w_m\\  
&\vdots\\  
&f(v_n)=a_{1n}w_1+a_{2n}w_2+\dots+a_{mn}w_m  
\end{align}  
$$  
$$  
A=\begin{pmatrix}  
a_{11} & a_{12} & \cdots & a_{1n}\\  
a_{21} & a_{22} & \cdots & a_{2n}\\  
\vdots & \vdots & \ddots & \vdots\\  
a_{m1} & a_{m2} & \cdots & a_{mn}  
\end{pmatrix}  
$$  
Quindi:  
$$  
v=\sum_{i=1}^n b_iv_i  
$$  
$$  
f(v)=f\left(\sum_{i=1}^n b_iv_i\right)=\overset{\text{vettori}}{(w_1,\dots,w_m)}^TA\cdot\begin{pmatrix}b_1\\ b_2\\ \vdots\\ b_n\end{pmatrix}  
$$  
Se sai che $v$ ha coefficienti $b_1,\dots, b_n$ rispetto alla base $\mathbb{V}$, allora $f(v)$ ha coefficienti $^TA\cdot\begin{pmatrix}b_1\\ b_2\\ \vdots\\ b_n\end{pmatrix}$ rispetto alla base $\mathbb{W}$.  
  
#### **Esempio**  
Sia  
$$  
f:\mathbb R^2 \to \mathbb R^2 \quad\text{definita da}\quad f(x,y)=(x+2y,\;3x+y).  
$$  
##### **1️. Basi scelte**  
Usiamo le **basi canoniche**:  
$$  
V=\{e_1=(1,0),\ e_2=(0,1)\},\qquad W=\{e_1,e_2\}.  
$$  
  
##### **2️. Immagine dei vettori di base**  
Calcoliamo:  
$$  
f(e_1)=f(1,0)=(1,3)=1e_1+3e_2  
$$  
$$  
f(e_2)=f(0,1)=(2,1)=2e_1+1e_2  
$$  
  
##### **3️. Matrice associata a** f  
Le colonne sono le coordinate di $f(e_1)$ e $f(e_2)$:  
$$  
A= \begin{pmatrix} 1 & 2\\ 3 & 1 \end{pmatrix}  
$$  
  
##### **4️. Uso della matrice**  
Prendiamo  
$$  
v=(4,-1).  
$$  
Coordinate in base canonica:  
$$  
[v]=\begin{pmatrix}4\\-1\end{pmatrix}.  
$$  
Calcolo:  
$$  
A[v]= \begin{pmatrix} 1 & 2\\ 3 & 1 \end{pmatrix} \begin{pmatrix} 4\\-1 \end{pmatrix} = \begin{pmatrix} 2\\ 11 \end{pmatrix}.  
$$  
  
##### **5️. Verifica diretta**  
Calcolo diretto:  
$$  
f(4,-1)=(4+2(-1),\;3\cdot4-1)=(2,11).  
$$  
coincide.  
  
##### **6️. Collegamento con nucleo e immagine**  
- $\ker f = \{(0,0)\}$ ⇒ f è **iniettiva**  
- $\det A = 1-6=-5 \neq 0$ ⇒ f è **invertibile**  
  
### Coordinate  
$V$ spazio vettoriale su $\mathbb{R}$ (in generale su un campo qualsiasi $\mathbb{K}$).  
Fissiamo una base $\mathbb{B}=\{\underline{v_1},\underline v_2,\ldots,\underline{v_n}\}$ di $V$. Quindi $\dim V=N$  
  
**Teorema**  
Ogni vettore $\underline v\in V$ si scrive in modo unico come combinazione lineare dei vettori della base, cioè  
$$  
\underline v=x_1\underline{v_1}+x_2\underline{v_2}+\ldots+x_n\underline{v_n}  
$$  
con  
$$  
x_i\in \mathbb{R}\quad i=1,2,\ldots,n  
$$  
univocamente determinati.  
Il vettore  
$$  
\begin{pmatrix}  
x_1\\  
x_2\\  
\vdots\\  
x_n  
\end{pmatrix}\in \mathbb{R}^n  
$$  
è detto vettore delle coordinate.  
Si indica con  
  
$$  
[\underline{v}]_\mathbb{B}=\begin{pmatrix}  
x_1\\ x_2\\ \vdots\\ x_n  
\end{pmatrix}\ \text{ oppure con }\ \underline{x}=\begin{pmatrix} x_1\\ x_2\\ \vdots\\ x_n \end{pmatrix}  
$$  
  
*Esempio 1*  
$\mathbb{R}^2$ con base canonica  
$$  
\mathcal{E}=\{\begin{pmatrix}1\\0\end{pmatrix},\begin{pmatrix}0\\1\end{pmatrix}\}  
$$  
$$  
\underline{v}=\begin{pmatrix}  
2\\  
3  
\end{pmatrix}  
$$  
Qual è il vettore delle cordinate di $\underline{v}$ rispetto alla base $\mathcal{E}$?  
$$  
\begin{pmatrix}  
2\\  
3  
\end{pmatrix}= 2\begin{pmatrix}  
1\\  
0  
\end{pmatrix}+3\begin{pmatrix}  
0\\  
1  
\end{pmatrix}\implies [\begin{pmatrix}  
2\\  
3  
\end{pmatrix}]_\mathcal{E}=\begin{pmatrix}  
2\\  
3  
\end{pmatrix}  
$$  
> **Nota**  
> Le coordinate rispetto alla base canonica è il vettore stesso  
$$  
[\begin{pmatrix}  
-2\\  
4  
\end{pmatrix}]_\mathcal{E}=\begin{pmatrix}  
-2\\  
4  
\end{pmatrix}  
$$  
$$  
[\begin{pmatrix}  
x\\  
y  
\end{pmatrix}]_\mathcal{E}=\begin{pmatrix}  
x\\  
y  
\end{pmatrix}\qquad\forall\ \begin{pmatrix}  
x\\  
y  
\end{pmatrix}\in \mathbb{R}^2  
$$  
  
*Esempio 2*  
$\mathbb{R}^3$ con base  
$$  
\mathbb{B}=\{\begin{pmatrix}  
2\\ 3\end{pmatrix},\begin{pmatrix}  
0\\ 1\end{pmatrix}\}  
$$  
$$  
\underline{v}=\begin{pmatrix}  
2\\ 3\end{pmatrix}\qquad [\ \underline{v}\ ]_\mathbb{B}=\begin{pmatrix}1\\ 0\end{pmatrix}  
$$  
$$  
\underline{v}=\begin{pmatrix}2\\ 3\end{pmatrix}=1\cdot\begin{pmatrix}2\\ 3\end{pmatrix}+0\cdot\begin{pmatrix}1\\ 0\end{pmatrix}  
$$  
  
*Esempio 3*  
$$  
M(\mathbb{R},\ 2\times2)\qquad\begin{pmatrix}a&b\\ c&d\end{pmatrix}  
$$  
$$  
\mathbb{B}=\left\{\begin{pmatrix}1&0\\ 0&0\end{pmatrix},\begin{pmatrix}0&1\\ 0&0\end{pmatrix},\begin{pmatrix}0&0\\ 1&0\end{pmatrix},\begin{pmatrix}0&0\\ 0&1\end{pmatrix}\right\}  
$$  
$$  
A=\begin{pmatrix}2&3\\ 4&5\end{pmatrix}=  
2\begin{pmatrix}1&0\\ 0&0\end{pmatrix}+3\begin{pmatrix}0&1\\ 0&0\end{pmatrix}+4\begin{pmatrix}0&0\\ 1&0\end{pmatrix}+5\begin{pmatrix}0&0\\ 0&1\end{pmatrix}  
$$  
  
#### **Applicazione delle coordinate: cos’è**  
Hai uno spazio vettoriale V di dimensione n e scegli una base  
$$  
\mathcal B=\{v_1,\dots,v_n\}.  
$$  
Ogni vettore v\in V si scrive **in modo unico** come  
$$  
v=b_1v_1+\cdots+b_nv_n.  
$$  
L’**applicazione delle coordinate** è la funzione  
$$  
\varphi_{\mathcal B}:V\to\mathbb R^n,\qquad v\longmapsto [v]_{\mathcal B}= \begin{pmatrix} b_1\\ \vdots\\ b_n \end{pmatrix}.  
$$  
Non cambia il vettore: **cambia solo come lo descrivi**.  
  
##### **Corollario: perché due spazi di stessa dimensione sono isomorfi**  
Se:  
$$  
\dim V=\dim W=n,  
$$  
allora:  
$$  
V \xrightarrow{\;\varphi_{\mathcal B}\;} \mathbb R^n \xleftarrow{\;\varphi_{\mathcal C}\;} W  
$$  
Componendo ottieni un isomorfismo $V\to W$.  
  
**La dimensione è l’unico invariante** per gli spazi vettoriali (su uno stesso campo).  
  
#### Matrice del cambiamento di base  
$V$ fissiamo due basi   
$$  
\begin{align}  
&\mathbb{B}=\{\underline{v_1},\underline{v_2},\ldots,\underline{v_n}\}\\  
&\mathcal{E}=\{\underline{w_1},\underline{w_2},\ldots,\underline{w_n}\}  
\end{align}  
$$  
In particolare $\dim V=n$.]  
Definiamo la matrice  
$$  
_\mathcal{E}M_\mathbb{B}=\begin{pmatrix}|&|& &|\\ [\underline{v_1}]_\mathcal{E}&[\underline{v_2}]_\mathcal{E}&\ldots&[\underline{v_n}]_\mathcal{E}\\ |&|& &|\end{pmatrix}  
$$  
detta matrice del cambiamento di coordinate dalla base $\mathbb{B}$ alla base $\mathcal{E}$.  
  
**Proprietà**  
$$  
[\underline{v}]_\mathcal{E}=_\mathcal{E}M_\mathbb{B}\cdot[\underline{v}]_\mathbb{B}\quad\forall\ \underline{v}\in V  
$$  
$_\mathcal{E}M_\mathbb{B}$ trasforma le $\mathbb{B}$ coordinate di un vettore nelle sue $\mathcal{E}$ coordinate.  
  
*Esempio*  
$$  
\mathbb{R}^2\quad\begin{align}  
&\mathcal{E}=\{\begin{pmatrix}1\\0\end{pmatrix},\begin{pmatrix}1\\1\end{pmatrix}\}\\  
&\mathbb{B}=\{\begin{pmatrix}2\\3\end{pmatrix},\begin{pmatrix}0\\1\end{pmatrix}\}  
\end{align}  
$$  
Scriviamo $_\mathbb{B}M_\mathcal{E}$.  
$$  
_\mathbb{B}M_\mathcal{E}=\begin{pmatrix}|&|\\ [\begin{pmatrix}1\\0\end{pmatrix}]_\mathbb{B}&[\begin{pmatrix}0\\1\end{pmatrix}]_\mathbb{B}\\ |&|\end{pmatrix}=\begin{pmatrix}\frac{1}{2}\\ -\frac{3}{2}\end{pmatrix}  
$$  
$$  
\begin{pmatrix} 1\\0\end{pmatrix}=  
\begin{pmatrix}2x+0y\\ 3x+1y\end{pmatrix}\implies\begin{cases}2x=1\\ 3x+y=0\end{cases}\implies x=\frac{1}{2},y=-\frac{3}{2}  
$$  
$$  
\implies\begin{pmatrix}1\\0\end{pmatrix}=\frac{1}{2}\begin{pmatrix}2\\3\end{pmatrix}-\frac{3}{2}\begin{pmatrix}0\\1\end{pmatrix}\implies [\begin{pmatrix}1\\0\end{pmatrix}]_\mathbb{B}=\begin{pmatrix}\frac{1}{2}\\ -\frac{3}{2}\end{pmatrix}  
$$  
$$  
[\begin{pmatrix}0\\1\end{pmatrix}]_\mathbb{B}=?  
$$  
$$  
\begin{pmatrix}0\\1\end{pmatrix}=0\cdot\begin{pmatrix}2\\3\end{pmatrix}+1\cdot\begin{pmatrix}0\\1\end{pmatrix}\implies [\begin{pmatrix}0\\1\end{pmatrix}]_\mathbb{B}=\begin{pmatrix}0\\1\end{pmatrix}  
$$  
$$  
_\mathbb{B}M_\mathcal{E}=\begin{pmatrix}\frac{1}{2}&0\\ -\frac{3}{2}&1\end{pmatrix}  
$$  
è la matrice del cambiamento di coordinate.  
  
### Endomorfismi  
Se $W=V$, $f:V\to V$ è detto endomorfismo su $V$ (applicazione da $V$ in se stesso).  
Siano $\mathbb{B}$ e $\mathcal{E}$ due basi di $V$.   
Abbiamo due matrici rappresentanti di $f$:  
$$  
_\mathbb{B}M_\mathbb{B}(f)\quad\text{ e }\quad _\mathcal{E}M_\mathcal{E}(f)  
$$  
$$  
_\mathcal{E}M_\mathcal{E}(f)=\ _\mathcal{E}M_\mathbb{B}\cdot _\mathbb{B}M_\mathbb{B}(f)\cdot\ _\mathbb{B}M_\mathcal{E}  
$$  
  
*Esercizio*  
$$  
f_k:\mathbb{R}^2\to\mathbb{R}^2  
$$  
$$  
f_k\begin{pmatrix}x\\ y\end{pmatrix}=\begin{pmatrix}x+2k^2y\\ 2x+y\end{pmatrix}  
$$  
$$  
k\in\mathbb{R}\quad\text{è un parametro}  
$$  
$$  
\begin{align}  
&\boxed{1}\text{ matrice rappresentativa }_\mathcal{E}M_\mathcal{E}(f)\\  
&\boxed{2}\text{ per quali }k,f_k\text{ è iniettiva?}\\  
&\boxed{3}\text{ per quali }k,f_k\text{ è suriettiva?}\\  
&\boxed{4}\text{ per quali }k,f_k\text{ è diagonalizzabile?}\\  
\end{align}  
$$  
  
1)  
$$  
\mathcal{E}=\{\begin{pmatrix}  
1\\0\end{pmatrix},\begin{pmatrix}  
0\\1  
\end{pmatrix}\}\qquad  
\text{base canonica}  
$$  
$$  
A=_\mathcal{E}M_\mathcal{E}(f_k)=\begin{pmatrix}1&2k^2\\ 2&1\end{pmatrix}  
$$  
  
3)  
$f_k$ suriettiva se e solo se  
$$  
\Im(f_k)=\mathbb{R}^2\implies \operatorname{rank}(A)=2  
$$  
Calcoliamo una base del sottospazio $\Im(f_k)$:  
$$  
\Im(f_k)=\{\underline{w}\in\mathbb{R}^2\mid f(\ \underline{v}\ )=\underline{w}\text{ per qualche }\underline{v}\in\mathbb{R}^2\}  
$$  
$$  
f(\ \underline{v}\ )=\underline{w}\iff A\cdot \underline{v}=\underline{w}  
$$  
$$  
\text{dove }A=\begin{pmatrix}  
1&2k^2\\ 2&1  
\end{pmatrix}  
$$  
quindi una base di $\Im(f_k)$ è nient'altro che una base formata dai vettori lineari indipendenti sei vettori colonna di $A$.  
  
Perciò:  
$$  
\dim(\Im(f_k))=\operatorname{rank}(A)  
$$  
$$  
f_k\text{ suriettiva}\begin{align}  
&\iff\dim(\Im(f_k))=2\\  
&\iff\operatorname{rank}(A)=2\\  
\end{align}  
$$  
però rango è massimo se $\det\neq0$.  
$$  
\det A=\det\begin{pmatrix}  
1&2k^2\\ 2&1  
\end{pmatrix}=1-4k^2\neq0  
$$  
$$  
\begin{align}  
&\iff -4k^2\neq -1\\  
&\iff k^2\neq \frac{1}{4}\\  
&\iff k\neq \pm \frac{1}{2}  
\end{align}  
$$  
per cui  
$$  
\operatorname{rank}(A)=2\begin{align}  
&\iff k\neq \pm \frac{1}{2}\\  
&\iff f_k\text{ suriettiva}  
\end{align}  
$$  
e una base di $\Im(f_k)$ è data dalle colonne di $A$.  
  
2)  
$$  
f_k\text{ iniettiva}\iff \ker(f_k)=\{\underline{0}\}  
$$  
utilizziamo il teorema fondamentale dell'algebra lineare:  
$$  
\begin{align}  
\dim V&=\dim(\ker(f_k))+\dim(\Im(f_k))\\  
\dim(\ker(f_k))&=\dim V-\dim(\Im(f_k))\\  
&=2-\dim(\Im(f_k))  
\end{align}  
$$  
abbiamo visto che:  
$$  
\begin{align}  
\dim(\Im(f))=2&\iff k\neq \pm \frac{1}{2}\\  
\dim(\Im(f))=1&\iff k=\pm \frac{1}{2}  
\end{align}  
$$  
$$  
=\begin{cases}  
2-2=0&\text{se }k\neq \pm \frac{1}{2}\\  
2-1=1&\text{se }k=\pm \frac{1}{2}  
\end{cases}  
$$  
$$  
f_k\text{ iniettiva}\iff k\neq \pm \frac{1}{2}  
$$  
  
*In generale:*  
  
1. $f:V\to V$ endo suriettivo, allora è anche iniettivo  
2. $f:V\to V$ endo iniettivo, allora è anche suriettivo  
  
> **Corollario**  
> $f:V\to V$ endomorfismo e sia $A$ una matrice rappresentativa di $f$.  
> Allora:  
  
$$  
\det A\neq 0\iff f\text{ iniettiva}\iff f\text{ suriettiva}  
$$  
  
4)  
$f_k$ è diagonalizzabile?  
$$  
\iff A=\begin{pmatrix} 1&2k^2\\ 2&1\end{pmatrix}\text{ è diagonalizzabile}  
$$  
abbiamo il criterio di diagonalizzazione delle matrici:  
$$  
A\text{ diagonalizzabile}\iff\begin{align}  
&x_A(t)\text{ non ha radici complesse}\\  
&m_A(\lambda)=m_G(\lambda)\quad\forall\ \lambda\text{ autovalore di }A  
\end{align}  
$$  
$$  
A-tI=\begin{pmatrix}  
1-t&2k^2\\ 2&1-t  
\end{pmatrix}  
$$  
$$  
x_A(t)=\det(A-tI)=(1-t)^2-4k^2=t^2-2t+1-4k^2=0  
$$  
troviamo le radici di $x_A(t)$:  
  
$$  
(1-t)^2=4k^2  
$$  
prendiamo le radici quadrate  
$$  
\sqrt{(1-t)^2}=\sqrt{4k^2}=\sqrt{(2k)^2}  
$$  
$$  
\implies |1-t|=|2k|  
$$  
$$  
\implies 1-t=\pm 2k  
$$  
$$  
\implies t=1\pm 2k  
$$  
gli autovalori sono  
$$  
\{1+2k,\ 1-2k\}  
$$  
per $k=0$ gli autovalori coincidono:  
$$  
\{1,\ 1\}  
$$  
vuol dire che la moltiplicazione algebrica è  
$$  
2\to m_A(1)=2  
$$  
per $k\neq0$, ho due autovalori distinti $1+2k$ e $1-2k$, ognuno di moltiplicazione algebrica 1:  
$$  
\begin{align}  
&\to m_a(1+2k)=1\\  
&\to m_a(1-2k)=1  
\end{align}  
$$  
ci sono due casi da studiare: $k=0$ e $k\neq0$.  
In ogni caso $x_A(t)$ non ha radici complesse.  
Oppure che la somma delle moltiplicazioni algebriche degli autovalori è 2.  
Per cui la prima condizione del criterio è vera.  
Ora vediamo le moltiplicazioni geometriche nei due casi.  
  
*Caso 1* $k\neq0$  
$$  
\begin{align}  
&m_a(1+2k)=1\implies m_g(1+2k)=1\\  
&m_a(1-2k)=1\implies m_g(1-2k)=1  
\end{align}  
$$  
le moltiplicazioni coincidono.  
$$  
\implies A\text{ diagonalizzabile per }k\neq0  
$$  
  
*Caso 2* $k=0$  
$$  
m_A(1)=2\qquad A-tI=\begin{pmatrix}  
1-t&0\\  
2&1-t  
\end{pmatrix}  
$$  
$t=1$  
$$  
V_1:\begin{pmatrix}0&0\\2&0\end{pmatrix}\begin{pmatrix}x\\ y\end{pmatrix}=\begin{pmatrix}0\\ 0\end{pmatrix}  
$$  
$$  
\begin{cases}  
0=0\\  
2x=0  
\end{cases}  
\implies x=0  
$$  
$y$ è una variabile libera  
$$  
y=t\qquad t\in\mathbb{R}  
$$  
soluzioni  
$$  
\begin{pmatrix}0\\ t\end{pmatrix}=t\begin{pmatrix}0\\ 1\end{pmatrix}  
$$  
$\{\begin{pmatrix}0\\ 1\end{pmatrix}\}$ è una base di $V_1$.  
$$  
\dim V_1=1\implies m_g(1)=1  
$$  
le molteplicità sono diverse $\implies$ non è diagonalizzabile.  
  
Conclusione:  
$$  
f_k\text{ diagonalizzabile}\iff k\neq0  
$$  
  
**Definizione**  
Diciamo che un endomorfismo $f:V\to V$ è *diagonalizzabile* se esiste una base $\mathbb{B}$ di $V$ tale che la matrice rappresentativa $_\mathbb{B}M_\mathbb{B}(f)$ è diagonale.  
In questo caso, la matrice rappresentativa di $f$ rispetto a qualsiasi altra base è simile a una matrice diagonale.