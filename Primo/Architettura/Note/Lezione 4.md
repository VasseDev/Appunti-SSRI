---
share: true
---

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

> **Maxtermine** (M)
> _Somma delle n_ variabili dove ciascuna variabile può apparire negata o non.

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

