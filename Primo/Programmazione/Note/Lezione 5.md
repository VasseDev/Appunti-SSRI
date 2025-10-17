---
share: true
---

# Linguaggio C

![Lezione5-Intro LinguaggioC](../Slides/Lezione5-Intro%20LinguaggioC.pdf)

## Introduzione

> Inventato negli anni '70 da Dennis Ritchie. Serviva per scrivere il sistema operativo Unix.

**Caratteristiche:**

- Il programma è vista come una funzione (main) che prende dei dati in ingresso e restituisce un output;
- Il programma è fatto da sequenze di funzioni;
- Il programma risiede su uno o più file di testo, chiamati sorgenti.

> **Formato del main** > \<output\> \<nome funzione\> "(" \<input\> ")" ...

La **compilazione** è il processo che riunisce i sorgenti in un'unica entità che poi viene tradotta in codice macchina (assembly).

**Primo programma**

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	printf("Hello!");

	return 0;
}
```

> **Buona norma**
> È buona norma dichiarare le variabili prima di utilizzarle.

## Overflow e underflow

I numeri sono rappresentati in uno spazio finito di memoria (tot bit), può dunque succedere che una operazione porti ad un numero non rappresentabile da quella quantità di bit.

> **Esempio**
> Prendiamo un intero a 3 bit.

```c
int a = 8;
a += 1; // overflow
```

```c
int a = -8;
a -= 1; // underflow
```

## Input dei Dati

```c
getchar(); // leggere un carattere

scanf(); // legge char int float e double

// esempio
char c;
c = getchar();
```

> **Attenzione**
> Quando si usa `getchar()` si preme anche invio, quindi i caratteri inseriti sono due: il carattere e `\n`.

## La selezione

```c
if (<espressione>) {
	// blocco if
} else {
	// blocco else
}
```

> **Attenzione**
> Nel linguaggio `C` qualsiasi numero è _vero_, mentre lo `0` è _falso_.

![Lezione5-LinguaggioC](../Slides/Lezione5-LinguaggioC.pdf)

## Espressione

È una sequenza di simboli a cui è _associato un valore_.

**Tipi di operatori:**

- relazionali (<,>,<=,>=,\==,!=)
- aritmetici: (+,-,\*,/,%)
- logici: (!, &&, ||)

> Gli operatori aritmetici precedono quelli relazionali i quali precedono quelli logici.

### Valore di una espressione

- _Nel caso di una costante:_ il suo valore
- _Nel caso di una variabile:_ il suo valore corrente
- _Nel caso di una funzione:_ il valore restituito
- _Nel caso di un'espressione composta:_ il valore ottenuto eseguendo l'operaazione

### Operatori aritmetici

> I tipi degli argomenti hanno un ruolo nel decidere la semantica dell'operatore.

```c
int a = 1;
float b = 2;
float res;

res = a / b; // è la divisione tra reali
```

Devono essere specificare due semantiche diverse:

- _\<expr\>.int "/" \<expr\>.int_ (si usa la divisione intera)
- _\<expr\>.float "/" \<expr\>.float_ (si usa la divisione reale)

> **Nota**
> Se i due operandi sono di tipo diverso si esegue la _promozione_ del più piccolo al grande.
> Es. `int -> float`

### Operatori logici

#### AND

```c
// congiunzione
a&b // vale 1 se la valutazione di a e di b da vero, vale 0 altrimenti
```

#### OR

```c
// disgiunzione
a||b // vale 1 se la valutazione di a e di b da vero, vale 0 altrimenti
```

> **short-circuit**
> La valutazione avviene in _short-circuit_ ovvero si interrompe appena posso dire se si tratta di una espressione vera o falsa.

## Variabile

Ha un'_esistenza limitata_. Quando la variabile è fuori dal suo scope viene _deallocata_.

> **Scope**
> Ambito di visibilità di una variabile.
> scope globale $\rightarrow$ può essere usata in tutto il programma
> scope locale $\rightarrow$ può essere usata solamente nel blocco in cui è dichiarata

### Dichiarazioni

Una variabile va dichiarata prima di usarla ed è buona norma dichiarare subito tutto all’interno della funzione/blocco che userà quelle variabili.

## Tipi di dato

> **Tipo**
>
> -   l'insieme dei valori che una variabile può assumere
> -   il formato binario del valore
> -   lo spazio occupato in memoria
> -   le operazioni che si possono compiere

_Tipi elementari:_ informazioni composte da un solo valore
_Tipi strutturati:_ informazioni composte da più valori concettualmente legati

### Tipi predefiniti

- **Interi:**
    - short
    - int
    - long
- **Naturali:**
    - unsigned short
    - unsigned int
    - unsigned long
- **Reali:**
    - float
    - double
    - long double
- **Caratteri:**
    - char
    - unsigned char
    - signed char

### Conversioni di tipo

Ne esistono due tipi:

- conversioni _implicite_
- conversioni _esplicite_

#### Conversione implicita

Avviene quando:

- un'_espressione composta_ ha operandi di tipo diverso
- un _assegnamento_ ha ha tipo r-value e l-value
- una chiamata a _funzione_ ha argomento di tipo diverso dai parametri corrispondenti
- un'istruzione _return_ è seguita da un tipo diverso del risultato della funzione

##### Conversioni implicite negli assegnamenti

```c
<variabile> "=" <espressione>
```

- Se la variabile ha tipo limitato:
    - _valore dell'espressione intero e variabile intera di tipo inferiore o carattere_ $\rightarrow$ se il valore rispetta l'intervallo, si converte; altrimenti diventa indefinito;
    - _valore dell'espressione reale e variabile reale di tipo inferiore_ $\rightarrow$ se il valore rispetta l'intervallo, si approssima; altrimenti diventa indefinito;
    - _valore dell'espressione reale e variabile intera_ $\rightarrow$ si tronca

#### Conversione esplicita

> **Casting**
> La conversione esplicita è anche chiamata **casting**.
> Il casting è un operatore unario ad alta priorità.

```c
// esempi
int a, b;
double r;
r = a/b;
r = (double) a/b;
r = a/(double) b;
r = (double) a/(double) b;
```

## Costanti

> Il tipo è implicito.

Si può specificare il tipo aggiungendo una lettera all $a fine.
Es. `1.4f` è `float`, `1L` è `long` mentre `1` da solo sarebbe `int`.

## Macro

> Direttiva per il preprocessore, identificate dalla direttiva `#define`

**Esempio**

```C
#define LARGHEZZA 20
```

> Definisce un'etichetta che identifica il letterale.
> **NON** assegna una variabile, non viene quindi mantenuta in memoria (processo) ma è contenuta nel programma.

## identificatore

> Elemento lessicale della grammatica del C _definito a piacere_ dal programmatore

Esempi:

- nome di una variabile
- nome di una funzione
- ...

Non può iniziare con una cifra ed è _case sensitive_.

### Assegnamento

> L'assegnamento è un _operatore associativo destro_

> **Side effect**
> Modifica il valore dell'operando a sinistra

#### Assegnamento composto

> L'assegnamento si può _associare_ ad altri operatori aritmetici

```c
int a = 1;
a += 1; // 2
a -= 1; // 1
a *= 3; // 3
a /= 2; // 3/2
```

> **Attenzione** > `=` e `+=` sono diversi da punto di vista semantico:

```c
/*
L'= valuta prima la parte destra e dopo la parte sinistra, valutando
la i due volte
*/
i = i + 2;

/*
Il += valuta prima la parte destra e poi la parte sinistra, valutando
la i una sola volta
*/
i += 2;
```

#### Incremento e decremento

```c
int a = 1;

//incrementa a di 1
++a;
a++;

// decrementa a di 1
--a;
a--; 
```

> Possono essere usati sia in notazione _prefissa_ che _postfissa_.
> - prefissa $\rightarrow$ esegue subito
> - postfissa $\rightarrow$ esegue alla fine

## Priorità degli operatori

![Screenshot 2025-10-15 alle 14.20.10](../../../Immagini/Screenshot%202025-10-15%20alle%2014.20.10.png)

# Esercizio
![Lezione5 Esercizi](../Slides/Lezione5%20Esercizi.pdf)