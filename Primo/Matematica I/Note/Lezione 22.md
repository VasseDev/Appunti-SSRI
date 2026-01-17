---
share: true
---
[Lezione 22: Slides](<Primo/Matematica I/Slides/L22 (09.12.2025).pdf>)  
  
# Spazio vettoriale  
  
Uno spazio vettoriale $V$ su $\mathbb{R}$ è un insieme dotato di due operazioni:  
  
1. Somma di vettori: per ogni $u, v \in V$, esiste un vettore $u + v \in V$.  
2. Moltiplicazione per uno scalare: per ogni $v \in V$ e ogni scalare $a \in \mathbb{R}$, esiste un vettore $a v \in V$.  
  
> **Attenzione**  
> In generale non è definita la moltiplicazione tra due vettori.  
  
Gli elementi di $V$ sono chiamati **vettori**.  
  
*Esempio*  
  
$$  
\mathbb{R}^2 = \{\begin{pmatrix}  
x \\  
y  
\end{pmatrix} \mid x, y \in \mathbb{R}\}  
$$  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} + \begin{pmatrix}  
x' \\  
y'  
\end{pmatrix} = \begin{pmatrix}  
x + x' \\  
y + y'  
\end{pmatrix}\in\mathbb{R}^2  
$$  
  
$$  
k \begin{pmatrix}  
x \\  
y  
\end{pmatrix} = \begin{pmatrix}  
kx \\  
ky  
\end{pmatrix}\in\mathbb{R}^2  
$$  
  
in generale  
  
$$  
\mathbb{R}^n = \{\begin{pmatrix}  
x_1 \\  
x_2 \\  
\vdots \\  
x_n  
\end{pmatrix} \mid x_i \in \mathbb{R} \text{ per } i = 1, 2, \ldots, n\}  
$$  
  
è uno spazio vettoriale.  
  
> *Osservazione*  
> $\begin{pmatrix}x+x' \\ y+y'\end{pmatrix}$ si dice che è combinazione lineare dei vettori $\begin{pmatrix}x \\ y\end{pmatrix}$ e $\begin{pmatrix}x' \\ y'\end{pmatrix}$.  
  
> **Definizione**  
> Una combinazione lineare dei vettori $v_1, v_2, \ldots, v_k \in V$ è un vettore della forma  
  
$$  
c_11 v_1 + c_2 v_2 + \ldots + c_k v_k  
$$  
  
> dove $c_1, c_2, \ldots, c_k \in \mathbb{R}$ sono scalari.  
  
Diciamo che un vettore $v\in V$ è combinazione lineare dei vettori $v_1, v_2, \ldots, v_k$ se esistono scalari $c_1, c_2, \ldots, c_k$ tali che  
  
$$  
v= c_1 v_1 + c_2 v_2 + \ldots + c_k v_k  
$$  
  
Diciamo che i vettori $v_1, v_2, \ldots, v_k$ generano lo spazio vettoriale $V$ se ogni vettore $v\in V$ è combinazione lineare di $v_1, v_2, \ldots, v_k$. Si scrive  
  
$$  
V = \langle v_1, v_2, \ldots, v_k \rangle  
$$  
  
*Esempio*  
  
$\mathbb{R}^2$ è generato dai vettori $\begin{pmatrix}1 \\ 0\end{pmatrix}$ e $\begin{pmatrix}0 \\ 1\end{pmatrix}$.  
Infatti sia $v = \begin{pmatrix}x \\ y\end{pmatrix} \in \mathbb{R}^2$.  
Devo far vedere che $v$ è combinazione lineare di $\begin{pmatrix}1 \\ 0\end{pmatrix}$ e $\begin{pmatrix}0 \\ 1\end{pmatrix}$.  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} = x \begin{pmatrix}  
1 \\  
0  
\end{pmatrix} + y \begin{pmatrix}  
0 \\  
1  
\end{pmatrix}  
$$  
  
finito.  
  
$$  
V = \langle \begin{pmatrix}  
1 \\  
0  
\end{pmatrix}, \begin{pmatrix}  
0 \\  
1  
\end{pmatrix} \rangle  
$$  
  
*Esempio*  
  
$\mathbb{R}^2$. I vettori $\begin{pmatrix}-1\\ 1\end{pmatrix}$ e $\begin{pmatrix}0 \\ 3\end{pmatrix}$ generano $\mathbb{R}^2$?  
Devo far vedere che ogni vettore $v = \begin{pmatrix}x \\ y\end{pmatrix} \in \mathbb{R}^2$ è combinazione lineare di $\begin{pmatrix}-1 \\ 1\end{pmatrix}$ e $\begin{pmatrix}0 \\ 3\end{pmatrix}$.  
Voglio trovare scalari $c_1, c_2 \in \mathbb{R}$ tali che  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} = c_1 \begin{pmatrix}  
-1 \\  
1  
\end{pmatrix} + c_2 \begin{pmatrix}  
0 \\  
3  
\end{pmatrix}  
$$  
  
questo equivale a  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} = \begin{pmatrix}  
-c_1 \\  
c_1 + 3 c_2  
\end{pmatrix}  
$$  
  
questo equivale al sistema  
  
$$  
\begin{cases}  
-c_1 = x \\  
c_1 + 3 c_2 = y  
\end{cases}  
$$  
  
Lo risolvo  
  
$$  
\begin{cases}  
c_1 = -x \\  
3 c_2 = y + x \implies c_2 = \frac{y + x}{3}  
\end{cases}  
$$  
  
In conclusione  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} = -x \begin{pmatrix}  
-1 \\  
1  
\end{pmatrix} + \frac{y + x}{3} \begin{pmatrix}  
0 \\  
3  
\end{pmatrix}  
$$  
  
perciò generano.  
  
*Esempio*  
  
$\mathbb{R}^2$. Il vettore $\begin{pmatrix}1 \\ 0\end{pmatrix}$ da solo genera $\mathbb{R}^2$?  
  
$$  
\begin{pmatrix}  
x \\  
y  
\end{pmatrix} = c \begin{pmatrix}  
1 \\  
0  
\end{pmatrix}\quad\text{per ogni}\quad\begin{pmatrix}  
x \\  
y  
\end{pmatrix}?\quad\text{No!}  
$$  
  
$$  
\begin{pmatrix}  
0 \\  
1  
\end{pmatrix}  
\neq c \begin{pmatrix}  
1 \\  
0  
\end{pmatrix}=\begin{pmatrix}  
c \\  
0  
\end{pmatrix}  
$$  
  
$\begin{pmatrix}0\\ 1\end{pmatrix}$ non è multiplo di $\begin{pmatrix}1 \\ 0\end{pmatrix}$.  
  
$\mathbb{R}^2$ deve essere generato da almeno due vettori.  
  
*Esempio*  
  
$\mathbb{R}^3$. Per qualsiasi $\begin{pmatrix}x \\ y \\ z\end{pmatrix} \in \mathbb{R}^3$ possiamo scrivere la combinazione lineare  
  
$$  
\mathbb{R}\ni\begin{pmatrix}  
x \\  
y \\  
z  
\end{pmatrix} = x \begin{pmatrix}  
1 \\  
0 \\  
0  
\end{pmatrix} + y \begin{pmatrix}  
0 \\  
1 \\  
0  
\end{pmatrix} + z \begin{pmatrix}  
0 \\  
0 \\  
1  
\end{pmatrix}  
$$  
  
$$  
\implies\begin{pmatrix}  
1 \\  
0 \\  
0  
\end{pmatrix}, \begin{pmatrix}  
0 \\  
1 \\  
0  
\end{pmatrix}, \begin{pmatrix}  
0 \\  
0 \\  
1  
\end{pmatrix}  
\quad\text{generano }\mathbb{R}^3  
$$  
  
> In generale $\mathbb{R}^n$ è generato dai vettori  
  
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
  
*Esempio*  
  
L'insieme delle matrici $2 \times 2$ è uno spazio vettoriale  
  
$$  
M(\mathbb{R},2) = \{\begin{pmatrix}  
a & b \\  
c & d  
\end{pmatrix} \mid a, b, c, d \in \mathbb{R}\}  
$$  
  
qual è un sistema di generatori?  
Ogni matrice può scriversi come  
  
$$  
\begin{pmatrix}  
a & b \\  
c & d  
\end{pmatrix} = a \begin{pmatrix}  
1 & 0 \\  
0 & 0  
\end{pmatrix} + b \begin{pmatrix}  
0 & 1 \\  
0 & 0  
\end{pmatrix} + c \begin{pmatrix}  
0 & 0 \\  
1 & 0  
\end{pmatrix} + d \begin{pmatrix}  
0 & 0 \\  
0 & 1  
\end{pmatrix}  
$$  
  
$$  
\implies\begin{pmatrix}  
1 & 0 \\  
0 & 0  
\end{pmatrix}, \begin{pmatrix}  
0 & 1 \\  
0 & 0  
\end{pmatrix}, \begin{pmatrix}  
0 & 0 \\  
1 & 0  
\end{pmatrix}, \begin{pmatrix}  
0 & 0 \\  
0 & 1  
\end{pmatrix}  
\quad\text{generano }M(\mathbb{R},2)  
$$  
  
*Esempio*  
  
Lo spazio dei polinomi di grado $\leq 2$ è uno spazio vettoriale  
  
$$  
\mathbb{R}_2[x] = \{a_0 + a_1 x + a_2 x^2 \mid a_0, a_1, a_2 \in \mathbb{R}\}  
$$  
  
Qual è un sistema di generatori?  
  
$$  
1,x,x^2\quad\text{generano }\mathbb{R}_2[x]  
$$  
  
## Dipendenza lineare  
  
$$  
\begin{pmatrix}  
1 \\  
1  
\end{pmatrix}, \begin{pmatrix}  
2 \\  
2  
\end{pmatrix}  
$$  
  
sono vettori linearmente dipendenti:  
  
$$  
\begin{pmatrix}  
2 \\  
2  
\end{pmatrix} = 2 \begin{pmatrix}  
1 \\  
1  
\end{pmatrix}  
$$  
  
cioè uno dei vettori è combinazione lineare dell'altro.  
  
_Esempio_  
  
$$  
\begin{pmatrix}  
1 \\  
1  
\end{pmatrix}, \begin{pmatrix}  
2 \\  
3  
\end{pmatrix}, \begin{pmatrix}  
3 \\  
4  
\end{pmatrix}  
$$  
  
sono linearmente dipendenti. Perché?  
  
$$  
1\begin{pmatrix}  
1 \\  
1  
\end{pmatrix} + 1\begin{pmatrix}  
2 \\  
3  
\end{pmatrix} -1\begin{pmatrix}  
3 \\  
4  
\end{pmatrix} = \begin{pmatrix}  
0 \\  
0  
\end{pmatrix}  
$$  
  
cioè esiste una combinazione lineare dei 3 vettori non banale (pesi non tutti nulli) che uguaglia il vettore nullo.  
  
> **Definizione**  
> I vettori $v_1, v_2, \ldots, v_k \in V$ sono linearmente dipendenti se esistono scalari $c_1, c_2, \ldots, c_k$, non tutti nulli, tali che  
  
$$  
c_1\underline{v}_1 + c_2 \underline{v}_2 + \ldots + c_k \underline{v}_k = \underline{0}  
$$  
  
a parole: esiste una combinazione lineare non banale dei vettori che dà il vettore nullo.  
  
Altrimenti i vettori sono detti **linearmente indipendenti**.  
  
*Esempio*  
  
$\mathbb{R}^2$. I vettori $\begin{pmatrix}1 \\ 0\end{pmatrix}$ e $\begin{pmatrix}0 \\ 1\end{pmatrix}$ sono linearmente indipendenti.  
Bisogna far vedere che l'unica loro combinazione lineare che dà il vettore nullo è quella banale.  
  
Siano $c_1, c_2 \in \mathbb{R}$ tali che  
  
$$  
c_1 \begin{pmatrix}  
1 \\  
0  
\end{pmatrix} + c_2 \begin{pmatrix}  
0 \\  
1  
\end{pmatrix} = \begin{pmatrix}  
0 \\  
0  
\end{pmatrix}  
$$  
  
equivale a   
  
$$  
\begin{pmatrix}  
c_1 \\  
c_2  
\end{pmatrix} = \begin{pmatrix}  
0 \\  
0  
\end{pmatrix}  
\iff  
c_1 = 0 \text{ e } c_2 = 0  
$$  
  
ossia la combinazione è banale  
$\implies\begin{pmatrix}1 \\ 0\end{pmatrix}$ e $\begin{pmatrix}0 \\ 1\end{pmatrix}$ sono linearmente indipendenti.  
  
> *Osservazione*  
> La definizione di lineare dipendenza dei vettori $v_1, v_2, \ldots, v_k$ con $k \geq 2$ è equivale a dire che uno dei vettori è combinazione lineare degli altri.  
  
> *Osservazione*  
> Un vettore singolo $\underline{v}$ è linearmente dipendente se e solo se $\underline{v} \neq \underline{0}$.  
  
*Esempi*  
  
$$  
\mathbb{R}^3.\quad\begin{pmatrix}1 \\ 0 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 0 \\ 1\end{pmatrix}\quad\text{sono linearmente indipendenti.}  
$$  
  
$$  
\mathbb{R}^n.\quad\underline{e}_1, \underline{e}_2, \ldots, \underline{e}_n\quad\text{sono linearmente indipendenti.}  
$$  
  
**Esercizio**  
  
$$  
\mathbb{R}^3  
$$  
  
$$  
\underline{v}_1 = \begin{pmatrix}  
0 \\  
1 \\  
2  
\end{pmatrix},\quad \underline{v}_2 = \begin{pmatrix}  
-1 \\  
2 \\  
1  
\end{pmatrix},\quad \underline{v}_3 = \begin{pmatrix}  
2 \\  
-1 \\  
-1  
\end{pmatrix},\quad \underline{v}_4 = \begin{pmatrix}  
1 \\  
5 \\  
1  
\end{pmatrix}  
$$  
  
determinare il massimo numero di vettori linearmente indipendenti.  
  
Gauss-Jordan:  
  
$$  
\left(\begin{array}{cccc}  
0 & -1 & 2 & 1 \\  
1 & 2 & -1 & 5 \\  
2 & 1 & -1 & 1  
\end{array}\right)  
\underrightarrow{R_1 \leftrightarrow R_2}  
\left(\begin{array}{cccc}  
1 & 2 & -1 & 5 \\  
0 & -1 & 2 & 1 \\  
2 & 1 & -1 & 1  
\end{array}\right)  
$$  
$$  
\underrightarrow{R_3\to R_3 - 2R_1}  
\left(\begin{array}{cccc}  
1 & 2 & -1 & 5 \\  
0 & -1 & 2 & 1 \\  
0 & -3 & 1 & -9  
\end{array}\right)  
\underrightarrow{R_3 \to R_3 - 3 R_2}  
\left(\begin{array}{cccc}  
1 & 2 & -1 & 5 \\  
0 & -1 & 2 & 1 \\  
0 & 0 & -5 & -12  
\end{array}\right)  
$$  
  
pivot sono in colonne 1, 2, 3.  
Questo vuol dire che i vettori $\underline{v}_1, \underline{v}_2, \underline{v}_3$ sono linearmente indipendenti.  
Il quarto vettore $\underline{v}_4$ è linearmente dipendente dagli altri tre.  
  
> I vettori corrispondenti ai pivot sono indipendenti, altrimenti avrei delle variabili libere e quindi pesi non nulli.  
> Il numero di pivot è il massimo numero di vettori linearmente indipendenti.  
  
