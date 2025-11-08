---
share: true
---
  
[Slide: Lezione 10](<Primo/Matematica I/Slides/L10 (30.10.2025).pdf>)  
  
# Proprietà degli interi  
  
$$  
\mathbb{Z} = \{\ldots,-3,-2,-1,0,1,2,3,\ldots\}\longrightarrow \text{ Insieme dei numeri interi (prototipo di anello commutativo con unità)}  
$$  
  
In $\mathbb{Z}$ sono definite due operazioni:  
  
1. Somma ($+$)  
2. Prodotto ($\cdot$)  
  
$$  
\forall a,b,c\in\mathbb{Z}: a+b\in\mathbb{Z} \quad\text{(Chiusura della somma)}  
$$  
  
$$  
\forall a,b,c\in\mathbb{Z}: a\cdot b\in\mathbb{Z} \quad\text{(Chiusura del prodotto)}  
$$  
  
Per cui valgono le seguenti proprietà:  
  
1. Proprietà commutativa della somma e del prodotto:  
  
$$  
\forall a,b\in\mathbb{Z}: a+b=b+a  
$$  
  
$$  
\forall a,b\in\mathbb{Z}: a\cdot b=b\cdot a  
$$  
  
2. Proprietà associativa della somma e del prodotto::  
  
$$  
\forall a,b,c\in\mathbb{Z}: (a+b)+c=a+(b+c)  
$$  
  
$$  
\forall a,b,c\in\mathbb{Z}: (a\cdot b)\cdot c=a\cdot(b\cdot c)  
$$  
  
3. Elemento neutro della somma:  
  
$$  
\exists 0\in\mathbb{Z} : \forall a\in\mathbb{Z} : a+0=a  
$$  
  
4. Elemento neutro del prodotto:  
  
$$  
\exists 1\in\mathbb{Z} : \forall a\in\mathbb{Z} : a\cdot 1=a  
$$  
  
5. Inverso additivo:  
  
$$  
\forall a\in\mathbb{Z} : \exists -a\in\mathbb{Z} : a + (-a) = 0  
$$  
  
    - In realtà l'opposto di $a$ è unico e possiamo definite l'operazione differenza:  
  
$$  
\forall a,b\in\mathbb{Z} : a - b = a + (-b)  
$$  
  
6. Proprietà distributiva del prodotto rispetto alla somma:  
  
$$  
\forall a,b,c\in\mathbb{Z} : a\cdot (b+c) = a\cdot b + a\cdot c  
$$  
  
**Conseguenze**  
  
1. Proprietà dell'annullamento del prodotto:  
  
$$  
\forall a,b\in\mathbb{Z} : a\cdot b = 0 \Rightarrow (a=0 \text{ oppure } b=0)  
$$  
  
	- Dimostrazione:  
  
$$  
0=1+(-1)=1-1  
$$  
  
quindi  
  
$$  
0\cdot a=(1-1)\cdot a=1\cdot a - 1\cdot a = a - a = 0  
$$  
  
2. Proprietà dell'inverso del prodotto:  
  
$$  
\forall a,b\in\mathbb{Z} : -(a\cdot b) = (-a)\cdot b = a \cdot (-b)  
$$  
  
4. Legge di cancellazione del prodotto  
  
$$  
\forall a,b,c\in\mathbb{Z} : a\cdot c = b\cdot c \text{ e } c \neq 0 \Rightarrow a=b  
$$  
  
4. Se $a\dot b=0$ allora $a=0$ oppure $b=0$.  
  
**Dimostriamo la legge di cancellazione**  
  
Sappiamo che:  
  
$$  
a\cdot c = b\cdot c  
$$  
  
Sottraendo $b\cdot c$ da entrambi i membri otteniamo:  
  
$$  
a\cdot c - b\cdot c = 0  
$$  
  
Applicando la proprietà distributiva otteniamo:  
  
$$  
(a - b)\cdot c = 0  
$$  
  
Essendo $c \neq 0$, per la proprietà dell'annullamento del prodotto, deve essere:  
  
$$  
a - b = 0  
$$  
  
Da cui segue che:  
  
$$  
a = b  
$$  
  
## Divisibilità in $\mathbb{Z}$  
  
# Massimo Comun Divisore (MCD)  
  
**Definizione**  
Siano $a$ e $b$ due numeri interi non entrambi nulli. Il _massimo comun divisore_ $z$ di $a$ e $b$, indicato con $z=MCD(a,b)$, è il più grande intero positivo che divide sia $a$ che $b$.  
Cioè:  
  
1. deve essere un divisore comune di $a$ e $b$:  
  
$$  
    z|a \quad\text{e}\quad z|b  
$$  
  
2. deve essere il più grande tra i divisori comuni:  
  
$$  
    \forall d\in\mathbb{Z}^+ : (d|a \quad\text{e}\quad d|b) \Rightarrow d \leq z  
$$  
  
    **Esempio:**  
  
$$  
    MCD(4,6)=2  
$$  
  
$$  
    MCD(4,6)=2  
  
$$  
> **Osservazione**  
> Se $d$ è un MCD anche $-d$ lo è.  
> Cioè se $d$ soddisfa le due proprietà allora anche $-d$ le soddisfa.  
  
Tuttavia per convenzione si sceglie sempre il MCD positivo.  
  
**Altri esempi:**  
$$  
  
MCD(3,10)=1  
  
$$  
Quando il MCD di due numeri è 1, si dice che i numeri sono _coprimi_ o _primi tra loro_.  
Non hanno fattori comuni diversi da 1 e -1.  
$$  
  
MCD(a,b)=MCD(b,a)  
  
$$  
Non conta l'ordine degli argomenti.  
$$  
  
MCD(0,a), a\neq 0 = |a|  
  
$$  
$$  
  
MCD(0,0) \text{ non è definito}  
$$  
  
Non è definito il MCD di 0 e 0 perché ogni numero intero divide 0, quindi non esiste un massimo tra tutti i numeri interi.  
  
## Teorema delle divisioni successive  
  
Dati due numeri interi $a$ e $b$ non nulli, allora esiste l'MCD.  
Inoltre si può scrivere l'MCD come combinazione lineare intera di $a$ e $b$:  
  
$$  
d=MCD(a,b) = ax + by  
$$  
  
con  
  
$$  
x,y\in\mathbb{Z}  
$$  
  
Questa è chimata \_identità di Bézout.  
  
## Calcolo MCD  
  
$$  
MCD(21,15)  
$$  
  
Usiamo l'algoritmo di Euclide delle divisioni successive:  
  
1. Divido $a$ per $b$:  
  
$$  
    21 = 1 \cdot 15 + 6  
$$  
  
2. Ricavo il resto:  
  
$$  
     	 r = 21 - 1 \cdot 15 = 6  
$$  
  
3. Divido $b$ per il resto:  
  
$$  
     	 15 = 2 \cdot 6 + 3  
$$  
  
4. Ricavo il resto:  
  
$$  
     	 r = 15 - 2 \cdot 6 = 3  
$$  
  
5. Divido il precedente resto per il nuovo resto:  
  
$$  
     	 6 = 2 \cdot 3 + 0  
$$  
  
6. Il resto è 0, quindi l'MCD è l'ultimo resto non nullo:  
  
$$  
     	 MCD(21,15) = 3  
$$  
  
**Riassunto:**  
  
1. Divido $a$ per $b$.  
2. Ricavo il resto $r$.  
3. Se $r=0$ allora l'MCD è $b$.  
4. Altrimenti ripeto il procedimento con $b$ e $r$.  
  
### Scriviamo l'identità di Bézout  
  
$$  
3 = 15 - 2 \cdot 6  
$$  
  
Dal passo 1 sappiamo che:  
  
$$  
6 = 21 - 1 \cdot 15  
$$  
  
Quindi lo sostituiamo nella precedente equazione:  
  
$$  
3 = 15 - 2 \cdot (21 - 1 \cdot 15)  
$$  
  
Svolgendo i calcoli otteniamo:  
  
$$  
3= 15 - 2 \cdot 21 + 2 \cdot 15 = -2 \cdot 21 + 3 \cdot 15  
$$  
  
Dunque:  
  
$$  
MCD(21,15) = 3 = -2 \cdot 21 + 3 \cdot 15 \rightarrow\text{ Identità di Bézout}  
$$  
  
$$  
x = -2, \quad y = 3  
$$  
  
## Esercizi per casa  
  
$$  
MCD(90,126)  
$$  
  
$$  
MCD(247,121)  
$$  
  
E scrivere le identità di Bézout corrispondenti.  
  
  
  
