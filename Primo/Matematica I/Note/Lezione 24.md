---
share: true
---
[Lezione 24: Slides](<Primo/Matematica I/Slides/L24 (16.12.2025).pdf>)  
  
# Diagonalizzazione di matrici  
  
$$  
\mathbb{K}=\text{campo}\qquad\text{Esempio: }\mathbb{K}=\mathbb{R},\mathbb{C}  
$$  
  
$$  
\mathbb{K}^n=\left\{  
\begin{pmatrix}  
x_1\\  
x_2\\  
\vdots\\  
x_n  
\end{pmatrix}:x_i\in\mathbb{K}  
\right\}  
$$  
  
*Esempio:* $\mathbb{R}^2,\mathbb{R}^3,\mathbb{R}^n,\mathbb{C}^2$  
  
## Autovettore e autovalore  
  
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
  
> *Osservazione*  
> Il vettore nullo non è mai autovettore per definizione.  
  
> *Domanda*  
> Come si trovano gli autovalori e autovettori?  
  
## Polinomio caratteristico  
  
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
  
> *Definizione*  
> La *molteplicità algebrica* di un autovalore $\lambda$ è la molteplicità dello zero $\lambda$ del polinomio caratteristico $\chi_A(t)$.  
> Si indica con $m_a(\lambda)$.  
  
*Esempio*  
$$  
\chi_A(t)=(t-1)^3t(t-2)^2  
$$  
  
gli zeri sono: $1,0,2$  
che sono gli autovalori  
  
$$  
m_a(1)=3\quad m_a(0)=1\quad m_a(2)=2  
$$  
  
## Calcolo degli autovettori  
  
Dato $\lambda$ un autovalore di $A$ definiamo *l'autospazio relativo all'autovalore* $\lambda$:  
  
$$  
V_\lambda=\left\{\underline{v}=\begin{pmatrix}  
v_1\\ v_2\\ \vdots\\ v_N \end{pmatrix}\in\mathbb{K}^N:A\underline{v}=\lambda \underline{v}\right\}  
$$  
  
ossia l'insieme degli autovettori relativi a $\lambda$ più il vettore nullo.  
  
$$  
=\{\underline{v}\in\mathbb{K}^N\mid A\underline{v}- V\underline{v}=\underline{0}\}=\{ \underline{v}\in\mathbb{K}^N\mid (A-\lambda I)\underline{v}=\underline{0}\}  
$$  
  
*Esercizio*  
$V_\lambda$ è un sottospazio.  
  
> **Definizione**  
> La molteplicità geometrica dell'autovalore $\lambda$ è la dimensione di $V_\lambda$. Si indica con  
  
$$  
m_g(\lambda)=\dim(V_\lambda)  
$$  
  
> *Osservazione*  
> $\dim(V_\lambda)\geq1\quad\forall\ \lambda$ autovalore di $A$.  
> (perché autovalore implica esistenza di un autovettore).  
  
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
  
## Diagonalizzazione  
  
Le matrici più semplici sono quelle diagonali  
  
$$  
\begin{pmatrix}  
d_1 & 0 & \cdots & 0\\  
0 & d_2 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & d_N  
\end{pmatrix}  
$$  
  
non tutte le matrici sono diagonali, però in realtà la maggior parte sono diagonalizzabili, cioè ammettono una forma diagonale:  
  
$$  
\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix}  
\quad\text{ha come forma diagonale}\quad  
\begin{pmatrix}  
3 & 0\\  
0 & -3  
\end{pmatrix}  
$$  
  
lavorare con $\begin{pmatrix}3 & 0\\ 0 & -3\end{pmatrix}$ è più semplice che lavorare con $\begin{pmatrix}1 & 2\\ 4 & -1\end{pmatrix}$.  
  
> **Spoiler**  
> Non tutte le matrici hanno una forma diagonale.  
  
> **Definizione**  
> Due matrici $A,B\in M(\mathbb{K},N\times N)$ si dicono *simili* se esiste una matrice invertibile tale che  
  
$$  
B=C^{-1}\cdot A\cdot C  
$$  
  
> **Definizione**  
> Una matrice $A$ è diagonalizzabile se è simile ad una matrice diagonale  
  
$$  
\land=\begin{pmatrix}  
\lambda_1 & 0 & \cdots & 0\\  
0 & \lambda_2 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & \lambda_N  
\end{pmatrix}  
$$  
  
in questo caso $\land$ è detta forma diagonale di $A$.  
  
Cerchiamo di capire quando $A$ è diagonalizzabile.  
  
$$  
A\text{ diagonalizzabile}\iff A\text{ è simile a }\land=\begin{pmatrix}  
\lambda_1 & 0 & \cdots & 0\\  
0 & \lambda_2 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & \lambda_N  
\end{pmatrix}  
$$  
  
$$  
\iff \exists\ C=\begin{pmatrix}  
\mid & \mid & & \mid\\  
\underline{v_1} & \underline{v_2} & \cdots & \underline{v_N}\\  
\mid & \mid & & \mid  
\end{pmatrix}\text{ matrice invertibile }N\times N  
$$  
  
$$  
\text{tale che}\quad C^{-1}AC=\land  
$$  
  
$$  
\iff C\cdot(C^{-1}AC)=C\land  
$$  
  
$$  
\iff AC=C\land  
$$  
  
$$  
\iff A\begin{pmatrix}  
\mid & \mid & & \mid\\  
\underline{v_1} & \underline{v_2} & \cdots & \underline{v_N}\\  
\mid & \mid & & \mid  
\end{pmatrix}=\begin{pmatrix}  
\mid & \mid & & \mid\\  
\underline{v_1} & \underline{v_2} & \cdots & \underline{v_N}\\  
\mid & \mid & & \mid  
\end{pmatrix}\begin{pmatrix}  
\lambda_1 & 0 & \cdots & 0\\  
0 & \lambda_2 & \cdots & 0\\  
\vdots & \vdots & \ddots & \vdots\\  
0 & 0 & \cdots & \lambda_N  
\end{pmatrix}  
$$  
  
$$  
\iff\begin{pmatrix}  
\mid & \mid & & \mid\\  
A\underline{v_1} & A\underline{v_2} & \cdots & A\underline{v_N}\\  
\mid & \mid & & \mid  
\end{pmatrix}=\begin{pmatrix}  
\mid & \mid & & \mid\\  
\lambda_1\underline{v_1} & \lambda_2\underline{v_2} & \cdots & \lambda_N\underline{v_N}\\  
\mid & \mid & & \mid  
\end{pmatrix}  
$$  
  
$$  
\iff A\underline{v_i}=\lambda_i\underline{v_i},\quad i=1,2,\ldots,N  
$$  
  
$$  
\iff\{\underline{v_1},\underline{v_2},\ldots,\underline{v_N}\}\text{ è una base di autovettori e }\lambda_1,\lambda_2,\dots,\lambda_N\text{ autovalori di }A.  
$$  
  
Quindi se $A$ è diagonalizzabile la sua forma diagonale è composta dagli autovalori di $A$ e inoltre la matrice diagonalizzante $C$, quella per cui  
  
$$  
C^{-1}AC=\land,  
$$  
  
è composta da una base di autovettori.  
  
**Riassumendo:**  
$A$ diagonalizzabile  
se e solo se esiste una base di autovettori per $A$.  
  
### Criteri di diagonalizzabilità  
  
SU $\mathbb{K}=\mathbb{R}$ si traduce in:  
  
$A$ diagonalizzabile  
  
$$  
\iff  
\begin{cases}  
\text{la somma delle molteplicità}\\  
\text{algebriche degli autovalori}\\  
\text{è uguale a } N \text{ e}\\  
m_a(\lambda_)=m_g(\lambda_)\text{ per}\\  
\text{ogni autovalore }\lambda.  
\end{cases}  
$$  
  
su $\mathbb{K}=\mathbb{C}$ si traduce in:  
  
$A$ diagonalizzabile  
  
$$  
\iff m_A(\lambda)=m_g(\lambda)\quad\forall\ \lambda\text{ autovalore di }A.  
$$  
  
**Motivazione dei criteri**  
  
1. Autovettori corrispondenti a autovalori distinti solo linearmente indipendenti. Quindi l'unione di due basi di autospazi distinti è un insieme di vettori linearmente indipendenti.  
2. Se $\lambda$ autovalore $1\leq m_g(\lambda)\leq m_a(\lambda)$.  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
1 & 2\\  
4 & -1  
\end{pmatrix},\quad \mathbb{K}=\mathbb{R}  
$$  
  
è diagonalizzabile? Applichiamo il criterio.  
  
$$  
\chi_A(t)=t^2-9=(t-3)(t+3)  
$$  
  
Autovalori:  
  
$$  
\lambda_1=3\quad\text{e}\quad\lambda_2=-3  
$$  
  
  
  
| molteplicità algebrica      | $m_A(3)=1$          | $m_A(-3)=1$             |  
| --------------------------- | ------------------- | ----------------------- |  
| **molteplicità geometrica** | $\dim V_3=1=m_G(3)$ | $\dim V_{-3}=1=m_G(-3)$ |  
  
$$  
m_A(3)=m_G(3)\qquad m_A(-3)=m_G(-3)  
$$  
  
le molteplicità algebriche/geometriche di ogni autovalore coincidono  
$\implies$ valgono entrambe le condizioni del criterio  
$\implies A$ è diagonalizzabile.  
$\implies$ cioè ammette una forma diagonale  
  
che è  
  
$$  
\land=\begin{pmatrix}  
3 & 0\\  
0 & -3  
\end{pmatrix}  
$$  
  
(formata dagli autovalori)  
  
e la matrice diagonalizzante  
  
$$  
C=\begin{pmatrix}  
1 & -\frac{1}{2}\\  
1 & 1  
\end{pmatrix}  
\qquad\begin{align}  
&V_3=\left\langle\begin{pmatrix}  
1\\ 1  
\end{pmatrix}\right\rangle\\  
&V_{-3}=\left\langle\begin{pmatrix}  
-\frac{1}{2}\\ 1  
\end{pmatrix}\right\rangle  
\end{align}  
$$  
  
cioè vale  
  
$$  
C^{-1}AC=\land  
$$