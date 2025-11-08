---
share: true
---
  
![L10 (30.10.2025)](../Slides/L10%20(30.10.2025).pdf)  
  
# Relazione di equivalenza  
  
## Relazioni binarie  
  
Una relazione $R$ su un insieme $X$ è un sottoinsieme del prodotto cartesiano $X^2$ (cioè un insieme di coppie $(x,y)$ dove $x$ e $y$ appartengono a $X$).  
  
$$  
x=\{a,b,c,d\}\quad R\subseteq x^2=\{(x,y)|x,y\in X\}  
$$  
  
$$  
x=\mathbb{N}\quad  
R=\{(a,a)\}  
$$  
  
$$  
x=\mathbb{C}\quad  
\{(a,b),(c,d)\}  
$$  
  
## Proprietà  
  
Una relazione è definita come una **Relazione di Equivalenza** se soddisfa tre proprietà fondamentali:  
  
**Riflessiva**  
Ogni elemento è in relazione con sé stesso.  
  
$$  
\forall x\in X\quad (x,x)\in R|R(x,x)|xRx  
$$  
  
**Simmetrica**  
Se $x$ è in relazione con $y$, allora $y$ è in relazione con $x$.  
  
$$  
\forall x,y\in X\text{ se } (x,y)\in R\text{ allora } (y,x)\in R  
$$  
  
$$  
((x,y)\in R\Rightarrow (y,x)\in R)  
$$  
  
**Transitiva**  
Se $x$ è in relazione con $y$ e $y$ è in relazione con $z$, allora $x$ è in relazione con $z$.  
  
$$  
\forall x,y,z\text{ se } (x,y)\in R\text{ e }(y,z)\in R\text{ [ipotesi]}  
$$  
  
$$  
\text{allora } (x,z)\in R  
$$  
  
### Esempi  
  
**Esempio 1:** "$f$ e $g$ differiscono al più in un punto"  
  
La proprietà transitiva dice:  
SE  
$$(fRg \text{ E } gRh)$$  
ALLORA  
$$fRh$$  
Per dimostrare che _non_ è transitiva, dobbiamo trovare un caso in cui l'ipotesi (SE) è VERA, ma la conclusione (ALLORA) è FALSA.  
  
$$f(a)=1\space\forall\space a\in\{1,\dots,10\}$$  
$$g(a): g(1)=2, \text{ e } g(a)=1 \text{ per tutti gli altri }a$$  
$$h(a): h(1)=2, h(2)=3, \text{ e } h(a)=1 \text{ per tutti gli altri } a$$  
  
Ora verifichiamo le relazioni:  
  
- $fRg$ (Vera): Differiscono solo in $a=1$.  
- $gRh$ (Vera): Differiscono solo in $a=2$ (dove $g=1$ e $h=3$).  
- $fRh$ (Falsa): $f$ e $h$ differiscono in $a=1$ ($1$ vs $2$) e $a=2$ ($1$ vs $3$). Differiscono in _due punti_. Abbiamo quindi (VERO $\land$ VERO) ⇒ FALSO, che è un'implicazione **FALSA**. La transitività è violata.  
  
**Esempio 2:** "$fRg\Leftrightarrow f(a)=g(a)\space\forall\space a\geq2$"  
  
Questa invece **è una relazione di equivalenza**. Il punto chiave è la transitività.  
  
- **Ipotesi**: $fRg$ (cioè $f(a)=g(a)\space\forall\space a\geq2$) E $gRh$ (cioè $g(a)=h(a)\space\forall\space a\geq2$).  
- **Tesi**: $fRh$ (cioè $fRg\Leftrightarrow f(a)=h(a)\space\forall\space a\geq2$).  
  
La dimostrazione è diretta: prendiamo un qualsiasi $a\geq2$. Dato che $fRg$, sappiamo che $f(a)=g(a)$. Dato che $gRh$, sappiamo che $g(a)=h(a)$. Per la proprietà transitiva dell'uguaglianza (se $A=B$ e $B=C$, allora $A=C$), segue che $f(a)=h(a)$. Siccome questo vale per ogni $a\geq2$, la tesi $fRh$ è vera.  
  
# Simboli logici  
  
- $\land$ (E): "AND" logico.  
- $\lor$ (O): "OR" logico.  
- $\Rightarrow$ (Implica): "Se... allora..."  
- $\neg$ (Negazione): "Non..."  
- $\forall$ (Per ogni): Quantificatore universale.  
- $\exists$ (Esiste): Quantificatore esistenziale.  
- $\exists!$ (Esiste uno e uno solo): Quantificatore di unicità.  
  
## Tabelle di verità  
  
| A   | B   | A ∧ B | A ∨ B | A ⇒ B | ¬A  |  
| --- | --- | ----- | ----- | ----- | --- |  
| V   | V   | V     | V     | V     | F   |  
| V   | F   | F     | V     | F     | F   |  
| F   | V   | F     | V     | V     | V   |  
| F   | F   | F     | F     | V     | V   |  
  
# Induzione  
  
L'induzione matematica è un metodo di dimostrazione utilizzato per stabilire la verità di una proposizione per tutti i numeri naturali. Si basa su due passaggi fondamentali:  
  
1. **Base dell'induzione**: Dimostrare che la proposizione è vera per il primo numero naturale (solitamente 0 o 1).  
2. **Passo induttivo**: Dimostrare che se la proposizione è vera per un numero naturale arbitrario $k$, allora è vera anche per $k+1$.  
  
Se entrambi i passaggi sono completati con successo, si conclude che la proposizione è vera per tutti i numeri naturali.  
  
## Esempi  
  
**Esempio 1:** somma dei primi $n$ numeri dispari  
  
$$  
P(n):\sum_{i=1}^{n} (2i-1)=n^2  
$$  
  
- **Passo base** $(P(1))$  
    - Lato sinistro: $\sum_{i=1}^{1} (2\cdot1-1)=1$  
    - Lato destro: $1^2=1$  
    - Conclusione: $1=1$ (vero)  
- **Passo induttivo**: dobbiamo dimostrare che $P(n)\Rightarrow P(n+1)$  
    - **Ipotesi induttiva** $(P(n))$: supponiamo che $\sum_{i=1}^{n} (2i-1)=n^2$ sia **vera**.  
    - **Tesi induttiva** $(P(n+1))$: dobbiamo dimostrare che $\sum_{i=1}^{n+1} (2i-1)=(n+1)^2$.  
    - **Dimostrazione:** partiamo dal lato sinistro della tesi e usiamo l'ipotesi.  
        - $\sum_{i=1}^{n+1} (2i-1)=\sum_{i=1}^{n} (2i-1)+(2(n+1)-1)$  
        - Ora sostituiamo i primi $n$ termini con $n^2$ (usando l'ipotesi induttiva): $=n^2+(2n+2-1)=n^2+2n+1=(n+1)^2$  
        - Siamo arrivati esattamente al lato destro della tesi. Abbiamo dimostrato che se $P(n)$ è vera, allora $P(n+1)$ è vera. La prova è completa.  
  
## Principio di Induzione (I forma)  
  
Sia $P(n)$ una proposizione che dipende da un numero naturale $n$. Se:  
  
1. $P(0)$ è vera (base dell'induzione).  
2. Per ogni $k\geq0$, se $P(k)$ è vera, allora $P(k+1)$ è vera (passo induttivo).  
  
Allora $P(n)$ è vera per ogni numero naturale $n\geq0$.  
  
**Svolgimento induzione:**  
  
1. capire cosa dimostrare (definire $P(n)$)  
2. dimostrare il passo base  
3. dimostrare il passo induttivo  
    1. scrivere l'ipotesi induttiva  
    2. scrivere la tesi induttiva  
    3. dimostrare la tesi usando l'ipotesi  
  
## Principio di Induzione (II forma)  
  
Sia $P(n)$ una proposizione che dipende da un numero naturale $n$. Se:  
  
1. Esiste un numero naturale $m$ tale che $P(m)$ è vera (base dell'induzione).  
2. Per ogni $k\geq m$, se $P(k)$ è vera, allora $P(k+1)$ è vera (passo induttivo).  
  
Allora $P(n)$ è vera per ogni numero naturale $n\geq m$.  
  
Questa forma è necessaria quando la proposizione non è vera per tutti i numeri naturali a partire da 0 o 1, ma solo a partire da un certo numero $m$.  
  
**La differenza chiave**: L'ipotesi induttiva.  
- **Forma 1 (Debole)**: Assumi solo P(n).  
- **Forma 2 (Forte)**: Assumi che $P(k)$ sia vera per tutti i $k$ compresi tra $m$ e $n$ ($m\leq k\leq n$).  
  
