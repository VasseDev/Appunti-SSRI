---
share: true
---

# Funzioni booleane on e off set
L'*onset* di F è composto da tutti gli input la cui funzione vale 1, ovvero
$$
F^1=\{x|F(X)=1\}
$$
L'*offset* di F è composto da tutti gli input in cui la funzione vale 0, ovvero
$$
F^0=\{x|F(x)=0\}
$$

*onset* $\quad F^1(x)=1\leftrightarrow F(x)=1$
*offset* $\quad F^0(x)=1\leftrightarrow F(x)=0$

- se $F^1=\{0,1\}^n$, allora $F=1$ ovvero è sempre vero
- se $F^0=\{0,1\}^n\space(F^1=\varnothing),\space F$ è sempre falso

Spesso si usa $F$ per intendere $F^1$ ($F^0$ sono tutti punti che non sono in $F^1$, quindi $F^0$ si può anche non dare).

**Esempio:**
![Screenshot 2025-11-03 alle 15.16.55](../../../Immagini/Screenshot%202025-11-03%20alle%2015.16.55.png)

## Implicanti

Un prodotto di P è un *implicante* per una funzione F se F vale 1 in tutti i mintermini di cui è composto P.
È un qualsiasi raggruppamento valido di celle contenenti '1' in una mappa di Karnaugh.

**Esempio:**
![Screenshot 2025-11-03 alle 15.22.15](../../../Immagini/Screenshot%202025-11-03%20alle%2015.22.15.png)

### Implicanti primi

Un prodotto P è un *implicante primo* per una funzione F se cancellando un qualsiasi letterale da P si ottiene un prodotto che non sia implicante di F.
È un implicante che non può essere ulteriormente espanso. In altre parole, è un raggruppamento di '1' che è il più grande possibile e non è contenuto interamente in nessun altro raggruppamento più grande.

**Esmepio:**
![Screenshot 2025-11-03 alle 15.24.08](../../../Immagini/Screenshot%202025-11-03%20alle%2015.24.08.png)

#### Implicanti primi essenziali

P è un *implicante primo essenziale* per F se esiste un mintermine di F che è coperto solo da P.
 È un implicante primo che copre almeno una cella '1' che nessun altro implicante primo può coprire.

![Screenshot 2025-11-03 alle 15.25.34](../../../Immagini/Screenshot%202025-11-03%20alle%2015.25.34.png)

### Proprietà

- Si può sempre costruire una SOP sommando tutti gli implicanti primi di F.
	- non sempre è la forma più compatta.
- Gli implicanti primi essenziali devono essere sempre inclusi in una SOP minima.

**Esempio:**
$$
SOP=\overline{B}\overline{C} + A\overline{C} + A\overline{B}\quad\text{tutti gli implicanti primi}$$
$$
SOP=\overline{B}\overline{C} + BC+AC\quad\text{tutti gli essenziali più qualche primo}
$$
$$
SOP=\overline{B}\overline{C} +BC+A\overline{B}\quad\text{altra combinazione di essenziali e primi}
$$
### Riassumendo
   * *Implicante*: Un gruppo qualsiasi di '1'.
   * *Implicante Primo*: Un gruppo di '1' che non può essere ingrandito.
   * *Implicante Primo Essenziale*: Un implicante primo che è indispensabile perché copre un  '1' che nessun altro può coprire.

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

Una *copertura* di una di una funzione Booleana F un insieme di prodotti la cui somma ha la stessa tabella di verità di F.

**Esemepio:**
- l'insieme dei mintermini di F
- l'insieme degli implicanti primi di F

 > Una copertura di F è *prima* se tutti i suoi prodotti sono implicanti primi di F.
 

# Esercizi

1. Trovare gli implicanti primi e gli implicanti primi essenziali delle seguenti funzioni booleane:

F(A,B,C,D)=Σm(1,5,6,7,11,12,13,15)

|     | A   | B   | C   | D   | F   |
| --- | --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 0   | 0   | 0   |
| 1   | 0   | 0   | 0   | 1   | 1   |
| 2   | 0   | 0   | 1   | 0   | 0   |
| 3   | 0   | 0   | 1   | 1   | 0   |
| 4   | 0   | 1   | 0   | 0   | 0   |
| 5   | 0   | 1   | 0   | 1   | 1   |
| 6   | 0   | 1   | 1   | 0   | 1   |
| 7   | 0   | 1   | 1   | 1   | 1   |
| 8   | 1   | 0   | 0   | 0   | 0   |
| 9   | 1   | 0   | 0   | 1   | 0   |
| 10  | 1   | 0   | 1   | 0   | 0   |
| 11  | 1   | 0   | 1   | 1   | 1   |
| 12  | 1   | 1   | 0   | 0   | 1   |
| 13  | 1   | 1   | 0   | 1   | 1   |
| 14  | 1   | 1   | 1   | 0   | 0   |
| 15  | 1   | 1   | 1   | 1   | 1   |


```tikz
\begin{document}
\begin{tikzpicture}[scale=1.1, every node/.style={font=\footnotesize}]

% Griglia 4x4 (celle da x=0..3, y=0..-3)
\foreach \r in {0,1,2,3} {
  \foreach \c in {0,1,2,3} {
    \draw (\c,-\r) rectangle ++(1,-1);
  }
}

% Etichetta angolo in alto a sinistra
\node at (-1.05,0.7) {AB$\backslash$CD};

% Etichette colonne (CD) - CORRETTE: centrate sulle celle (x = 0.5,1.5,2.5,3.5)
\node at (0.5,0.7) {00};
\node at (1.5,0.7) {01};
\node at (2.5,0.7) {11};
\node at (3.5,0.7) {10};

% Etichette righe (AB) - centrate verticalmente sulle righe
\node at (-0.6,-0.5) {00};
\node at (-0.6,-1.5) {01};
\node at (-0.6,-2.5) {11};
\node at (-0.6,-3.5) {10};

% Posiziona gli 1 (centri celle: (c+0.5, -r-0.5))
\node at (1.5,-0.5) {1}; % (00,01)
\node at (1.5,-1.5) {1}; % (01,01)
\node at (2.5,-1.5) {1}; % (01,11)
\node at (3.5,-1.5) {1}; % (01,10)
\node at (0.5,-2.5) {1}; % (11,00)
\node at (1.5,-2.5) {1}; % (11,01)
\node at (2.5,-2.5) {1}; % (11,11)
\node at (3.5,-2.5) {1}; % (11,10)
\node at (2.5,-3.5) {1}; % (10,11)

% --- Raggruppamenti (implicanti primi) ---

% 1) AB -> riga 11 intera
\draw[red, thick, rounded corners=6pt]
  (-0.05,-2) rectangle (3.95,-3);
\node[red] at (4.2,-2.5) {\(AB\)};

% 2) BC -> blocco 2x2 (righe 01-11, colonne 11-10)
\draw[blue, thick, rounded corners=6pt]
  (2,-1) rectangle (4,-3);
\node[blue] at (4.2,-2.0) {\(BC\)};

% 3) A'D -> coppia verticale (colonna 01, righe 00-01)
\draw[green!60!black, thick, rounded corners=6pt]
  (1,0) rectangle (2,-2);
\node[green!60!black] at (2.25,-1.0) {\(A'D\)};

% 4) ACD -> coppia verticale (colonna 11, righe 11-10)
\draw[orange!90!black, thick, rounded corners=6pt]
  (2,-3) rectangle (3,-4);
\node[orange!90!black] at (3.2,-3.5) {\(ACD\)};

\end{tikzpicture}
\end{document}
```

