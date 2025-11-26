---
share: true
---
  
# Gruppi  
  
Un gruppo (G, \*) è un'insieme G dotato di una operazione binaria  
  
$$  
*: G \times G \to G  
$$  
  
tale che  
  
1. \* è associativa: per ogni a, b, c in G, (a \* b) \* c = a \* (b \* c)  
2. Esiste un elemento neutro e in G tale che per ogni a in G, a \* e = e \* a = a  
3. Per ogni a in G, esiste un elemento inverso a^-1 in G tale che a \* a^-1 = a^-1 \* a = e  
4. (Se il gruppo è commutativo o abeliano) Per ogni a, b in G, a \* b = b \* a  
  
**Esempi:**  
  
$(\mathbb{Z}, +)$ è un gruppo abeliano con l'operazione di somma.  
$(\mathbb{R},+)$ è un gruppo abeliano con l'operazione di somma.  
L'elemento neutro è 0 e l'inverso di un numero a è -a.  
  
$(\mathbb{R},\cdot)$ non è un gruppo perché 0 non ha inverso.  
$(\mathbb{R} \setminus \{0\}, \cdot)$ è un gruppo abeliano con l'operazione di moltiplicazione.  
L'elemento neutro è 1 e l'inverso di un numero a è 1/a.  
  
$$  
U_n=\{\text{classi resto invertibili di }\mathbb{Z}_n\}\subset \mathbb{Z}_n  
$$  
  
$$  
(U_n, \cdot) \text{ è un gruppo abeliano con l'operazione di moltiplicazione modulo } n.  
$$  
  
## Proposizioni  
  
**L'elemento neutro è unico**  
_Dim_ supponiamo che ce ne siano due distinti  
  
$$  
e,e'\in G  
$$  
  
elementi neutri  
  
$$  
e\neq e'  
$$  
  
calcoliamo  
  
$$  
e=e\cdot e'=e'\Rightarrow \text{contraddizione}  
$$  
  
**L'inverso di un elemento è unico**  
_Dim_ supponiamo che ce ne siano due distinti  
  
$$  
a^{-1},a'^{-1}\in G  
$$  
  
_notazione_: non indico per esplicito l'operazione $ab=a\cdot b$. Si legge "per".  
  
_corollario_  
  
$$  
(a\cdot b)^{-1}=b^{-1}\cdot a^{-1}  
$$  
  
_Dim_  
  
$$  
(a\cdot b)\cdot (b^{-1}\cdot a^{-1})=a\cdot (b\cdot b^{-1})\cdot a^{-1}=a\cdot e \cdot a^{-1}=a\cdot a^{-1}=e  
$$  
  
_corollario_ l'inverso dell'inverso è l'elemento stesso  
  
$$  
(a^{-1})^{-1}=a  
$$  
  
_Def_ potenze  
  
$$  
(G,*)\quad g\in G\quad i\in \mathbb{Z}  
$$  
  
definiamo  
  
$$  
g^i=\begin{cases}  
g*g*\dots*g\\  
e\\  
g^{-1}*g^{-1}*\dots*g^{-1}  
\end{cases}  
\quad  
\begin{align}  
&\text{se } i>0 \text{ (i fattori g)}\\  
&\text{se } i=0\\  
&\text{se } i<0 \text{ (|i| fattori } g^{-1}\text{)}  
\end{align}  
$$  
  
_Def_ l'ordine di un elemento g in G è il minimo intero positivo r tale che  
  
$$  
g^r=e  
$$  
  
se esiste.  
Se tale r esiste, diciamo che r è di ordine g, si indica con o(g).  
Se non esiste, diciamo che g è di ordine infinito e scriviamo o(g)=∞.  
  
**Esempio**  
In $(\mathbb{Z}_4,+)$ ogni elemento è di ordine infinito.  
\[2\] qual è il suo ordine?  
Calcoliamo le potenze di 2:  
  
$$  
\begin{align}  
&[2]+[2]=[4]=[0]=e\Rightarrow o([2])=2\\  
\end{align}  
$$  
  
**Esempio**  
  
$$  
(\mathbb{Z},+)  
$$  
  
$$  
o(1)=?\quad\text{Infinito}  
$$  
  
_Def_ un gruppo è detto finito di ordine R se G ha un numero finito di elementi, si indica con |G| il numero di elementi di G, che è anche detto ordine del gruppo se è finito.  
  
### Teorema di Lagrange  
  
$$  
\forall g\in G\quad\text{con G gruppo finito}  
$$  
  
allora  
  
$$  
o(g) \mid |G|  
$$  
  
ossia l'ordine di un elemento divide l'ordine del gruppo.  
  
_Def_ un gruppo è detto ciclico se è generato da un solo elemento, cioè  
  
$$  
\exists g \in G : G = \{ g^i : i \in \mathbb{Z} \}  
$$  
  
e si indica con  
  
$$  
G = \langle g \rangle  
$$  
  
## Classificazione dei gruppi di ordine piccolo  
  
1. |G| = 1 ⇒ G = {e} (gruppo banale)  
2. |G| = 2 ⇒ G = \{e, a\}  
  
| $\cdot$ | e   | a   |  
| ------- | --- | --- |  
| e       | e   | a   |  
| a       | a   | e   |  
  
$a\cdot a=e$ perché a è l'inverso di a.  
Possiamo scrivere  
  
$$  
G=\{a,a^2=e\}=\langle a \rangle  
$$  
  
è un gruppo ciclico.  
  
3. $|G| = 3 ⇒ G = \{e, g, g^2\}$  
  
    ogni gruppo di ordine 3 è ciclico.  
  
| $\cdot$ | $e$   | $g$   | $g^2$ |  
| ------- | ----- | ----- | ----- |  
| $e$     | $e$   | $g$   | $g^2$ |  
| $g$     | $g$   | $g^2$ | $e$   |  
| $g^2$   | $g^2$ | $e$   | $e$   |  
  
4. |G| = 4  
  
Due casi:  
  
- G è ciclico, cioè $G = \{e, g, g^2, g^3\}=\langle g \rangle$  
- G non è ciclico, ma è una struttura chiamata gruppo di Klein, indicata con V4 o K4.  
  
$$  
G=\{e,a,b,ab\}\quad\text{con } a^2=b^2=e,\ ab=ba  
$$  
  
### Proprietà del gruppo ciclico  
  
$$  
G=\langle g\rangle=\{e,g,g^2,g^3\}  
$$  
  
$$  
\begin{align}  
&o(e)=1\\  
&o(g)=4\\  
&o(g^2)=2\\  
&o(g^3)=4  
\end{align}  
$$  
  
| $\cdot$ | $e$   | $g$   | $g^2$ | $g^3$ |  
| ------- | ----- | ----- | ----- | ----- |  
| $e$     | $e$   | $g$   | $g^2$ | $g^3$ |  
| $g$     | $g$   | $g^2$ | $g^3$ | $e$   |  
| $g^2$   | $g^2$ | $g^3$ | $e$   | $g$   |  
| $g^3$   | $g^3$ | $e$   | $g$   | $g^2$ |  
  
### Proprietà del gruppo di Klein  
  
$$  
G=\{e,a,b,ab\}\quad\text{con } a^2=b^2=e,\ ab=ba  
$$  
  
| $\cdot$ | $e$  | $a$  | $b$  | $ab$ |  
| ------- | ---- | ---- | ---- | ---- |  
| $e$     | $e$  | $a$  | $b$  | $ab$ |  
| $a$     | $a$  | $e$  | $ab$ | $b$  |  
| $b$     | $b$  | $ab$ | $e$  | $a$  |  
| $ab$    | $ab$ | $b$  | $a$  | $e$  |  
  
$$  
\begin{align}  
&o(e)=1\\  
&o(a)=2\\  
&o(b)=2\\  
&o(ab)=2  
\end{align}  
$$  
  
### Esercizi  
  
$$  
U_8=\{\text{classi resto invertibili di } \mathbb{Z}_8\}=\{[1],[3],[5],[7]\}  
$$  
  
$$  
(U_8,\cdot) \text{ è un gruppo abeliano di ordine 4.}  
$$  
  
Quindi o è ciclico di ordine 4 oppure è il gruppo di Klein.  
Verificare che $(U_8,\cdot)$ è il gruppo di Klein.  
  
5. |G| = 5 ⇒ G è ciclico di ordine 5.  
  
6. |G| = 6 ⇒ molto difficile  
  
## Teorema 1  
  
Se |G| = p, con p numero primo, allora G è ciclico.  
  
## Teorema 2  
  
Se $|G|\leq 5$, allora G è abeliano.  
Ci sono gruppi non abeliani a partire da ordine 6.  
  
## Teorema 3  
  
Ogni gruppo ciclico è abeliano.  
  
# Strutture algebriche con due operazioni  
  
## Anelli  
  
_Def_ un anello $(R, +, \cdot)$ è un insieme dotato di due operazioni binarie:  
  
$$  
+: R \times R \to R  
$$  
  
$$  
\cdot: R \times R \to R  
$$  
  
tali che  
  
1.  -   $\cdot$ è associativa: per ogni a, b, c in R, $(a \cdot b) \cdot c = a \cdot (b \cdot c)$  
    - $\cdot$ esiste l'elemento neutro rispetto alla somma, indicato con 0, tale che per ogni a in R, $a + 0 = 0 + a = a$  
    - ogni elemento è invertibile rispetto alla somma: per ogni a in R, esiste $-a$ in R tale che $a + (-a) = (-a) + a = 0$  
    - la somma è commutativa: per ogni a, b in R, $a + b = b + a$  
2.  1.  la moltiplicazione è associativa: per ogni a, b, c in R, $(a \cdot b) \cdot c = a \cdot (b \cdot c)$  
3.  la moltiplicazione è distributiva rispetto alla somma:  
    - per ogni a, b, c in R, $a \cdot (b + c) = (a \cdot b) + (a \cdot c)$  
    - per ogni a, b, c in R, $(a + b) \cdot c = (a \cdot c) + (b \cdot c)$  
  
_osservazione:_ $(R, +)$ è un gruppo abeliano.  
  
Se vale che $\cdot$ è commutativo si dice che l'anello è commutativo.  
  
Se vale che esiste l'elemento neutro $1\in R$ rispetto al prodotto si dice che l'anello è _unitario_.  
  
## Campo  
  
_Def_ un campo è un anello commutativo unitario in cui ogni elemento diverso da 0 è invertibile.  
  
**Esempi:**  
  
1  
  
$$  
(\mathbb{Z}, +, \cdot) \text{ è un anello commutativo unitario}  
$$  
  
$1\rightarrow$ elemento neutro rispetto alla moltiplicazione.  
$0\rightarrow$ elemento neutro rispetto alla somma.  
  
Non è un campo perché non tutti gli elementi sono invertibili rispetto alla moltiplicazione.  
  
2  
  
$$  
(\mathbb{Q}, +, \cdot), (\mathbb{R}, +, \cdot), (\mathbb{C}, +, \cdot) \text{ sono campi}  
$$  
  
perché ogni elemento diverso da 0 è invertibile rispetto alla moltiplicazione.  
  
3  
  
$$  
(\mathbb{Z}_n, +, \cdot) \text{ anello commutativo unitario}  
$$  
  
Non è un campo perché non tutti gli elementi sono invertibili rispetto alla moltiplicazione.  
Se n è primo allora $(\mathbb{Z}_p, +, \cdot)$ è un campo.