---
share: true
---
  
[Lezione 26: Slides](<Primo/Matematica I/Slides/L26 (23.12.2025).pdf>)  
  
# Coordinate  
  
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
  
*Esempio 4*  
  
$\mathbb{R}[x]\leq2$ polinomi di grado al più 2.  
  
Fissiamo una base  
  
$$  
\mathbb{B}=\{1,x,x^2\}  
$$  
  
$$  
p(x)=-2+3x+4x^2\quad\in\mathbb{R}[x]\leq2  
$$  
  
$$  
[p(x)]_\mathbb{B}=\begin{pmatrix}-2\\ 3\\ 4\end{pmatrix}\in\mathbb{R}^3  
$$  
  
$$  
-2+3x+4x^2=-2\cdot1+3\cdot x+4\cdot x^2  
$$  
  
*Esercizio*  
  
$$  
\mathbb{R}[x]\leq2\qquad\mathbb{B}=\{x^2+1,x^2,x^2-1\}  
$$  
  
$$  
[-2+3x+4x^2]_\mathbb{B}=\begin{pmatrix}4\\ 3\\ 1\end{pmatrix}  
$$  
  
le basi sono ordinate  
  
$$  
-2+3x+4x^2=4\cdot x^2+3\cdot x+(-2)\cdot1  
$$  
  
## Applicazione delle coordinate  
  
$V$ con base $\mathbb{B}$, $\dim V=N$.  
Definiamo l'applicazione delle coordinate (rispetto a $\mathbb{B}$)  
  
$$  
\varphi_\mathbb{B}:  
\begin{align}  
V&\to \mathbb{R}^n\\  
\underline{v}&\to [\ \underline{v}\ ]_\mathbb{B}  
\end{align}  
$$  
  
$\varphi_\mathbb{B}$ è lineare ed un isomorfismo.  
  
> Quindi lavorare in $V$ equivale a lavorare in $\mathbb{R}^n$ tramite l'applicazione delle coordinate, che è più semplice.  
  
Ogni spazio vettoriale $V$ di dimensione $n$ è isomorfo a $\mathbb{R}^n$.  
  
> **Corollario**  
> Due spazi vettoriali $V$ e $W$ della stessa dimensione, diciamo $n$, sono isomorfi, perché entrambi isomorfi a $\mathbb{R}^n$.  
  
![Screenshot 2026-01-26 alle 18.46.26](../../../Immagini/Screenshot%202026-01-26%20alle%2018.46.26.png)  
  
## Matrice del cambiamento di coordinate  
  
$V$ fissiamo due basi   
  
$$  
\begin{align}  
&\mathbb{B}=\{\underline{v_1},\underline{v_2},\ldots,\underline{v_n}\}\\  
&\mathcal{E}=\{\underline{w_1},\underline{w_2},\ldots,\underline{w_n}\}  
\end{align}  
$$  
  
In particolare $\dim V=n$.  
  
Ogni vettore $\underline{v}\in V$ ammette due vettori coordinate:  
  
$$  
[\underline{v}]_\mathbb{B}\quad\text{ e }\quad[\underline{v}]_\mathcal{E}  
$$  
  
esiste una relazione tra questi due vettori?  
  
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
  
# Applicazioni lineari  
  
$$  
f:V\to W  
$$  
  
funzione tra due spazi vettoriali.  
  
Si dice che $f$ è lineare se rispetta la somma e la moltiplicazione per uno scalare:  
  
$$  
\begin{align}  
&\boxed{1}\ f(\underline{v_1}+\underline{v_2})=f(\underline{v_1})+f(\underline{v_2})\quad\forall\ \underline{v_1},\underline{v_2}\in V\\  
&\boxed{2}\ f(k\underline{v})=k f(\underline{v})\quad\forall\ k\in \mathbb{R},\forall\ \underline{v}\in V  
\end{align}  
$$  
  
se $f$ è lineare, allora  
  
$$  
f:V\to W  
$$  
  
$$  
\ker(f)=\{\underline{v}\in V\mid f(\underline{v})=\underline{0}_W\}\subset V  
$$  
  
$$  
\Im(f)=\{\underline{w}\in W\mid\exists\ \underline{v}\in V:f(\underline{v})=\underline{w}\}\subset W  
$$  
  
![Screenshot 2026-01-26 alle 19.54.52](../../../Immagini/Screenshot%202026-01-26%20alle%2019.54.52.png)  
  
> ker = kernel = nucleo  
  
**Teorema fondamentale dell'algebra lineare**  
  
$$  
\dim V= \dim(\ker(f))+\dim(\Im(f))  
$$  
  
**Caratterizzazioni**  
  
$$  
f:V\to W  
$$  
  
lineare.  
  
$$  
f\text{ iniettiva}\iff \ker(f)=\{\underline{0}_V\}\iff \dim(\ker(f))=0  
$$  
  
$$  
f\text{ suriettiva}\iff \Im(f)=W\iff \dim(\Im(f))=\dim(W)  
$$  
  
## Matrice rappresentativa  
  
$f:V\to W$ applicazione lineare.  
  
$$  
\mathbb{B}=\{\underline{v_1},\underline{v_2},\ldots,\underline{v_n}\}\text{ base di }V  
$$  
  
$$  
\mathcal{E}=\{\underline{w_1},\underline{w_2},\ldots,\underline{w_m}\}\text{ base di }W  
$$  
  
Definiamo la matrice rappresentativa di $f$ rispetto alle basi $\mathbb{B}$ in dominio e $\mathcal{E}$ in codominio come  
  
$$  
_\mathcal{E}M_\mathbb{B}(f)=\begin{pmatrix}|&|& &|\\ [f(\underline{v_1})]_\mathcal{E}&[f(\underline{v_2})]_\mathcal{E}&\ldots&[f(\underline{v_n})]_\mathcal{E}\\ |&|& &|\end{pmatrix}  
$$  
  
**Proprietà**  
  
$_\mathcal{E}M_\mathbb{B}(f)$ trasforma le coordinate di un vettore $\underline{v}\in V$ rispetto alla base $\mathbb{B}$ nelle coordinate di $f(\underline{v})\in W$ rispetto alla base $\mathcal{E}$, cioè  
  
$$  
[f(\underline{v})]_\mathcal{E}=_\mathcal{E}M_\mathbb{B}(f)\cdot[\underline{v}]_\mathbb{B}\quad\forall\ \underline{v}\in V  
$$  
  
*Esempio*  
  
$$  
f:\mathbb{R}^2\to\mathbb{R}^2\quad f\begin{pmatrix}x\\ y\end{pmatrix}=\begin{pmatrix}x+2y\\ 2x+y\end{pmatrix}  
$$  
  
è lineare.  
  
Fissiamo la base canonica $\mathcal{E}$ in dominio e codominio.  
  
Scriviamo $_\mathcal{E}M_\mathcal{E}(f)$:  
  
$$  
_\mathcal{E}M_\mathcal{E}(f)=\begin{pmatrix}|&|\\ [f(\begin{pmatrix}1\\0\end{pmatrix})]_\mathcal{E}&[f(\begin{pmatrix}0\\1\end{pmatrix})]_\mathcal{E}\\ |&|\end{pmatrix}  
$$  
  
$$  
=f(\begin{pmatrix}1\\0\end{pmatrix})=\begin{pmatrix}1\\2\end{pmatrix}\quad\implies\quad [f(\begin{pmatrix}1\\0\end{pmatrix})]_\mathcal{E}=\begin{pmatrix}1\\2\end{pmatrix}  
$$  
  
$$  
f(\begin{pmatrix}0\\1\end{pmatrix})=\begin{pmatrix}2\\1\end{pmatrix}\quad\implies\quad [f(\begin{pmatrix}0\\1\end{pmatrix})]_\mathcal{E}=\begin{pmatrix}2\\1\end{pmatrix}  
$$  
  
$$  
_\mathcal{E}M_\mathcal{E}(f)=\begin{pmatrix}1&2\\ 2&1\end{pmatrix}  
$$  
  
Ricordiamo: coordinate rispetto alla base canonica sono i vettori stessi.  
  
*Esempio*  
  
$$  
f:\mathbb{R}^2\to\mathbb{R}^2\quad f\begin{pmatrix}x\\ y\end{pmatrix}=\begin{pmatrix}2x+y\\ x+2y\end{pmatrix}  
$$  
  
prendiamo la base  
  
$$  
\mathbb{B}=\left\{\begin{pmatrix}-1\\1\end{pmatrix},\begin{pmatrix}-2\\1\end{pmatrix}\right\}  
$$  
  
in dominio, e la base canonica  
  
$$  
\mathcal{E}=\left\{\begin{pmatrix}1\\0\end{pmatrix},\begin{pmatrix}0\\1\end{pmatrix}\right\}  
$$  
  
in codominio.  
  
Scriviamo $_\mathcal{E}M_\mathbb{B}(f)$:  
  
$$  
_\mathcal{E}M_\mathbb{B}(f)=\begin{pmatrix}|&|\\ [f(\begin{pmatrix}-1\\1\end{pmatrix})]_\mathcal{E}&[f(\begin{pmatrix}-2\\1\end{pmatrix})]_\mathcal{E}\\ |&|\end{pmatrix}  
$$  
$$  
\begin{pmatrix}|&|\\ [f(\begin{pmatrix}-1\\1\end{pmatrix})]_\mathcal{E}&[f(\begin{pmatrix}-2\\1\end{pmatrix})]_\mathcal{E}\\ |&|\end{pmatrix}=\begin{pmatrix}  
-1& -3\\  
1& 0  
\end{pmatrix}  
$$  
  
## Endomorfismi  
  
Se $W=V$, $f:V\to V$ è detto endomorfismo su $V$ (applicazione da $V$ in se stesso).  
  
Siano $\mathbb{B}$ e $\mathcal{E}$ due basi di $V$.   
Abbiamo due matrici rappresentanti di $f$:  
  
$$  
_\mathbb{B}M_\mathbb{B}(f)\quad\text{ e }\quad _\mathcal{E}M_\mathcal{E}(f)  
$$  
  
Esiste una relazione tra queste? **Sì**  
  
$$  
_\mathcal{E}M_\mathcal{E}(f)=\ _\mathcal{E}M_\mathbb{B}\cdot _\mathbb{B}M_\mathbb{B}(f)\cdot\ (_\mathcal{E}M_\mathbb{B})^{-1}  
$$  
  
si ha la formula: $_\mathcal{E}M_\mathbb{B}$ è invertibile e $_\mathcal{E}M_\mathbb{B}^{-1}=_\mathbb{B}M_\mathcal{E}$.  
  
Otteniamo:  
  
$$  
_\mathcal{E}M_\mathcal{E}(f)=\ _\mathcal{E}M_\mathbb{B}\cdot _\mathbb{B}M_\mathbb{B}(f)\cdot\ _\mathbb{B}M_\mathcal{E}  
$$  
  
detta formula di cambiamento delle matrici rappresentative degli endomorfismi.  
  
In particolare:  
  
Le matrici rappresentative di un endomorfismo rispetto a basi diverse sono simili.  
  
> **Ricordiamo**  
> Matrici $A$ e $B$ sono simili se $\exists\ C$ invertibile tale che $B=CAC^{-1}$.  
  
**Definizione**  
  
Diciamo che un endomorfismo $f:V\to V$ è *diagonalizzabile* se esiste una base $\mathbb{B}$ di $V$ tale che la matrice rappresentativa $_\mathbb{B}M_\mathbb{B}(f)$ è diagonale.  
In questo caso, la matrice rappresentativa di $f$ rispetto a qualsiasi altra base è simile a una matrice diagonale.  
  
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
  
## Rango  
  
Il rango di una matrice $A$ è anche uguale al massimo ordine di un minore non nullo.  
  
Un minore di ordine $k$ è il determinante di una sottomatrice formata da $k$ righe e $k$ colonne di $A$.  
  
$$  
\begin{pmatrix}  
1 & 0 & 0\\  
0 & 1 & 1\\  
0 & 2 & 2  
\end{pmatrix}  
\qquad  
\det\begin{pmatrix}  
1 & 0\\  
0 & 1  
\end{pmatrix}=1\neq0  
$$  
  
ordine minore $2$.  
  
$$  
\det\begin{pmatrix}  
1 & 0 & 0\\  
0 & 1 & 1\\  
0 & 2 & 2  
\end{pmatrix}=0  
$$  
  
$3\times3$ minore nullo.  
  
$\implies$ ordine minore non nullo è $2$.  
  
*Esempio*  
  
$$  
A=\begin{pmatrix}  
0 & k+1\\  
-k+2 & 1\\  
-k+3 & k-1  
\end{pmatrix}  
$$  
  
$$  
|1|\neq0\implies \operatorname{rank}(A)\geq1  
$$  
  
$$  
\det\begin{pmatrix}  
0 & k+1\\  
-k+2 & 1  
\end{pmatrix}=k^2-2k-1\neq0  
$$  
  
allora $\operatorname{rank}(A)=2$ (ossia quando $k\neq-1,2$).  
  
Se $k=-1$  
  
$$  
A=\begin{pmatrix}  
0 & 0\\  
3 & 1\\  
4 & -2  
\end{pmatrix}\qquad  
\operatorname{rank}(A)=2  
$$  
  
Se $k=2$  
  
$$  
A=\begin{pmatrix}  
0 & 3\\  
0 & 1\\  
1 & 1  
\end{pmatrix}\qquad  
\operatorname{rank}(A)=2  
$$  
  
