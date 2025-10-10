---
share: true
---

## Riepilogo

### Appartenenza

$$A=\{x\in \mathbb{N}|x\space\text{è pari}\}$$

### Sottoinsieme

$$\{4,6\}\subseteq A$$

### Unione

$$A,B\space\text{insiemi}$$
$$A\cup B=\{x|x\in A\space\text{o}\space x\in B\}$$

### Intersezione

$$A\cap B=\{x|x\in A\space\text{e}\space x\in B\}$$

### Uguaglianza

$$A=B\space \text{significa che}\space A\space\text{e}\space B\space\text{hanno gli stessi elementi}$$

#### Esempio

$$\{2,2\}=\{2\}$$

### Complementare

$A$ insieme, il suo complementare è $$A^c=\{x\in U|x\notin A\}$$

## Leggi di De Morgan

### Prima

$$(A\cap B)^c=A^c\cup B^c$$

### Seconda

$$(A \cup B)^c=A^c\cap B$$

## Differenza

$$B\backslash A=\{x\in B|x\notin A\}$$
oppure
$$A\backslash B=\{x\in A|x\notin B\}$$

> In generale $B\backslash A$ è diverso da $A\backslash B$, conta quindi l'ordine

## Insieme delle parti

> **Parte** = sottoinsieme

$A$ un insieme qualsiasi.
Definiamo **l'insieme delle parti** di $A$ come l'insieme i cui oggetti sono tutti i sottoinsiemi di $A$: $$P(A)=\{B|B\subseteq A\}$$

### Esempio

$$A=\{a,b,c\}$$
$$P(A)=\{\{a\},\{b\},\{a,b\},\{a,c\},\{b,c\},\{\varnothing\},\{a,b,c\}\}$$
se $A$ è formato da $n$ elementi, allora $P(A)$ contiene $2^n$ elementi.
$$|P(A)|=2^3=8$$

## Prodotto cartesiano

Si definisce il prodotta cartesiano tra due insiemi $A$ e $B$ come l'insieme $$A\times B=\{(a,b)|a\in A, b\in B\}$$
cioè l'insieme delle coppie ordinate dove la prima entrata varia in $A$ e la seconda varia in $B$.

### Esempio

$$A=\{3,4\}$$ $$B=\{2,5\}$$ $$A\times B=\{(3,2), (3,5),(4,2),(4,5)\}$$
se $A$ ha $n$ elementi e $B$ ha $m$ elementi, allora il prodotto cartesiano $A\times B$ ha $n\times m$ elementi.
$$|A\times B| = 2\times 2=4$$

> **Notazione** $$A_1\times A_2\times\dots\times A_n=\{(x_1,x_2,\dots, x_n)|x_1\in A_1, x_2\in A_2,\dots,x_n\in A_n\}$$ Esempio: $$\mathbb{N}\times\mathbb{N}\times\mathbb{N}=\{(a,b,c)|a\in\mathbb{N},b\in\mathbb{N},c\in\mathbb{N}\}=\mathbb{N}^3$$

### Proprietà

#### Associativo

$$(A\times B)\times C=A\times (B\times C)$$

#### Annullamento

$$\varnothing\times A=\varnothing$$

#### Distributiva 1

$$(A_1\cap A_2)\times B=(A_1\times B)\cap(A_2\times B)$$

#### Distributiva 2

$$(A_1\cup A_2)\times B=(A_1\times B)\cup(A_2\times B)$$

## Relazione

> Una **relazione** $\rho$ da un insieme $A$ ad un insieme $B$ è un sottoinsieme del prodotto cartesiano $A\times B$

quindi $\rho\subseteq A\times B$ è un sottoinsieme;
quindi $\rho$ è una collezione di coppie ordinate.

Invece di scrivere $(a,b)\in\rho$ si usa $$a\space\rho\space b$$
che si legge che l'elemento $a$ è in relazione con l'elemento $b$.

### Esempio

#### 1.

$$A=\{1,2,3\}$$ $$B=\{3,4\}$$
$$\rho\subseteq A\times B$$
la definisco per esempio come il sottoinsieme $$\rho=\{(1,4),(1,3),(2,3)\}$$
$(1,4)\in\rho\rightarrow1\space\rho\space4$ "$1$ è in relazione con $4$"  
$(1,3)\in\rho\rightarrow1\space\rho\space3$ "$1$ è in relazione con $3$"  
$(2,3)\in\rho\rightarrow2\space\rho\space3$ "$2$ è in relazione con $3$"

#### 2.

$$A=\{1,2,3\}$$ $$B=A=\{1,2,3\}$$
$$\rho=\dots\space\text{è}\space\leq\dots$$relazione di minore o uguale
$$\rho\subseteq A\times A$$
esplicitiamo $\rho$ $$\rho=\{(1,1),(1,2),(1,3),\dots\}$$

#### 3.

$$A=\{\text{persone}\}\space\ B=A$$
considero la relazione da $A$ a $A$ $$\rho=\text{"}\dots\text{ha la stessa età di }\dots\text{"}$$
Luca Rossi ha 30 anni.
Matteo Bianchi ha 30 anni
LR $\rho$ MB perché hanno la stessa età

> **Notazione**
> Quando $B=A$ si parla di _relazione definita su $A$_

Una relazione $\rho$ definita su un insieme $A$ si dice relazione di equivalenza se valgono le seguenti proprietà:

1. proprietà riflessiva $\rightarrow\forall a\in A, a\space\rho\space a$
2. proprietà simmetrica $\rightarrow$ se $a\space\rho\space b$ allora $b\space\rho\space a$
3. proprietà transitiva $\rightarrow$ se $a\space\rho\space b$ e $b\space\rho\space c$, allora $a\space\rho\space c$

> **Notazione**
> Se $\rho$ è relazione di equivalenza $a\space\rho\space b$ si dice che $a$ è equivalente a $b$

#### 4.

$$A=\mathbb{N}$$ $$\rho=\text{"}=\text{"}$$
$$x\space\rho\space y \Longleftrightarrow x=y$$

#### 5.

La relazione $\rho=\text{"}<\text{"}$ su $\mathbb{N}$ non è riflessiva. Infatti: $3$ non è $<$ di "3"

## Classe di equivalenza

Sia $\rho$ una relazione di equivalenza su $A$ (significa che $B=A$). La classe di equivalenza modulo $\rho$ di un elemento $a\in A$ è l'insieme: $$[a]=\{b\in A|b\space\rho\space a\}$$
cioè tutti gli elementi in relazione con $a$.

### Esempio

$$A=\{\text{persone}\}$$
$$\rho=\text{"stessa età di"}$$
$$\text{Luca Rossi}\space \in A$$
$$[\text{Luca Rossi}]=\{\text{tutte le persone coeatanee con Luca Rossi}\}$$

### Proposizione

> Siano $a,b\in A$ se $a\space\rho\space b$ allora $[a]=[b]$

#### Dimostrazione

Per dimostrare che $[a]=[b]$ devo dimostrare che valgono le inclusioni $$[a]\subseteq[b]$$ e $$[b]\subseteq[a].$$
Verifico la prima inclusione $[a]\subseteq[b]$.
Sia $x\subseteq[a]$ qualsiasi. Questo vuol dire che $x\space\rho\space a$.
Per ipotesi $a\space\rho\space b$.
Per la proprietà transitiva $x\space\rho\space b$. Questo vuol dire $x\in[b]$.
Similmente si prova anche $[b]\subseteq[a]$.
Quindi $[a]=[b]$.

### Proposizione

Vale anche il viceversa, cioè se $$[a]=[b]$$ allora $$a\space\rho\space b$$

#### Dimostrazione

Per la riflessività di $\rho$ ho che $$a\space\rho\space a$$
e quindi $$a\in[a].$$
Per ipotesi $$[a]=[b]$$
quindi $$a\in[b].$$ Questo vuol dire $$a\space\rho\space b.$$ **Conclusione**
$$a\space\rho\space b\Longleftrightarrow[a]=[b]$$

> Le classi di equivalenza o coincidono o sono disgiunte. Perché?

Supponiamo $$[a]\neq[b],$$
vogliamo dimostrare che non hanno elementi in comune.
Ragioniamo per assurdo e supponiamo che $$x\in[a]\cap[b]$$
sia un elemento comune alle classi.
Quindi $x\space\rho\space a$ e $x\space\rho\space b$.
$a\space\rho\space x$ per la simmetria.
Per la proprietà transitiva $$a\space\rho\space b$$ e perciò $$[a]=[b]$$

questo è assurdo, che nasce dal fatto che non esiste un tale $x$ comune.

##### Esempio

$$\rho=\text{"stessa età"}$$Luca Rossi ha 30 anni.
Matteo Bianchi ha 31 anni.
$$[\text{Luca Rossi}]=\{\text{30 anni}\}$$$$[\text{Matteo Bianchi}]=\{\text{31 anni}\}$$Valerio Neri ha 30 anni.$$[\text{Valerio Neri}]=\{\text{30 anni}\}=[\text{Luca Rossi}]$$

### Teorema

> Le classi di equivalenza di una relazione di equivalenza $\rho$ su $A$ formano una partizione di $A$.

Quindi:

- le classi di equivalenza ricoprono $A$
- o coincidono o sono disgiunte

#### Esempio

$$A=\{\text{persone}\}$$$$\rho=\text{stessa età}$$

### Insieme quoziente

Definiamo l'insieme quoziente $A/\rho$ come l'insieme delle classi di equivalenza $$A/\rho=\{[a]|a\in A\}$$

#### Esempio

$$A/\rho=\{[1],[30],[31],[32],\dots\}$$

> Vale anche il viceversa, ogni partizione di un insieme è indotta da una relazione di equivalenza le cui classi di equivalenza coincidono con i sottoinsiemi della partizione.

La ricetta per definire la relazione è $$a\space\rho\space b \Longleftrightarrow a,b\in A_\alpha$$
per qualche sottoinsieme $A_\alpha$ della partizione.

## Relazione di ordine (o di ordine parziale)

Una relazione $\rho$ su un insieme $A$ è detta di ordine (parziale) se soddisfa le tre seguenti proprietà:

1. riflessiva
2. antisimmetrica:
    - Se $a\space\rho\space b$ e $b\space\rho\space a$ allora $a=b$
3. transitiva

### Esempio

$$A=\mathbb{N}$$
$$\rho=\text{"}\leq\text{"}$$

Riflessiva? Sì perché $a\leq a$ $\forall a\in A$
Antisimmetrica? Se $a\leq b$ o $b\leq a$ allora $a=b$
Transitiva? Sì
Quindi $\rho=\text{"}\leq\text{"}$ è relazione d'ordine ma non di equivalenza.

### Osservazione

Due elementi $a$ e $b$ sono confrontabili se $a\space\rho\space b$ o $b\space\rho\space a$.
L'aggettivo **parziale** sta a significare che non tutti gli elementi sono tra loro confrontabili.
Quando invece ogni due elementi sono confrontabili si dice che la relazione è di ordine **totale**.

#### Esempio

$$A=P(x)$$
insieme delle parti di $x$.
$$\rho=\text{"}\subseteq\text{"}$$
Riflessiva? Sì
Antisimmetrica? Sì
Transitiva? Sì
$\rho$ è di ordine parziale.

È di ordine totale? Ossia se $$B_1, B_2\subseteq x$$
posso dire che $$B_1\subseteq B_2$$
o $$B_2\subseteq B_1?$$
No.
$B_1$ e $B_2$ non sono contenuti l'uno nell'altro, non sono confrontabili.

#### Esempio di ordine totale

$$A=\mathbb{N}$$$$\rho=\text{"}\leq\text{"}$$$$x,y\in\mathbb{N}$$posso dire se$$x\leq y$$oppure$$y\leq x$$

## Massimo, minimo, massimale, minimale

In generale una relazione di ordine si indica con $\leq$
**Definizione**
Sia $\leq$ relazione di ordine su un insieme $A$. Un elemento $a\in A$ è detto

1. **massimo**: se è confrontabile con ogni elemento di $A$ e risulta che $y\leq a\forall y=A$;
2. **minimo**: se è confrontabile con ogni elemento di $A$ e risulta che $a\leq y\forall y\in A$;
3. **massimale**: se $\forall y\in A$ con $y\neq a$ non vale $a\leq y$;
4. **minimale**: se $\forall y \in A$ con $y\neq a$ non vale $y\neq a$.

### Esempio

$$A=\{1,2,3,4,5,6\}$$
$$\rho=\text{"}\dots\text{divide}\dots\text{"}$$
$$a\space\rho\space b\Longleftrightarrow a\space\text{divide}\space b\Longleftrightarrow a|b$$
$\rho$ è una relazione di ordine parziale su A.
Minimo: 1.
Massimo: non esiste.
Massimali: 4,5,6.
Minimali: 1.

#### Osservazioni

> Se esiste un massimo allora è unico, per la proprietà antisimmetrica stessa cosa per il minimo.

> Se esiste il massimo, è anche l'unico elemento massimale. Stessa cosa per il minimale.

#### Perché 4 è massimale?

Dimostriamo che $$\forall y\neq 4$$non vale $$4\leq y$$

- $y=1, 4|1$? no
- $y=2,4|2$? no
- $y=3,4|3$? no
- $y=4,4|4$? no
- $y=5,4|5$? no
- $y=6,4|6$? no

#### 2 è minimale?

- $y=1,1|2$? sì, dunque non può essere minimale

### Esempio

$$A=P(\{1,2,3\})$$$$\rho=\text{"}\subseteq\text{"}$$

- Minimo: $\varnothing$
- Massimo: $\{1,2,3\}$
- Minimale $\varnothing$
- Massimale: $\{1,2,3\}$
