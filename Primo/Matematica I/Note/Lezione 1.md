---
share: true
---

# Insiemi

> Collezione di oggetti chiamati elementi

**Esempio**
L'insieme $\mathbb{N}$ dei naturali $0,1,2,3,4,\dots$

Il concetto di insieme è **primitivo**, nel senso che non può essere definito in termini di altre nozioni più elementari.

In generale si indicano con le lettere maiuscole.

Gli oggetti dell'insieme vengono detti **elementi dell'insieme** e si indicano con le lettere minuscole.

Per indicare che un elemento $s$ appartiene all'insieme $S$ si scrive

$$
s\in S
$$

Indichiamo con $\varnothing$ **l'insieme vuoto**.

Un insieme $B$ è sottoinsieme di $A$ se ogni elemento di $B$ è anche elemento di $A$:

$$
B\subseteq A
$$

> **Importante**
> l'insieme vuoto è sottoinsieme di un qualsiasi insieme $$\varnothing\subseteq S$$
> per qualsiasi insieme $S$.

Non conta l'ordine.

Due insiemi $A$ e $B$ sono uguali se hanno gli stessi elementi $$A=B$$
Si devono verificare queste due condizioni:

$$
\begin{align}
A\subseteq B \\
B\subseteq A
\end{align}
$$

> $$B\subsetneq A$$
> è il simbolo di sottoinsieme proprio, cioè $A\subseteq B$ e $A\neq B$.

## Operazioni tra insiemi

### Intersezione

> Dati due insiemi $A$ e $B$ chiamiamo intersezione tra $A$ e $B$ l'insieme $A\cap B$ che consiste di tutti gli elementi che appartengono sia ad $A$ che a $B$.
> $$A\cap B = \{x|x\in A\land x\in B\}$$

Quando $$A\cap B = \varnothing$$
si dice che i due insiemi sono disgiunti.

**Proprietà:**

- commutatività
- associatività
- $A\cap\varnothing=\varnothing$

$$A_1\cap A_2\cap\dots\cap A_{100}=\bigcap_{i=1}^{100}A_i$$

### Unione

> Dati due insiemi $A$ e $B$ l'unione è l'insieme $A\cup B$ costituito da tutti e soli elementi che appartengono ad $A$ e $B$.
> $$A\cup B=\{x|x\in A\lor x\in B\}$$

**Proprietà:**

- commutatività
- associatività
- $A\cup A=A$
- $A\cup\varnothing=A$

### Proprietà distributive tra Unione e Intersezione

$$(A\cap B)\cup C=(A\cup C)\cap(B\cup C)$$
$$A\cap(B\cup C)=(A\cap B)\cup(A\cap C)$$

### Complementare

Sia $U$ un universo, ossia un insieme che contiene tutti gli oggetti che ci possono interessare.
Il complementare di un insieme $A$ (rispetto all'universo $U$) è l'insieme:
$$A^c=\{x\in U|x\notin A\}$$
