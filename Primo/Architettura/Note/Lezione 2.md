---
share: true
---

![Architettura02](../Slides/Architettura02.pdf)

## Complemento a 2

### da decimale a binario

Sia $x$ intero decimale in $[-2^{N-1},+2^{N-1}-1]$. La rappresentazione in decimale di un binario in complemento a 2 è:

- se $x\geq0$ come la rappresentazione di $x$ senza segno
- se $x<0$ come la rappresentazione di $2^N+x$ senza segno

> **Regola** > $$(x^{N-1}x^{N-2}\dots x^1x^0)=(x^{N-1}(-2^{N-1})+x^{N-2}2^{N-2}+\dots+x^12^1+x^02^0)_{10}$$

### somma/sottrazione

Si usa lo stesso metodo per somma e sottrazione: $$x-y=x+(-y)$$

### overflow

> L'**overflow** avviene quando la somme non è nell'intervallo di rappresentazione.
> Può avvenire solo con la somma tra due positivi o due negativi.

Se il segno è differente da quello dei due addendi si ha sicuramente un **overflow**.

> Il riporto finale viene ignorato.

#### esempi

![Screenshot 2025-10-08 alle 11.48.56](../../../Immagini/Screenshot%202025-10-08%20alle%2011.48.56.png)
![Screenshot 2025-10-08 alle 11.49.27](../../../Immagini/Screenshot%202025-10-08%20alle%2011.49.27.png)

## Complemento a 1

> Il numero negativo di un numero si rappresenta convertendo tutti i bit.

### esempio

$$
0100_2=4_{10}
$$

$$
1011_2=-4_{10}
$$

### contro

- due rappresentazioni per lo 0
    - 00 e 11
- per la sottrazione è richiesto un passo in più

# Rappresentazione dei reali

## virgola fissa

Non si utilizza e si possono rappresentare numeri limitati.

## virgola mobile

Equivalente alla notazione scientifica in base 10.

> **esempio** $$+278,35=+2,7834\times10^2$$

### forma normalizzata

$$
(-1)^S\times(1,M)_2\times2^y
$$

M = mantissa
y = esponente
S = segno (S=1 negativo, S=0 positivo)

#### singola precisione

![Screenshot 2025-10-08 alle 12.02.39](../../../Immagini/Screenshot%202025-10-08%20alle%2012.02.39.png)

#### doppia precisione

![Screenshot 2025-10-08 alle 12.06.14](../../../Immagini/Screenshot%202025-10-08%20alle%2012.06.14.png)

### IEEE 754

#### precisione singola

> Si usa la **codifica polarizzata** a 127 dell'esponente.
> Questo permette ad E di essere sempre positivo.

$$
(-1)^S\times(1,M)\times2^{E-127}
$$

$$
y=E-127\space\text{ovvero}\space E=127+y
$$

$$
-126\leq y\leq127
$$

$$
1\leq E\leq254
$$

#### precisione doppia

> Si usa la **codifica polarizzata** a 1023 dell'esponente.
> Questo permette ad E di essere sempre positivo.

$$
(-1)^S\times(1,M)\times2^{E-1023}
$$

$$
y=E-1023\space\text{ovvero}\space E=1023+y
$$

$$
-1022\leq y \leq1023
$$

$$
1\leq E\leq 2046
$$

#### zero

> Per convenzione per rappresentare lo $0$ si mette a $0$ sia mantissa che esponente

![Screenshot 2025-10-08 alle 12.21.28](../../../Immagini/Screenshot%202025-10-08%20alle%2012.21.28.png)

### da decimale a binario

#### $-0,75_{10}$ in singola precisione standard IEEE 754 (polarizzazione 127)

$$
0,75_{10}=0,11_{2}
$$

$$
-1,1\times2^{-1}\rightarrow\text{normalizzazione}
$$

$$
y=-1,\space M=1,\space S=1
$$

$$
E=(127-1)=126_{10}=01111110_2
$$

$$
(-1)^1\times(1,10000000000000000000000)\times2^{126-127}
$$

![Screenshot 2025-10-08 alle 12.29.37](../../../Immagini/Screenshot%202025-10-08%20alle%2012.29.37.png)

#### $-0,75_{10}$ in doppia precisione standard IEEE 754 (polarizzazione 1023)

$$
0,75_{10}=0,11_{2}
$$

$$
-1,1\times2^{-1}\rightarrow\text{normalizzazione}
$$

$$
E=1023-1=1022_{10}=01111111110_2
$$

$$
(-1)^1\times(1,100000\dots00000)\times2^{1022-1023}
$$

![Screenshot 2025-10-08 alle 12.32.54](../../../Immagini/Screenshot%202025-10-08%20alle%2012.32.54.png)

## Esercizi
### N=8, rappresenta $-26_{10}$
#### modulo e segno
$$
1001\space1010_2
$$
#### complemento a 2
$$
1110\space0110_2
$$
#### complemento a 1
$$
11100101_2
$$
### converti in decimale i numeri in C2
#### $1110\space0101_2$
$$
1001\space1011_2=-27_{10}
$$
#### $0011\space0110_2$
$$
0011\space0110_2=54_{10}
$$
### esegui la somma e la sottrazione in C2
#### $-126_{10}$ e $25_{10}$
