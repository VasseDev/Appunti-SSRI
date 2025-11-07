---
share: true
---

# Struttura di un calcolatore

![Screenshot 2025-10-10 alle 10.50.14](../../../Immagini/Screenshot%202025-10-10%20alle%2010.50.14.png)

- **Memoria**:
    - programmi e processi
    - dati in ingresso, uscita ed intermedi
- **CPU (Central Processing Unit)**:
    - Control Unit $\rightarrow$ dove vengono orchestrate le operazioni
    - Datapath $\rightarrow$ dove avvengono le operazioni
- **Input/Output**

## Livelli di astrazione di un calcolatore

- **Algoritmi**: descrivono i passi necessari per risolvere un prolema
- **Linguaggi di programmazione**: passi di un algoritmi descritti in un linguaggio di programmazione di alto livello
- **Sistema operativo**: gestisce le risorse del computer
- **Architettura dell'insieme delle istruzioni (ISA)**: istruzioni eseguite dal processore
- **Microarchitettura**: architettura del processore
- **Gestore dei trasferimenti dei dati**
- **Porte logiche**
- **Transistor**

## Progettazione dei sistemi digitali

- **Messa a punto delle specifiche**: comportamento del circuito
- **Formalizzazione**: ricavare la funzione che rappresenta il circuito
- **Ottimizzazione**: ricavare il circuito migliore
- **Mappatura tecnologica**: ottenere un circuito elettronico
- **Verifica**: correttezza finale

## Logica binaria e porte logiche

> I **circuiti elettronici digitali** trattano informazioni binarie e sono composti da transistor.
> I circuiti elettronici digitali di base sono chiamati **porte logiche**.

I circuiti sono delle reti di porte logiche.
Per descrivere questa rete si usa:

- la logica binaria
- l'algebra booleana

### Logica binaria

Caratteristiche:

- i valori possono avere valore 0 o 1
- gli operatori fondamentali sono: AND, OR, NOT
    - AND = $\times$
    - OR = $+$

#### La negazione (NOT)

> Inverte i bit

$\overline X$ è vera quando $X$ è falsa e viceversa ![Screenshot 2025-10-10 alle 11.17.53](../../../Immagini/Screenshot%202025-10-10%20alle%2011.17.53.png)

#### Congiunzione (AND)

> Moltiplica i bit

$XY$ è vera se e solo se $X$ è vera e $Y$ è vera
![Screenshot 2025-10-10 alle 11.19.13](../../../Immagini/Screenshot%202025-10-10%20alle%2011.19.13.png)

#### Disgiunzione (OR)

> Somma i bit

$X+Y$ è vera se almeno una tra $X$ e $Y$ è vera
![Screenshot 2025-10-10 alle 11.20.17](../../../Immagini/Screenshot%202025-10-10%20alle%2011.20.17.png)

> **ATTENZIONE** > $1+1=1$ e **non** $1+1=10$ come nell'aritmetica binaria

### Porte logiche

Sono circuiti di base che calcolano funzioni semplici.

![Screenshot 2025-10-10 alle 11.27.05](../../../Immagini/Screenshot%202025-10-10%20alle%2011.27.05.png)

## Algebra booleana

> Algebra delle variabili binarie e degli operatori logici.

Un'espressione booleana è composta da:

- variabili booleane e costanti 0,1
- operatori logici
- parentesi

> Una funzione booleana è espressa con $Y=E$ dove $Y$ è una variabile booleana e $E$ un'espressione booleana.

Se ho $n$ valori in input, la funzione booleana $Y$ è:

- $Y:\{0,1\}^n\rightarrow\{0,1\}$ ($2^n$ possibili input)

### Tabella di verità

Una tabella di verità è composta da:

- $n$ colonne che corrispondono alle variabili indipendenti (input)
- una colonna che è la variabile dipendente (output)

### Circuiti logici

> Una funzione booleana può essere rappresentata anche con un circuito logico combinatorico composto da porte logiche collegate tra loro da fili.

La rappresentazione con espressione algebrica non è unica:
$$L=D\overline X+A=D\overline X+\overline DA+DA$$

### Tecniche ottimizzazione

![Screenshot 2025-10-10 alle 12.16.37](../../../Immagini/Screenshot%202025-10-10%20alle%2012.16.37.png)

#### Leggi di De Morgan

$$
\overline{(X+Y)}=\overline X\cdot\overline Y
$$

$$
\overline{(X\cdot Y)}=\overline X+\overline Y
$$

![Screenshot 2025-10-10 alle 12.37.26](../../../Immagini/Screenshot%202025-10-10%20alle%2012.37.26.png)

#### Semplificazioni

L'algebra booleana può essere utilizzata per semplificare un circuito digitale.
**Esempio:**
![Screenshot 2025-10-10 alle 12.40.12](../../../Immagini/Screenshot%202025-10-10%20alle%2012.40.12.png)
##### Costo di un circuito
- Numero di termini
- Numero di letterali

> **Esempio**
> $$F=\overline XYZ+\overline XY\overline Z+XZ$$
> 3 termini e 8 letterali


# Esercizi
## Esercizio 1
### Parte 1
Costruire la tabella di verità e il circuito logico per la funzione:
$$
F=\overline{XY}+\overline{Z}
$$

|  x  |  y  |  Z  | XY  | $\overline{XY}$ | $\overline Z$ | $\overline{XY}+\overline{Z}$ |
|:---:|:---:|:---:|:---:|:---------------:|:-------------:|:----------------------------:|
|  0  |  0  |  0  |  0  |        1        |       1       |              1               |
|  0  |  0  |  1  |  0  |        1        |       0       |              1               |
|  0  |  1  |  0  |  0  |        1        |       1       |              1               |
|  0  |  1  |  1  |  0  |        1        |       0       |              1               |
|  1  |  0  |  0  |  0  |        1        |       1       |              1               |
|  1  |  0  |  1  |  0  |        1        |       0       |              1               |
|  1  |  1  |  0  |  1  |        0        |       1       |              1               |
|  1  |  1  |  1  |  1  |        0        |       0       |              0               |

![Screenshot 2025-10-30 alle 16.28.38](../../../Immagini/Screenshot%202025-10-30%20alle%2016.28.38.png)

### Parte 2

$$
F=X(Y+\overline{Z})
$$

|  X  |  Y  |  Z  | $\overline{Z}$ | Y+$\overline Z$ | $X(Y+\overline{Z})$ |
| :-: | :-: | :-: | :------------: | :-------------: | :-----------------: |
|  0  |  0  |  0  |       1        |        1        |          0          |
|  0  |  0  |  1  |       0        |        0        |          0          |
|  0  |  1  |  0  |       1        |        1        |          0          |
|  0  |  1  |  1  |       0        |        1        |          0          |
|  1  |  0  |  0  |       1        |        1        |          1          |
|  1  |  0  |  1  |       0        |        0        |          0          |
|  1  |  1  |  0  |       1        |        1        |          1          |
|  1  |  1  |  1  |       0        |        1        |          1          |

![Screenshot 2025-10-30 alle 16.43.54](../../../Immagini/Screenshot%202025-10-30%20alle%2016.43.54.png)