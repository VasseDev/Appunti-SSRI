---
share: true
---

## Funzioni

> **Ricordiamo:** una relazione $\rho$ da $A$ a $B$ è un sottoinsieme del prodotto cartesiano $A\times B$.

La relazione $\rho$ è detta _funzione_ (e si indica con $f$) se $\forall x\in A$ esiste un unico elemento $y\in B$ tale che $(x,y)\in f$ scriviamo $f(x)=y$ e $f:A\rightarrow B$

> $A$ è detto **DOMINIO** e $B$ è detto **CODOMINIO**.

### Immagine e controimmagine

L'immagine di $f$ è l'insieme $$Im(f)=\{y\in B|\exists x\in X:\space f(x)=y\}$$
In pratica è il sottoinsieme degli elementi di $B$ che sono associati con elementi di $A$

La controimmagine di $y\in B$ è il sottoinsieme di $A$ di tutti gli elementi che hanno immagine $y$.
$$f^{-1}(y)=\{x\in A|f(x)=y\}$$

### Iniettiva e suriettiva

Una funzione $f:A\rightarrow B$ è detta **iniettiva** se $\forall x_1,x_2\in A$ con $x_1\neq x_2\in A$ si ha che $f(x_1)\neq f(x_2)$.

Una funzione $f:A\rightarrow B$ è **suriettiva** (o surgettiva) se $\forall y\in B\exists x\in A:f(x)=y$.
Suriettiva è equivalente a $Im(B)=B$

Una funzione $f:A\rightarrow B$ è **biettiva** (o biunivoca o bigettiva) se è iniettiva e suriettiva.

Quando $f:A\rightarrow B$ è biettiva si può costruire la funzione **inversa** $g:B\rightarrow A$. La proprietà della funzione inversa è $$(g\circ f)(x)=x\space\forall x\in A$$
oppure
$$(g\circ f)(y)=y\space\forall y\in A$$

### Composizione

Definiamo la funzione composizione $$g\circ f:A\rightarrow c$$
come $$(g\circ f)(x)=g(f(x))$$

#### Esempio

$$f:\mathbb{N}\rightarrow\mathbb{N}\space\space f(x)=x+1$$
$$g:\mathbb{N}\rightarrow\mathbb{N}\space\space g(y)=y^2$$
$$(g\circ f)(x)=g(f(x))=f(x+1)=(x+1)^2$$
calcolare $$(f\circ g)(y)=f(g(y))=f(y^2)=y^2+1$$

> La **composizione** non è commutativa: $$g\circ f\neq f\circ g$$
> Però è associativa: $$h\circ(g\circ f)=(h\circ g)\circ f$$
> si indica con $$h\circ g\circ f$$

#### Esercizio

$f:\mathbb{N}\rightarrow\mathbb{N}$
$f(x):x^2$
$f$ è iniettiva? sì
$f$ è suriettiva? no

##### Per casa

- $f:\mathbb{N}\rightarrow\mathbb{N}\space\space f(x)=x^2$
- $g:\mathbb{N}\rightarrow\mathbb{N}\space\space g(y)=y+1$
- $h:\mathbb{N}\rightarrow\mathbb{N}\space\space h(z)=3z$
    Calcolare la composizione $f\circ g\circ h$

## Numeri

### Naturali

$$\mathbb{N}\rightarrow\text{naturali}$$
$\mathbb{N}=\{0,1,2,3,\dots\}$ insieme dei naturali.

#### Somma

È definita la somma.
$$x,y\in\mathbb{N}\space\text{allora}\space x+y\in\mathbb{N}$$

#### Differenza

Non è definita la differenza.
$$2-3=-1\notin \mathbb{N}$$

### Interi

$$\mathbb{Z}\rightarrow\text{interi}$$

#### Divisione

Non è definita la divisione.
$$1/2=0,5\notin\mathbb{Z}$$

### Razionali

$$\mathbb{Q}\rightarrow\text{razionali}$$
Insieme dei razionali, ossia delle frazioni.

Ogni frazione può essere espressa come un decimale periodico, cioè dopo la virgola le cifre si ripetono da un certo punto in poi.
$$\frac{1}{3}=0,3333\dots=0,\overline{3}$$
Viceversa ogni decimale periodico è esprimibile come frazione
$$0,234542542\dots=0,234\overline{542}$$
in frazione è
$$\frac{58577}{249750}$$
$$\mathbb{Q}=\{\text{frazioni}\}=\{\text{decimali periodici}\}$$

> Ricordiamo che è possibile semplificare le frazioni $$\frac{6}{4}=\frac{3}{2}$$
> in modo tale che numeratore e denominatore non abbiano fattori comuni.

$$\mathbb{Q}=\{\frac{a}{b}|a,b\in\mathbb{Z},b\neq0,\text{senza fattori comuni}\}$$

#### Divisione

In $\mathbb{Q}$ vale la divisione $$$$
L'insieme $\mathbb{Q}$ è un insieme ordinato cioè esiste una relazione d'ordine totale, che è proprio la relazione $\leq$ di minore o uguale classica, questo vuol dire che presi qualsiasi $x,y\in\mathbb{Q}$ si può dire se $x\leq y$ oppure $y\leq x$.

Inoltre la relazione $\leq$ è compatibile con le operazioni:

1. se $a\leq b$ allora $a+c\leq b+c\space\forall\space a,b,c\in\mathbb{Q}$
2. se $a\leq b$ allora $a\cdot c\leq b\cdot c\space\forall\space a,b\land c> 0$

Infine $\mathbb{Q}$ è un campo cioè ha due operazioni, $+$ e $\cdot$ dove ogni elemento ha un opposto (elemento inverso rispetto a $+$) e ogni elemento non nullo è invertibile rispetto alla moltiplicazione.

#### Radice

In $\mathbb{Q}$ non si può fare la radice quadrata. $$\sqrt{4}=2\in\mathbb{Q}$$ $$\sqrt{2}\space\space\text{è razionale? NO!}$$
perche?
Per assurdo, supponiamo che sia razionale $\sqrt{2}=\frac{M}{N}$ con $M,N$ senza fattori comuni $\Longrightarrow M=\sqrt{2}\cdot N\Longrightarrow M^2=2N^2\Longrightarrow M^2 pari\Longrightarrow M\space\text{è pari}\Longrightarrow M=2\cdot k\Longrightarrow M^2=2N^2\Longrightarrow (2k)^2=2N^2$
$\Longrightarrow 4k^2=2N\Longrightarrow 2k^2=N^2\Longrightarrow N^2\space\text{pari}\Longrightarrow N\space\text{è pari}\Longrightarrow N=2\cdot k'$
Quindi M ed N hanno un fattore comune 2 che contraddice l'ipotesi iniziale.
$$\sqrt{2}\notin\mathbb{Q},\sqrt{2}\space\text{non è un decimale periodico}$$ $$\sqrt{2}=1,1415\dots$$

### Reali

$$\mathbb{R}\rightarrow\text{reali}$$
$$\mathbb{R}=\{\text{tutti decimali periodici e non}\}$$ insieme dei reali.

> **Attenzione** > $0,99999\dots=1$ perché?
> $\frac{1}{3}=0,333\dots$
> moltiplichiamo per $3$ > $3\cdot\frac{1}{3}=3\cdot(0,333\dots)=0,999\dots$
