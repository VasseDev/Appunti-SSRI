---
share: true
---

![Lezione4](../Slides/Lezione4.pdf)

# Programmazione strutturata

> **Obiettivo**
> ottenere un flusso ordinato di istruzione dall'inizio alla fine, eliminando i salti incondizionati (goto)

Ogni struttura di controllo ha un solo **pundo d'ingresso** e un solo **punto d'uscita**.

> Si parla di blocco strutturato.
> Il programma è una **sequenza di blocchi** $\rightarrow$ Flusso tra blocchi.

**Vantaggi**:

- facilità di progettazione
- facilità di verifica del codice
- enfasi sulla struttura e sul flusso

### Costrutti fondamentali

#### Sequenza

> Le istruzioni vengono eseguite una dopo l'altra.

Le istruzioni sono eseguite nell'ordine in cui compaiono nel programma, in cui sono scritte.

![Screenshot 2025-10-08 alle 14.44.50](../../../Immagini/Screenshot%202025-10-08%20alle%2014.44.50.png)

#### Selezione

> L'esecuzione di un blocco viene scelta tra due possibilità.

##### if-then

**Sintassi generica**

```c
if condizione
	then
		blocco 1
	endif
blocco 2
```

**Non strutturata**

```c
if condizione
	then < goto blocco 1>
< goto blocco 2>
blocco 1
blocco 2
```

![Screenshot 2025-10-08 alle 14.47.21](../../../Immagini/Screenshot%202025-10-08%20alle%2014.47.21.png)

##### if-then-else

**Strutturata**

```c
if condizione
	then
		blocco 1
	else
		blocco 2
endif
blocco 3
```

**Non strutturata**

```c
if condizione
	then < goto blocco 1>
blocco 2
< goto blocco 3>
blocco 1
blocco 3
```

![Screenshot 2025-10-08 alle 14.51.27](../../../Immagini/Screenshot%202025-10-08%20alle%2014.51.27.png)

```c
read(dividendo)
read(divisore)
if divisore != 0
	then
		res <- dividendo/divisore
		write(res)
	else
		write("errore: divisione per zero)
endif
```

#### Iterazione

> L'esecuzione di una o più istruzioni viene ripetuta.

##### post-condizionato

**Strutturata**

```c
do
	blocco 1
while condizione
blocco 2
```

**Non strutturato**

```c
blocco 1
if condizione
then <goto blocco 1>
blocco 2
```

![Screenshot 2025-10-08 alle 15.24.37](../../../Immagini/Screenshot%202025-10-08%20alle%2015.24.37.png)

##### pre-condizionato

**Strutturato**

```c
while condizione do
	blocco 1
endwhile
	blocco 2
```

**Non strutturato**

```c
if not condizione
then <goto blocco 2>
blocco 1
<goto etichetta>
blocco 2
```

![Screenshot 2025-10-08 alle 15.27.22](../../../Immagini/Screenshot%202025-10-08%20alle%2015.27.22.png)

> Si può fare a meno dell'iterazione dell'iterazione pre-condizionata:
> combino una post-condizionata con una selezione

```c
if (condizione) {
	do
		// blocco 1
	while (condizione)
}
```

# Eliminazione dei salti

## Programma proprio

> Un programma si definisce **proprio** se:
>
> -   ha un unico ingresso e un'unica uscita
> -   ogni blocco ad un percorso che porta dall'ingresso all'uscita (blocchi propri)

![Screenshot 2025-10-08 alle 15.38.48](../../../Immagini/Screenshot%202025-10-08%20alle%2015.38.48.png)

### Programmi equivalenti

> Due programmi che realizzano lo stesso algoritmo usando operazioni differenti si dicono equivalenti.
> Dati gli stessi _input_ producono gli stessi _output_.

#### Teorema di Böhm Jacopini

> Dato un programma proprio _P_ è possibile costruire un programma strutturato _S(P)_ equivalente a _P_.

Permise di dimostrare che la potenza di calcolo dei programmi strutturati non è inferiore a quelli non strutturati.

> Incapsulo il programma all'interno di un grande while con una condizione sempre vera tranne quando il programma finisce.
> Poi davanti ad ogni istruzione metto una condizione che controlla se quella istruzione va eseguita.

```c
ba = true;
cond = true;
while(cond) {
	if(ba) {
		A;
		ba = false;
		bc = true;
	}
	if(bc) {
		if(C) {
			bb = false;
		else {
			ba = true;
		}
		bc = false;
		}
	}
	if(bb) {
		B;
		bb = false;
		bd = true;
	}
	if(bd) {
		if(D) {
			be = true;
		}
		else {
			cond = false;
		}
		bd = false;
	}
	if(be) {
		E;
		be = false;
		bd = true;
	}
}
```

![Screenshot 2025-10-08 alle 15.55.21](../../../Immagini/Screenshot%202025-10-08%20alle%2015.55.21.png)

> Posso fare a meno della selezione poiché è già presente nell'iterazione

```c
if (condizione) {
	// blocco 1
}
```

```c
b = condizione
while b {
	//blocco 1
	b = false
}
```

> **Problema**
> La correttezza del codice è una proprietà della computazione e non statica del codice scritto.

*Gli invarianti sono associati ad un punto del programma ma ci danno delle indicazioni circa le **proprietà della sua computazione***.

### Turing equivalenza
> I linguagi di programmazione hanno la stessa potenza espressiva della macchina di Turing

### Programmazione strutturata ed efficienza
