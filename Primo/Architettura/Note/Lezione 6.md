---
share: true
---
# Decoder

Le informazioni discretizzabili sono rappresentate con codici binari.
Con $n$ bit si possono rappresentare $2^n$ valori.

## Decodifica n-m

La _decodifica n-m_ è la trasformazione di un codice a $n$ bit in input a uno di $m$ bit in uscita con $n\leq m\leq2^n$.
A ogni parole del codice in input corrisponde una sola parola in output.

**Decoder 2-4 (mintermini)**

![Screenshot 2025-11-06 alle 08.57.37](../../../Immagini/Screenshot%202025-11-06%20alle%2008.57.37.png)

# Encoder

L'_encoder_ fa le operazioni inverse al decoder.

**Encorder 8-3**

![Screenshot 2025-11-06 alle 09.00.32](../../../Immagini/Screenshot%202025-11-06%20alle%2009.00.32.png)

$$
A_0=D_1+D_3+D_5+D_7
$$

$$
A_1=D_2+D_3+D_6+D_7
$$

$$
A_2=D_4+D_5+D_6+D_7
$$

Tre porte OR a 4 ingressi.
Ci deve essere sempre un solo ingresso uguale a 1.

# Selezione

![Screenshot 2025-11-06 alle 09.03.50](../../../Immagini/Screenshot%202025-11-06%20alle%2009.03.50.png)

Se $S=0$ passa il segnale $I_0$.
Se $S=1$ passa il segnale $I_1$.

# Sommatori binari

_Circuito aritmetico_ $\rightarrow$ circuito combinatorio che esegue operazioni aritmetiche.

## Half adder

_Hal adder_ $\rightarrow$ circuito combinatorio che esegue la somma di due bit

![Screenshot 2025-11-06 alle 09.07.05](../../../Immagini/Screenshot%202025-11-06%20alle%2009.07.05.png)

## Full adder

Il _full adder_ permette di sommare tre bit nella somma con riporto.

![Screenshot 2025-11-06 alle 09.08.06](../../../Immagini/Screenshot%202025-11-06%20alle%2009.08.06.png)

### Mappa di Karnaugh

| X\YZ | 00  | 01  | 11  | 10  |
| :--: | :-: | :-: | :-: | :-: |
|  0   |     |  1  |     |  1  |
|  1   |  1  |     |  1  |     |

$$
S=X\overline{Y}\overline{Z}+\overline{X}Y\overline{Z}+\overline{X}\overline{Y}Z+XYZ=X\oplus Y\oplus Z
$$

| X\YZ | 00  | 01  | 11  | 10  |
| :--: | :-: | :-: | :-: | :-: |
|  0   |     |     |  1  |     |
|  1   |     |  1  |  1  |  1  |

$$
C=XY+XZ+YZ=(Y\cdot Z)+(X\cdot Z)+(X\cdot Y)=(X\cdot Y)+(X\oplus Y)\cdot Z
$$

### Circuito logico

> Il circuito logico di un full adder si può vedere come la somma di due half adder in cascata.

![Screenshot 2025-11-07 alle 10.54.23](../../../Immagini/Screenshot%202025-11-07%20alle%2010.54.23.png)

![Screenshot 2025-11-07 alle 10.55.24](../../../Immagini/Screenshot%202025-11-07%20alle%2010.55.24.png)

# Circuiti sequenziali

I _circuiti sequenziali_ sono circuiti in cui l'uscita dipende non solo dagli ingressi attuali, ma anche dallo stato precedente del circuito.
Sono in grado di immagazzinare informazioni tra un'operazione e l'altra.

![Screenshot 2025-11-07 alle 10.56.26](../../../Immagini/Screenshot%202025-11-07%20alle%2010.56.26.png)

## Sincrono e asincrono

I circuiti sequenziali si dividono in:

- Sincroni: l'aggiornamento dello stato avviene in corrispondenza di un segnale di clock.
- Asincroni: l'aggiornamento dello stato avviene non appena cambia un ingresso. Sono molto più complessi da progettare.

## Latch

Il latch è un circuito sequenziale asincrono che immagazzina un bit di informazione. Sono utilizzati come componenti dei flip-flop.

Il *latch* è un circuito bistabile: può assumere due stati stabili (0 e 1).

###  Latch SR

Sono latch set-reset.
Sono un circuito composto da due porte NAND collegate in retroazione.

|  X  |  Y  | X NAND Y |
| :-: | :-: | :------: |
|  0  |  0  |    1     |
|  0  |  1  |    1     |
|  1  |  0  |    1     |
|  1  |  1  |    0     |

![Screenshot 2025-11-07 alle 11.01.54](../../../Immagini/Screenshot%202025-11-07%20alle%2011.01.54.png)

| $\overline{S}$ | $\overline{R}$ |  Q  | $\overline{Q}$ |
| :------------: | :------------: | :-: | :------------: |
|       0        |       1        |  1  |       0        |
|       1        |       1        |  1  |       0        |
|       1        |       0        |  0  |       1        |
|       1        |       1        |  0  |       1        |
|       0        |       0        |  1  |       1        |

- Quando $\overline{S}=0$ e $\overline{R}=1$, l'uscita Q viene forzata a 1 (set).
- Quando $\overline{S}=1$ e $\overline{R}=0$, l'uscita Q viene forzata a 0 (reset).
- Quando $\overline{S}=1$ e $\overline{R}=1$, l'uscita Q mantiene il suo stato precedente (hold).
- Quando $\overline{S}=0$ e $\overline{R}=0$, si verifica una condizione proibita in cui entrambe le uscite Q e $\overline{Q}$ diventano 1, violando la regola che Q e $\overline{Q}$ devono essere sempre complementari.

### Latch D
Il latch D (data o delay) è un circuito che elimina la condizione proibita del latch SR.
Usa 4 porte NAND e un inverter.

C'è un segnale di controllo C che abilita o disabilita il latch:
- Quando C=1, l'uscita Q segue l'ingresso D.
- Quando C=0, l'uscita Q mantiene il suo stato precedente.

![Screenshot 2025-11-07 alle 11.10.17](../../../Immagini/Screenshot%202025-11-07%20alle%2011.10.17.png)

|  D  |  C  |  Q  | $\overline{Q}$  |
| :-: | :-: | :-: | :-------------: |
|  0  |  0  | Q0  | $\overline{Q0}$ |
|  0  |  1  |  0  |        1        |
|  1  |  0  | Q0  | $\overline{Q0}$ |
|  1  |  1  |  1  |        0        |
