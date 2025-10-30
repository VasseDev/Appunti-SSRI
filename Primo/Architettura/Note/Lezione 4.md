---
share: true
---
![Architettura04](../Slides/Architettura04.pdf)
# Forme canoniche

> Le _forme canoniche_ sono particolari forme algebriche che facilitano la semplificazione delle espressioni.

Due tipi:

- **SOP** (Sum Of Products)
    - es. $X\overline Y+\overline{X}+YZ$
- **POS** (Product Of Sums)
    - es. $(X+Y+Z)\overline Z(Y+\overline Z)$

# Mintermini e maxtermini

> **Mintermine** (m)
> _Prodotto delle n_ variabili dove ciascuna variabile può apparire negata o non.
> Esempio: $XYZ\quad X\overline{Y}Z\quad\overline{X}Y\overline{Z}$

> **Maxtermine** (M)
> _Somma delle n_ variabili dove ciascuna variabile può apparire negata o non.
> Esempio: $X+Y+Z\quad X+\overline{Y}+\overline{Z}\quad X+\overline{Y}+Z$

Esistono $2^n$ possibili mintermini e $2^n$ possibili maxtermini.

## Esempi

**Mintermini**
![Screenshot 2025-10-17 alle 10.56.56](../../../Immagini/Screenshot%202025-10-17%20alle%2010.56.56.png)

**Maxtermini**
![Screenshot 2025-10-17 alle 10.57.29](../../../Immagini/Screenshot%202025-10-17%20alle%2010.57.29.png)

> Notiamo come $$M_i=\overline{m_i}$$

## Somma di mintermini

> Ogni funzione booleana può essere scritta come _somma di mintermini._

### Esempio

$$
	F=\overline{XYZ}+\overline{X}Y\overline{Z}+X\overline{Y}Z+XYZ=m_0+m_2+m_5+m_7=\sum m(0,2,5,7)
$$

$$
\overline F=\overline{XY}Z+\overline{X}YZ+X\overline{YZ}+XY\overline{Z}=m_1+m_3+m_4+m_6=\sum m(1,3,4,6)
$$

## Prodotto di maxtermini

$$
\overline{F}=m_1+m_3+m_4+m_6=\sum m(1,3,4,6)
$$

$$
F=\overline{m_1+m_3+m_4+m_6}=\overline{m_1}\cdot \overline{m_3}\cdot \overline{m_4}\cdot \overline{m_6}=M_1\cdot M_3\cdot M_4\cdot M_6=\prod M(1,3,4,6)
$$

![Screenshot 2025-10-17 alle 11.22.07](../../../Immagini/Screenshot%202025-10-17%20alle%2011.22.07.png)

## Proprietà dei mintermini

- Qualunque funzione booleana può essere scritta come somma di mintermini
- Il complemento di una funzione può essere scritto nello stesso modo
- Una funzione con $2^n$ vale sempre $1$
- Una funzione che non ha mintermini vale sempre $0$

### Esempio

$$
E=\overline{Y}+\overline{XZ}
$$

| X   | Y   | Z   |     | E   |
| --- | --- | --- | --- | --- |
| 0   | 0   | 0   |     | 1   |
| 0   | 0   | 1   |     | 1   |
| 0   | 1   | 0   |     | 1   |
| 0   | 1   | 1   |     | 0   |
| 1   | 0   | 0   |     | 1   |
| 1   | 0   | 1   |     | 1   |
| 1   | 1   | 0   |     | 0   |
| 1   | 1   | 1   |     | 0   |

$$
E=\overline{XYZ}+\overline{XY}Z+\overline{X}Y\overline{Z}+X\overline{YZ}+X\overline{Y}Z=\sum m(0,1,2,4,5)
$$

## Somma di prodotti SOP

La **somma di mintermini**:

- è una forma canonica
- è unica
- è una _SOP_
- spesso si può semplificare per ottenere una _SOP_ più compatta

> **Attenzione**
> Non tutte le SOP sono somme di mintermini

La _SOP_ è anche detta _forma a due livelli_:

- livello di OR
- livello di AND

![Screenshot 2025-10-17 alle 11.34.18](../../../Immagini/Screenshot%202025-10-17%20alle%2011.34.18.png)

### Semplificazione

La complessità di un circuito dipende dalla complessità dell'espressione algebrica.

> La tabella di verità è _unica_, ma possono esistere diverse espressioni corrispondenti:
>
> -   è necessario trovare la migliore
> -   e trovare la metrica per valutare quale sia la migliore

Esistono tre metodi per trovare la migliore espressione algebrica per una funzione booleana:

1. **Equivalenze**
2. **Mappe di Karnaugh (K-mappe)**
3. **Sintesi logica**

#### Mappe di Karnaugh

> Una _mappa di Karnaugh_ è:
>
> -   una matrice le cui celle rappresentano i mintermini di $f$
> -   equivalente ad una tabella di verità
> -   una rappresentazione unica

Le celle vicine corrispondono a _mintermini che hanno un solo letterale diverso_.

- es. $\overline{A}BCD$ e $ABCD$ sono in celle vicine

Ciò è utile poiché due mintermini in celle vicine _si possono unire in un solo prodotto che contiene solo i letterali uguali._

- es. $\overline{A}BCD+ABCD=(\overline{A}+A)BCD=1\cdot BCD=BCD$

##### K-Mappe a 2 variabili

| X   | Y   | F   |
| --- | --- | --- |
| 0   | 0   | 0   |
| 0   | 1   | 1   |
| 1   | 0   | 2   |
| 1   | 1   | 3   |

| X\Y |  0  |  1  |
|:---:|:---:|:---:|
|  0  |  0  |  1  |
|  1  |  2  |  3  |

| X\Y |        0        |       1…        |
|:---:|:---------------:|:---------------:|
|  0  | $\overline{XY}$ | $\overline{X}Y$ |
|  1  | $X\overline{Y}$ |      $XY$       |

$$
\overline{X}Y+XY=Y
$$

###### Esempio

![Screenshot 2025-10-17 alle 12.23.32](../../../Immagini/Screenshot%202025-10-17%20alle%2012.23.32.png)

##### K-Mappe a 3 variabili

![Screenshot 2025-10-17 alle 12.33.54](../../../Immagini/Screenshot%202025-10-17%20alle%2012.33.54.png)

##### K-Mappe a 4 variabili

![Screenshot 2025-10-17 alle 13.47.51](../../../Immagini/Screenshot%202025-10-17%20alle%2013.47.51.png)

