---
share: true
---
  
![Architettura05](../Slides/Architettura05.pdf)  
  
# Funzioni booleane on e off set  
  
L'_onset_ di F è composto da tutti gli input la cui funzione vale 1, ovvero  
  
$$  
F^1=\{x|F(X)=1\}  
$$  
  
L'_offset_ di F è composto da tutti gli input in cui la funzione vale 0, ovvero  
  
$$  
F^0=\{x|F(x)=0\}  
$$  
  
_onset_ $\quad F^1(x)=1\leftrightarrow F(x)=1$  
_offset_ $\quad F^0(x)=1\leftrightarrow F(x)=0$  
  
- se $F^1=\{0,1\}^n$, allora $F=1$ ovvero è sempre vero  
- se $F^0=\{0,1\}^n\space(F^1=\varnothing),\space F$ è sempre falso  
  
Spesso si usa $F$ per intendere $F^1$ ($F^0$ sono tutti punti che non sono in $F^1$, quindi $F^0$ si può anche non dare).  
  
**Esempio:**  
![Screenshot 2025-11-03 alle 15.16.55](../../../Immagini/Screenshot%202025-11-03%20alle%2015.16.55.png)  
  
## Implicanti  
  
Un prodotto di P è un _implicante_ per una funzione F se F vale 1 in tutti i mintermini di cui è composto P.  
È un qualsiasi raggruppamento valido di celle contenenti '1' in una mappa di Karnaugh.  
  
**Esempio:**  
![Screenshot 2025-11-03 alle 15.22.15](../../../Immagini/Screenshot%202025-11-03%20alle%2015.22.15.png)  
  
### Implicanti primi  
  
Un prodotto P è un _implicante primo_ per una funzione F se cancellando un qualsiasi letterale da P si ottiene un prodotto che non sia implicante di F.  
È un implicante che non può essere ulteriormente espanso. In altre parole, è un raggruppamento di '1' che è il più grande possibile e non è contenuto interamente in nessun altro raggruppamento più grande.  
  
**Esmepio:**  
![Screenshot 2025-11-03 alle 15.24.08](../../../Immagini/Screenshot%202025-11-03%20alle%2015.24.08.png)  
  
#### Implicanti primi essenziali  
  
P è un _implicante primo essenziale_ per F se esiste un mintermine di F che è coperto solo da P.  
È un implicante primo che copre almeno una cella '1' che nessun altro implicante primo può coprire.  
  
![Screenshot 2025-11-03 alle 15.25.34](../../../Immagini/Screenshot%202025-11-03%20alle%2015.25.34.png)  
  
### Proprietà  
  
- Si può sempre costruire una SOP sommando tutti gli implicanti primi di F.  
    - non sempre è la forma più compatta.  
- Gli implicanti primi essenziali devono essere sempre inclusi in una SOP minima.  
  
**Esempio:**  
  
$$  
SOP=\overline{B}\overline{C} + A\overline{C} + A\overline{B}\quad\text{tutti gli implicanti primi}  
$$  
  
$$  
SOP=\overline{B}\overline{C} + BC+AC\quad\text{tutti gli essenziali più qualche primo}  
$$  
  
$$  
SOP=\overline{B}\overline{C} +BC+A\overline{B}\quad\text{altra combinazione di essenziali e primi}  
$$  
  
### Riassumendo  
  
- _Implicante_: Un gruppo qualsiasi di '1'.  
- _Implicante Primo_: Un gruppo di '1' che non può essere ingrandito.  
- _Implicante Primo Essenziale_: Un implicante primo che è indispensabile perché copre un '1' che nessun altro può coprire.  
  
La soluzione finale è la somma (OR) di tutti gli implicanti primi essenziali, più un  
numero minimo di implicanti primi non essenziali scelti per coprire eventuali '1'  
rimasti.  
  
## SOP da K-mappa (Metodo Quine-McCluskey)  
  
Algoritmo per ottenere una SOP minima da una K-mappa:  
  
1. $P(F):=$ {implicanti primi di F}  
2. $E(F):=$ {implicanti primi essenziali di F}  
3. $M(F):=$ {mintermini di F non coperti da E(F)}  
4. $N(F):=$ {implicanti primi non essenziali}  
5. $C(F):=$ il più piccolo sottoinsieme di N(F) che copre M(F)  
6. SOP minima di F = E(F) + C(F)  
  
**Esempio:**  
![Screenshot 2025-11-03 alle 21.06.03](../../../Immagini/Screenshot%202025-11-03%20alle%2021.06.03.png)  
  
### Come calcolare C(F)?  
  
> Esistono diverse strategie per trovare un insieme "abbastanza" piccolo, ma non per forza il più piccolo.  
  
#### Copertura  
  
Una _copertura_ di una di una funzione Booleana F è un insieme di prodotti la cui somma ha la stessa tabella di verità di F.  
  
**Esempio:**  
  
- l'insieme dei mintermini di F  
- l'insieme degli implicanti primi di F  
  
> Una copertura di F è _prima_ se tutti i suoi prodotti sono implicanti primi di F.  
  
#### Algoritmo di copertura SOP  
  
1. P(F) := {implicanti primi di F}  
2. E(F) := {implicanti primi essenziali di F}  
3. M(F) := {mintermini di F non coperti da E(F)}  
4. N(F) := {implicanti primi non essenziali}  
5. S := E(F)  
6. R := M(F)  
7. while (R $\neq\varnothing$)  
    1. prendo un $p\in N(F)$ tale che $p$ copra il maggior numero di mintermini di R  
    2. S := S $\cup$ {p}  
    3. R := R - {mintermini coperti da p}  
8. SOP = somma dei prodotti in S  
  
## Funzioni non completamente specificate  
  
$$  
F=(F^1,F^0,F^x):\{0,1\}^n\rightarrow\{0,1,x\}  
$$  
  
dove $x$ rappresenta il don't care, ovvero quei valori di input per cui non ci interessa il valore di output della funzione.  
Un esempio di funzione non completamente specificata è una funzione che rappresenta un circuito con ingressi non utilizzati.  
  
- $F^1$: insieme dei mintermini in cui F vale 1  
- $F^0$: insieme dei mintermini in cui F vale 0  
- $F^x$: insieme dei mintermini in cui F vale don't care.  
  
(F^1, F^0, F^x) formano una partizione di $\{0,1\}^n$:  
  
- $F^1\cup F^0\cup F^x=\{0,1\}^n\rightarrow$ ogni possibile input è in uno e un solo insieme  
- $F^1\cap F^0=F^1\cap F^x=F^0\cap F^x=\varnothing\rightarrow$ gli insiemi sono disgiunti  
  
**Esempio**  
  
![Screenshot 2025-11-22 alle 14.25.03](../../../Immagini/Screenshot%202025-11-22%20alle%2014.25.03.png)  
  
$$  
F^1=\{0000,1100,1101,1110,1000,1010\}  
$$  
  
$$  
F^X=\{0011,0100,1111,1001\}  
$$  
  
### Implicanti con don't care  
  
Un prodotto P è un _implicante_ se:  
  
- F vale 1 o x in tutti i mintermini di cui è composto P.  
- F vale 1 in almeno un mintermine di cui è composto P.  
  
**Esempio**  
  
![Screenshot 2025-11-22 alle 16.06.18](../../../Immagini/Screenshot%202025-11-22%20alle%2016.06.18.png)  
  
### Implicanti primi con don't care  
  
Un prodotto P è un _implicante primo_ se cancellando un qualsiasi letterale da P si ottiene un prodotto che non sia implicante di F.  
  
![Screenshot 2025-11-22 alle 16.07.28](../../../Immagini/Screenshot%202025-11-22%20alle%2016.07.28.png)  
  
### Implicanti primi essenziali con don't care  
  
P è un _implicante primo essenziale_ per F se esiste un mintermine di F che è coperto solo da P.  
  
![Screenshot 2025-11-22 alle 16.08.09](../../../Immagini/Screenshot%202025-11-22%20alle%2016.08.09.png)  
  
# OR esclusivo XOR  
  
$$  
X\oplus Y = \overline{X}Y + X\overline{Y}  
$$  
  
![Screenshot 2025-11-22 alle 16.14.59](../../../Immagini/Screenshot%202025-11-22%20alle%2016.14.59.png)  
  
Proprietà:  
- Commutativa: $X\oplus Y = Y \oplus X$  
- Associativa: $X\oplus(Y\oplus Z) = (X\oplus Y)\oplus Z$  
- Elemento neutro: $X\oplus 0 = X$  
- Inverso: $X\oplus X = 0$  
- Distributiva rispetto a AND: $X(Y\oplus Z) = XY \oplus XZ$  
- Negazione: $\overline{X\oplus Y} = \overline{X}\oplus Y = X\oplus \overline{Y}$  
- Somma di più variabili: $X_1\oplus X_2 \oplus ... \oplus X_n = 1$ se il numero di variabili uguali a 1 è dispari, 0 altrimenti.  
- Doppia negazione: $\overline{\overline{X\oplus Y}} = X\oplus Y$  
- XOR con costanti: $X\oplus 1 = \overline{X}$  
  
