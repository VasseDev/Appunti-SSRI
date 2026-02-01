---
share: true
---
[Lezione 23: Slides](<Primo/Matematica I/Slides/L23 (11.12.2025).pdf>)  
  
# Spazi vettoriali  
  
> **Definizione**  
> Una **base** di uno spazio vettoriale $V$ è un insieme di vettori $\{v_1, v_2, \ldots, v_n\}$ che genera $V$ e i cui vettori sono linearmente indipendenti.  
  
*Esempi*  
  
$\mathbb{R}^2.\qquad\{\begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1\end{pmatrix}\}$ è una base di $\mathbb{R}^2$.  
  
Generano $+$ sono linearmente indipendenti.   
$\dim(\mathbb{R}^2) = 2$.  
  
$\mathbb{R}^3.\qquad\{\begin{pmatrix}1 \\ 0 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 0 \\ 1\end{pmatrix}\}$ è una base di $\mathbb{R}^3$.  
  
Generano $+$ sono linearmente indipendenti.  
$\dim(\mathbb{R}^3) = 3$.  
  
$\mathbb{R}^n.\qquad\{\begin{pmatrix}1 \\ 0 \\ \vdots \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ \vdots \\ 0\end{pmatrix}, \ldots, \begin{pmatrix}0 \\ 0 \\ \vdots \\ 1\end{pmatrix}\}$ è una base di $\mathbb{R}^n$. $\dim(\mathbb{R}^n) = n$.  
  
Questa è una base "speciale" formata dai vettori canonici, detta **base canonica** di $\mathbb{R}^n$.  
  
---  
  
$$  
M(\mathbb{R},2)=\{\begin{pmatrix}  
a & b \\  
c & d  
\end{pmatrix} \mid a,b,c,d \in \mathbb{R}\}\qquad  
\dim(M(\mathbb{R},2))=4  
$$  
  
$$  
\{\begin{pmatrix} 1 & 0 \\ 0 & 0 \end{pmatrix},  
\begin{pmatrix} 0 & 1 \\ 0 & 0 \end{pmatrix},  
\begin{pmatrix} 0 & 0 \\ 1 & 0 \end{pmatrix},  
\begin{pmatrix} 0 & 0 \\ 0 & 1 \end{pmatrix}\}  
$$  
  
è una base di $M(\mathbb{R},2)$.  
  
---  
  
$$  
\mathbb{R}_2[x]=\{a+bx+cx^2\}\qquad\dim(\mathbb{R}_2[x])=3  
$$  
  
$$  
\{1, x, x^2\}\quad\text{è una base di }\mathbb{R}_2[x]  
$$  
  
---  
  
## Teorema di equicardinalità delle basi  
  
Le basi di uno spazio vettoriale hanno lo stesso numero di elementi, questo numero è detto dimensione di $V$ e si indica con $\dim(V)$.  
  
In questo corso consideriamo solamente spazi generati da un numero finito di vettori.  
  
Esistono spazi vettoriali di dimensione infinita.  
  
$$  
\mathbb{R}^\infty=\{(x_1,x_2,x_3,\ldots) \mid x_i \in \mathbb{R} \text{ per ogni } i \in \mathbb{N}\})  
$$  
  
*Esempio*  
$\mathbb{R}^2$ ha una base $\begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1\end{pmatrix}$ di cardinalità $2$.  
  
Ora vediamo che anche  
  
$$  
\{\begin{pmatrix}-1 \\ 1\end{pmatrix}, \begin{pmatrix}3 \\ 0\end{pmatrix}\}  
$$  
  
forma una base.  
  
Bisogna far vedere che generano e sono linearmente indipendenti.  
  
*Esempio*  
$$  
\mathbb{R}^2\qquad\{\begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1\end{pmatrix}, \begin{pmatrix}1 \\ 1\end{pmatrix}\}  
$$  
  
è una base? no perché sono linearmente dipendenti.  
  
Si può far vedere che $\dim V$ è anche uguale al numero minimo di vettori per generare $V$.  
  
oppure  
  
Al numero massimo di vettori che possono essere linearmente indipendenti.  
  
*Esempio*  
$3$ vettori di $\mathbb{R}^2$ sono necessariamente linearmente dipendenti.  
  
Infatti il rango di  
  
$$  
\begin{pmatrix}  
x_1 & x_2 & x_3 \\  
y_1 & y_2 & y_3  
\end{pmatrix}  
$$  
  
mi dà il numero di vettori indipendenti, che è al più $2$.  
  
Come conseguenza abbiamo che se $\dim V = N$ allora  
  
- $N$ vettori che generano $V$ sono anche linearmente indipendenti (sono una base)  
- $N$ vettori linearmente indipendenti generano $V$ (sono una base)  
  
> **Corollario**  
> $N$ vettori $\underline v_1, \underline v_2, \ldots, \underline v_N$ di $\mathbb{R}^N$ sono una base  
  
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
  
*Esempio*  
$$  
\mathbb{R}^3\qquad\{\begin{pmatrix}1 \\ -1 \\ 2\end{pmatrix},  
\begin{pmatrix}0 \\ 1 \\ 1\end{pmatrix},  
\begin{pmatrix}-4 \\ 1 \\ 0\end{pmatrix}\}  
$$  
  
è una base?  
In generale bisogna far vedere che sono linearmente indipendenti e che generano.  
Però dato che sappiamo che  
  
$$  
\dim(\mathbb{R}^3) = 3  
$$  
  
è sufficiente far vedere che sono linearmente indipendenti.  
E dal momento che sono in numero massimo, automaticamente generano.  
  
Mostriamo che sono linearmente indipendenti usando Gauss-Jordan.  
  
$$  
\left(\begin{array}{ccc}  
1 & 0 & -4 \\  
-1 & 1 & 1 \\  
2 & 1 & 0  
\end{array}\right)  
\longrightarrow  
\left(\begin{array}{ccc}  
1 & 0 & -4 \\  
0 & 1 & -3 \\  
0 & 1 & 8  
\end{array}\right)  
\longrightarrow  
\left(\begin{array}{ccc}  
\underline{1} & 0 & -4 \\  
0 & \underline{1} & -3 \\  
0 & 0 & \underline{11}  
\end{array}\right)  
$$  
  
pivot in colonne $1,2,3$  
$\implies$ i vettori iniziali corrispondono alle colonne $1,2,3$ sono linearmente indipendenti.  
$\implies$ sono tutti e $3$ linearmente indipendenti.  
$\implies$ sono una base di $\mathbb{R}^3$.  
  
## Estrazione di una base  
  
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
  
## Completamento a una base  
  
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
  
---  
  
## Sottospazi  
  
Un sottoinsieme non vuoto $W$ di uno spazio vettoriale $V$ è detto *sottospazio* se:  
  
1. $W$ è chiuso rispetto alla somma  
  
$$  
(\underline w_1, \underline w_2 \in W \implies \underline w_1 + \underline w_2 \in W)  
$$  
  
2. $W$ è chiuso rispetto alla moltiplicazione per scalari  
  
$$  
(\underline w \in W, c \in \mathbb{R} \implies c \underline w \in W)  
$$  
  
*Esempio*  
  
$$  
V=\mathbb{R}^3  
$$  
  
$$  
W=\{\begin{pmatrix}  
t\\  
0\\  
s+t  
\end{pmatrix} \mid s,t \in \mathbb{R}\}\subset V  
$$  
  
mostriamo che $W$ è un sottospazio di $V$.  
  
1. chiuso rispetto alla somma  
  
$$  
\underline w_1 = \begin{pmatrix}  
t_1\\  
0\\  
s_1+t_1  
\end{pmatrix},\quad  
\underline w_2 = \begin{pmatrix}  
t_2\\  
0\\  
s_2+t_2  
\end{pmatrix}  
$$  
  
$$  
\underline w_1 + \underline w_2 = \begin{pmatrix}  
t_1 + t_2 \\  
0 \\  
s_1 + s_2 + t_1 + t_2  
\end{pmatrix} \in W  
$$  
  
2. chiuso rispetto alla moltiplicazione per scalari  
  
$$  
\underline w = \begin{pmatrix}  
t\\  
0\\  
s+t  
\end{pmatrix},\quad c \in \mathbb{R}  
$$  
  
$$  
c \underline w = \begin{pmatrix}  
ct\\  
0\\  
cs + ct  
\end{pmatrix} \in W  
$$  
  
$\implies W$ è un sottospazio di $V$.  
  
---  
  
*Esempio*  
$$  
V=\mathbb{R}^3  
$$  
  
$$  
W=\{\begin{pmatrix}  
t+1\\  
0\\  
s+t  
\end{pmatrix} \mid s,t \in \mathbb{R}\}\subset V  
$$  
  
1. chiuso rispetto alla somma  
  
$$  
\underline w_1 = \begin{pmatrix}  
t_1 + 1\\  
0\\  
s_1 + t_1  
\end{pmatrix},\quad  
\underline w_2 = \begin{pmatrix}  
t_2 + 1\\  
0\\  
s_2 + t_2  
\end{pmatrix}  
$$  
  
$$  
\underline w_1 + \underline w_2 = \begin{pmatrix}  
t_1 + t_2 + 2 \\  
0 \\  
s_1 + s_2 + t_1 + t_2  
\end{pmatrix} \notin W  
$$  
  
$\implies W$ non è un sottospazio di $V$.  
  
> **Osservazione**  
> I sottospazi vettoriali sono essi stessi spazi vettoriali, e perciò hanno una loro dimensione.  
  
> **Teorema**  
> Se $W\subseteq V$ è un sottospazio vettoriale di $V$ allora $\dim(W) \leq \dim(V)$.  
> Inoltre se $\dim(W) = \dim(V)$ allora $W = V$.  
  
*Esercizio*  
$$  
V=\mathbb{R}^3  
$$  
  
$$  
W=\{\begin{pmatrix}  
t\\  
0\\  
s+t  
\end{pmatrix} \mid s,t \in \mathbb{R}\}\subset V  
$$  
  
abbiamo visto che è un sottospazio.  
  
Determinare una base e la dimensione di $W$.  
  
$$  
W\ni\begin{pmatrix}  
t\\  
0\\  
s+t  
\end{pmatrix} =  
t \begin{pmatrix}  
1\\  
0\\  
1  
\end{pmatrix} +  
s \begin{pmatrix}  
0\\  
0\\  
1  
\end{pmatrix}  
$$  
$$  
\implies \left\{\begin{pmatrix}  
1\\  
0\\  
1  
\end{pmatrix},  
\begin{pmatrix}  
0\\  
0\\  
1  
\end{pmatrix}\right\}  
\quad\text{generano }W  
$$  
  
Sono anche indipendenti.  
  
$$  
\implies \left\{\begin{pmatrix}  
1\\  
0\\  
1  
\end{pmatrix},  
\begin{pmatrix}  
0\\  
0\\  
1  
\end{pmatrix}\right\}  
\quad\text{ formano una base di }W  
$$  
$$  
\implies\dim(W) = 2  
$$  
  
![Screenshot 2026-01-18 alle 18.37.23](../../../Immagini/Screenshot%202026-01-18%20alle%2018.37.23.png)  
  
---  
  
### Sottospazi generati da vettori  
  
Dati $v_1, v_2, \ldots, v_n \in V$.  
Lo spazio generato da questi vettori è definito come  
  
$$  
\langle v_1, v_2, \ldots, v_n \rangle = \{c_1 v_1 + c_2 v_2 + \ldots + c_n v_n \mid c_i \in \mathbb{R}\}  
$$  
  
si vede facilmente che $\langle v_1, v_2, \ldots, v_n \rangle$ è un sottospazio di $V$.  
(la somma di combinazioni lineari è di nuovo una combinazione lineare)  
  
*Esempi*  
  
1. $0\neq\underline{v}\in V$  
  
$$  
\langle \underline{v} \rangle = \{c \underline{v} \mid c \in \mathbb{R}\}  
$$  
  
![Screenshot 2026-01-18 alle 18.40.05](../../../Immagini/Screenshot%202026-01-18%20alle%2018.40.05.png)  
  
la retta è lo spazio generato da $\underline{v}$.  
  
$$  
\dim(\langle \underline{v} \rangle) = 1  
$$  
  
una base di $\langle \underline{v} \rangle$ è formata da $\{\underline{v}\}$.  
  
2. $v_1, v_2 \in V$   
  
$$  
\langle v_1, v_2 \rangle = \{c_1 v_1 + c_2 v_2 \mid c_1, c_2 \in \mathbb{R}\}  
$$  
  
$$  
\underline{v}_1, \underline{v}_2\text{ generano }\langle v_1, v_2 \rangle  
$$  
  
Se sono *linearmente indipendenti* allora formano una base di $\langle v_1, v_2 \rangle$.  
  
![Screenshot 2026-01-18 alle 18.42.16](../../../Immagini/Screenshot%202026-01-18%20alle%2018.42.16.png)  
  
Due vettori indipendenti generano un piano.  
(Ogni vettore del piano è somma e prodotto per uno scalare di $\underline{v}_1$ e $\underline{v}_2$)  
  
Se invece sono *dipendenti*  
  
![Screenshot 2026-01-18 alle 18.43.32](../../../Immagini/Screenshot%202026-01-18%20alle%2018.43.32.png)  
  
$$  
\langle v_1, v_2 \rangle = \langle v_1 \rangle  
$$  
  
Lo spazio generato da 2 vettori dipendenti è uguale allo spazio generato da uno di essi.  
  
3. $v_1, v_2, v_3 \in V$  
  
se sono indipendenti  
  
![Screenshot 2026-01-19 alle 08.22.51](../../../Immagini/Screenshot%202026-01-19%20alle%2008.22.51.png)  
  
lo spazio generato   
  
$$  
\langle v_1, v_2, v_3 \rangle  
$$  
  
è lo spazio tridimensionale.  
  
$$  
\dim(\langle v_1, v_2, v_3 \rangle) = 3  
$$  
  
$$  
\langle \underline{v}_1, \underline{v}_2, \underline{v}_3 \rangle=3  
$$  
  
se  $\underline{v}_1, \underline{v}_2$ indipendenti e $\underline{v}_3$ dipendente da loro  
  
$$  
\langle \underline{v}_1, \underline{v}_2, \underline{v}_3 \rangle = \langle \underline{v}_1, \underline{v}_2 \rangle  
$$  
  
$$  
\dim(\langle v_1, v_2, v_3 \rangle) = 2  
$$  
  
![Screenshot 2026-01-19 alle 08.26.24](../../../Immagini/Screenshot%202026-01-19%20alle%2008.26.24.png)  
  
se $\underline{v}_1$ indipendente e $\underline{v}_2, \underline{v}_3$ dipendenti da $\underline{v}_1$  
  
$$  
\langle \underline{v}_1, \underline{v}_2, \underline{v}_3 \rangle = \langle \underline{v}_1 \rangle  
$$  
  
$$  
\dim(\langle v_1, v_2, v_3 \rangle) = 1  
$$  
  
in generale  
  
$$  
\dim(\langle v_1, v_2, \ldots, v_n \rangle)=\mathrm{rk}\begin{pmatrix}  
\mid & \mid &        & \mid \\  
v_1  & v_2  & \cdots & v_n  \\  
\mid & \mid &        & \mid  
\end{pmatrix}  
$$  
  
---  
  
## Sottospazi somma e intersezione  
  
### Somma di sottospazi  
  
Siano $S\subseteq V$ e $T\subseteq V$ due sottospazi di $V$.  
  
$$  
\dim(S)=M\quad\dim(T)=N  
$$  
  
definiamo  
  
$$  
S+T=\{\underline v+\underline w \mid \underline v \in S, \underline w \in T\}\subseteq V  
$$  
  
in realtà è un sottospazio come si trova una base di $S+T$?  
  
Partiamo da  
  
$$  
\mathbb{B}_S=\{\underline{v}_1,\dots,\underline{v}_M\}  
$$  
  
base di $S$ e  
  
$$  
\mathbb{B}_T=\{\underline{w}_1,\dots,\underline{w}_N\}  
$$  
  
base di T.  
Allora $S+T$ è generato da  
  
$$  
\mathbb{B}_{S+T}=\{\underline{v}_1,\dots,\underline{v}_M,\underline{w}_1,\dots,\underline{w}_N\}  
$$  
  
**In generale:**  
Non è sempre vero che  
  
$$  
\dim(S+T) = \dim(S) + \dim(T)  
$$  
  
però è vero che  
  
$$  
\dim(S+T) \leq \dim(S) + \dim(T)  
$$  
  
*Esempio*  
  
$$  
V=\mathbb{R}^3  
$$  
  
$$  
S=\langle\begin{pmatrix}1\\0\\0\end{pmatrix},\begin{pmatrix}1\\1\\0\end{pmatrix}\rangle  
$$  
  
$$  
\dim(S),\dim(T),\dim(S+T)  
$$  
  
$$  
\dim(S)=2\qquad\dim (T)=2  
$$  
  
$$  
\dim(S+T)?  
$$  
  
$$  
S+T\quad\text{è generato da}\quad  
\{\begin{pmatrix}1\\0\\0\end{pmatrix},  
\begin{pmatrix}1\\1\\0\end{pmatrix},  
\begin{pmatrix}0\\1\\0\end{pmatrix},  
\begin{pmatrix}0\\1\\1\end{pmatrix}\}  
$$  
  
$$  
S+T\subseteq\mathbb{R}^2\quad\dim(S+T)\leq 3  
$$  
  
Base di $S+T$  
  
$$  
\begin{pmatrix}  
1 & 1 & 0 & 0 \\  
0 & 1 & 1 & 1 \\  
0 & 0 & 0 & 1  
\end{pmatrix}  
$$  
  
Gauss-Jordan $\longrightarrow$ forma a gradini $\longrightarrow$ è già in forma a gradini  
  
Pivot nelle colonne $1,2,4$  
  
$$  
\implies  
\begin{pmatrix}1\\0\\0\end{pmatrix},  
\begin{pmatrix}1\\1\\0\end{pmatrix},  
\begin{pmatrix}0\\0\\1\end{pmatrix}\quad  
\text{sono indipendenti}  
$$  
$$  
\implies\text{base di }S+T  
$$  
$$  
\dim(S+T)=3  
$$  
$$  
S+T=\mathbb{R}^3  
$$  
  
### Intersezione di sottospazi  
  
Siano $S\subseteq V$ e $T\subseteq V$ due sottospazi di $V$.  
  
$$  
S\cap T=\{\underline v \mid \underline v \in S \text{ e } \underline v \in T\}\subseteq V  
$$  
  
in realtà è un sottospazio.  
  
Mostriamo che è chiuso rispetto alla somma. Per esempio  
  
$$  
\underline v_1+ \underline v_2 \in S\cap T  
$$  
  
### Formula di Grassman  
  
$$  
\dim(S)+\dim(T) = \dim(S+T) + \dim(S\cap T)  
$$  
  
si può riscrivere  
  
$$  
\dim(S\cap T) = \dim(S) + \dim(T) - \dim(S+T)  
$$  
  
*Esempio*  
$$  
V=\mathbb{R}^3  
$$  
$$  
S=\langle\begin{pmatrix}1\\0\\0\end{pmatrix},\begin{pmatrix}1\\1\\0\end{pmatrix}\rangle\qquad T=\langle\begin{pmatrix}0\\1\\0\end{pmatrix},\begin{pmatrix}0\\0\\1\end{pmatrix}\rangle  
$$  
$$  
\dim(S + T) = 3  
$$  
  
Da Grassman  
  
$$  
\dim(S\cap T) = \dim(S) + \dim(T) - \dim(S+T) = 2 + 2 - 3 = 1  
$$  
  
Scriviamo una base di $S\cap T$.  
  
$$  
\underline{v} \in S\cap T\iff \underline{v}=  
a\begin{pmatrix}1\\0\\0\end{pmatrix} +  
b\begin{pmatrix}1\\1\\0\end{pmatrix} -  
c\begin{pmatrix}0\\1\\0\end{pmatrix} -  
d\begin{pmatrix}0\\0\\1\end{pmatrix}  
$$  
$$  
\iff a\begin{pmatrix}1\\0\\0\end{pmatrix} +  
b\begin{pmatrix}1\\1\\0\end{pmatrix} -  
c\begin{pmatrix}0\\1\\0\end{pmatrix} -  
d\begin{pmatrix}0\\0\\1\end{pmatrix} = \begin{pmatrix}0\\0\\0\end{pmatrix}  
$$  
$$  
\iff\begin{pmatrix}  
a + b \\  
b - c \\  
-d  
\end{pmatrix} = \begin{pmatrix}0\\0\\0\end{pmatrix}  
$$  
$$  
\begin{cases}  
a + b = 0 \\  
b - c = 0 \\  
-d = 0  
\end{cases}  
$$  
  
risolvo  
  
$$  
\begin{cases}  
a = -b \\  
c = b \\  
d = 0  
\end{cases}  
$$  
  
sostituendo  
  
$$  
\underline{v}=a\begin{pmatrix}1\\0\\0\end{pmatrix} +  
b\begin{pmatrix}1\\1\\0\end{pmatrix} =  
-b\begin{pmatrix}1\\0\\0\end{pmatrix} +  
b\begin{pmatrix}1\\1\\0\end{pmatrix} = b\begin{pmatrix}0\\1\\0\end{pmatrix}  
$$  
$$  
\implies \left\{\begin{pmatrix}0\\1\\0\end{pmatrix}\right\}\quad\text{è una base di }S\cap T  
$$  
  
> **Definizione**  
> $S,T\subseteq V$ sottospazi  
> se $S+T=V$ e $S\cap T=\{0\}$ si dice che  
  
$$  
V=S\oplus T  
$$  
  
> è somma diretta di $S$ e $T$.  
  
Ogni $\underline v \in V$ si scrive in modo unico come  
  
$$  
\underline{v}=\underline{v}_1 + \underline{v}_2\quad\text{con }\underline{v}_1 \in S,\underline{v}_2 \in T  
$$  
  
*Esempio*  
$$  
\mathbb{R}^4,\quad\dim(T),\quad\dim(S+T),\quad\dim(S\cap T)  
$$  
  
dire se  
  
$$  
\mathbb{R}^4 = S \oplus T?  
$$  
  
$$  
\dim(S) = 2,\quad \dim(T) = 2,\quad \dim(S+T)?  
$$  
  
$$  
\begin{pmatrix}  
1 & \sqrt{5} & 0 & 0\\  
0 & 0 & -2 & 1\\  
-\sqrt{5} & -1 & 0 & 0\\  
0 & 0 & 3 & 1  
\end{pmatrix}  
\overrightarrow{R_3\rightarrow R_3 + \sqrt{5}R_1}  
\begin{pmatrix}  
1 & \sqrt{5} & 0 & 0\\  
0 & 0 & -2 & 1\\  
0 & 4 & 0 & 0\\  
0 & 0 & 3 & 1  
\end{pmatrix}  
$$  
$$  
\overrightarrow{R_2\leftrightarrow R_3}  
\begin{pmatrix}  
1 & \sqrt{5} & 0 & 0\\  
0 & 4 & 0 & 0\\  
0 & 0 & -2 & 1\\  
0 & 0 & 3 & 1  
\end{pmatrix}  
\overrightarrow{R_3\rightarrow \frac{R_3}{-2}}  
\begin{pmatrix}  
1 & \sqrt{5} & 0 & 0\\  
0 & 4 & 0 & 0\\  
0 & 0 & 1 & -\frac{1}{2}\\  
0 & 0 & 3 & 1  
\end{pmatrix}  
$$  
$$  
\overrightarrow{R_4\rightarrow R_4 - 3R_3}  
\begin{pmatrix}  
1 & \sqrt{5} & 0 & 0\\  
0 & 4 & 0 & 0\\  
0 & 0 & 1 & -\frac{1}{2}\\  
0 & 0 & 0 & \frac{5}{2}  
\end{pmatrix}  
$$  
  
i vettori iniziali  
  
$$  
\begin{pmatrix}  
1 \\ -\sqrt{5} \\ 0 \\ 0  
\end{pmatrix},  
\begin{pmatrix}  
\sqrt{5} \\ 0 \\ -1 \\ 0  
\end{pmatrix},  
\begin{pmatrix}  
0 \\ -2 \\ 0 \\ 3  
\end{pmatrix},  
\begin{pmatrix}  
0 \\ 1 \\ 0 \\ 1  
\end{pmatrix}  
$$  
  
sono indipendenti.  
  
$$  
\implies \dim(S+T) = 4  
$$  
$$  
\implies S+T\subseteq\mathbb{R}^4\implies S+T = \mathbb{R}^4  
$$  
  
Da Grassman  
  
$$  
\dim(S\cap T) = \dim(S) + \dim(T) - \dim(S+T) = 2 + 2 - 4 = 0  
$$  
  
$$  
\implies \dim(S\cap T) = 0\iff S\cap T = \{0\}  
$$  
  
quindi  
  
$$  
\mathbb{R}^4 = S \oplus T  
$$  
