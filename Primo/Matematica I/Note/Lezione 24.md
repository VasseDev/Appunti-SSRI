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
  
