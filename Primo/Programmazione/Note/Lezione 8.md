---
share: true
---

![Lezione8-1-LinguaggioC](../Slides/Lezione8-1-LinguaggioC.pdf)
![Lezione8-2-CallAndReturn](../Slides/Lezione8-2-CallAndReturn.pdf)

# Funzioni

> **Definizione astratta** 
> _Un programma computa una funzione che mappa input nell'output._

Nel **concreto** il programma è la funzione `main()`.

> **Sottoprogrammi**
> Brani di codice abbastanza importanti da avere un nome, dei dati e nel caso dei risultati.

Il programma viene scomposto in sottoprogrammi, realizzati come:

- _Procedure:_ sottoprogrammi senza valore di ritorno.
- _Funzioni:_ sottoprogrammi con un valore di ritorno.

## Suddivisione del programma

Obiettivi:

- **dividere** il programma in brani di codice facili da capire e modificare;
- **non ripetere** bradi di codice identici;
- **riutilizzare** brani di codice in programmi diversi.

## Dichiarazione

Come nelle variabili:

```c
tipo nome(tipo nome,...,tipo nome);
```

### void

> Si usa se voglio indicare l'assenza di un ritorno

**void** $\rightarrow$ _tipo che non ha valore associato_.

$$
\text{Funzione che torna void}=\text{procedura}
$$

## Dichiarazione

> dichiaro + implemento

```c
tipo nome(tipo nome,...,tipo nome)
{
	<implementazione funzione>
}
```

Esempio

```c
#include <stdio.h>

void stampa(void) {
	printf("Ciao\n");
	return;
}

int main(void) {
	stampa();
	return 0;
}
```

## Return

> Ritorna un valore al chiamante e fa tornare il controllo al chiamante.

> **N.B.**
> Il return del _main_ ritorna il controllo al chiamante quindi la shell che ha lanciato il programma.

## Extern

> _Keyword_ che permette di definire una variabile globale.

Quando definisco una funzione è come se fosse implicitamente `extern`.

## Parametri

- **Parametri formali** sono i nome dei parametri indicati nel prototipo.
- **Parametri attuali** sono i valori indicati nelle chiamate.

## Albero delle chiamate

> Le chiamate a funzione sono organizzate ad **albero**.

La radice è il main.
Ogni chiamata di funzione è un ramo collegato alla funzione chiamante.

**Esempio**
![Screenshot 2025-10-30 alle 02.39.55](../../../Immagini/Screenshot%202025-10-30%20alle%2002.39.55.png)

> _Ha senso che una funzione chiami se stessa?_ > **Sì** e si chiama **ricorsione**.

## Macro

> Il C permette di definire una sorta di funzioni attraverso la `#define`.
> Tali funzioni si chiamano **macro**.

**NON** funzionano come le funzioni $\rightarrow$ - non vengono eseguite. Vengono _sostituite_ nel codice _prima_ della compilazione.

**Esempio**

```c
#include <stdio.h>
#include <stdlib.h>

#define MUL(a,b) a*b
#define STAMPA(a) printf("valore = %d\n",a)

int main()
{
	int a = 10;
	int b = 4;
	int c = 3;

	printf("Mul vale %d\n", MUL(a+c,b));
	STAMPA(a);

	STAMPA(MUL(a+c,b));
	printf("fine\n");

	return 0;
}
```

Output del preprocessore:

```c
int main()
{
	int a = 10;
	int b = 4;
	int c = 3;

	printf("Mul vale %d\n", a+c*b);
	printf("valore = %d\n", a);

	printf("valore = %d\n", a+c*b);
	printf("fine\n");

	return 0;
}
```

# Sottoprogrammi

## Astrazione

> Il cervello umano non parallelizza il pensiero in modo indefinito.
> Abbiamo delle limitazioni $\rightarrow$ _dobbiamo **astrarre** i problemi_

Si usa l'approccio **Top Down** per scomporre il macro problema in problemi più dettagliati.

## Vantaggi

- sono uno strumento per scomporre il problema in _sottoproblemi_ più gestibili;
- _abbreviano_ il lavoro di codifica;
- sono essenziali per _articolare_, _suddividere_ e _strutturare_ un programma;
- migliorano la _leggibilità_ e la _verificabilità_ del codice;
- mettono in risalto le _variabili che influenzano_ il sottoprogramma stesso;
- pongono in risalto le condizioni per l'ottenimento del _risultato intermedio_.

# Segmentazione della memoria

- Quando viene eseguito un programma è stato trasformato in codice macchina.
- I riferimenti a indirizzi di memoria locali al processo sono espressi in forma relativa.
- La gestione della memoria è affidata al _Sistema Operativo_.

**Semplificando**:

- _Segmento codice_
    - contiene il codice del programma
    - è condiviso tra tutti i processi che eseguono lo stesso programma
    - è in sola lettura per ovvie ragioni
- _Segmento dei dati_
    - contiene le variabili
        - inizializzate
        - non inizializzate

![Screenshot 2025-10-30 alle 12.29.25](../../../Immagini/Screenshot%202025-10-30%20alle%2012.29.25.png)

## Call and return

Le funzioni (o procedure) sono ambiti di esecuzione separati $\rightarrow$ viene scatenata una serie di eventi:

- avviene un salto nell'esecuzione della funzione chiamante
- viene sospesa l'esecuzione della funzione chiamante
- avviene un salto indietro quando la funzione chiamata termina

![Screenshot 2025-10-30 alle 13.29.58](../../../Immagini/Screenshot%202025-10-30%20alle%2013.29.58.png)

### Stack

> Lo _stack_ è una struttura di supporto (segmento di memoria) che memorizza l'indirizzo di ritorno dopo la chiamata, i parametri passati e utilizzati da procedure o funzioni.

È una struttura dati astratta che agisce come una _pila_ (LIFO).

![Screenshot 2025-10-30 alle 13.33.49](../../../Immagini/Screenshot%202025-10-30%20alle%2013.33.49.png)

#### Record di attivazione

> L'insieme degli oggetti che vengono caricati nello stack ad ogni chiamata si chiama _record di attivazione_.

Ogni esecuzione di sottoprogramma ha il suo _record di attivazione_.

- Anche il main ha un record di attivazione.

**Esempio**

```c
void Prima (int a){
	int b;
}

void **Seconda**(double c){
}

int main{
	int num=100;
	Prima(10);
	Seconda(num);
}
```

![Screenshot 2025-10-30 alle 13.45.29](../../../Immagini/Screenshot%202025-10-30%20alle%2013.45.29.png)

> Quando la funzione termina, lo spazio viene deallocato e il valore di ritorno ritornato.
> L'indirizzo di ritorno viene usato per tornare al chiamante.

> **N.B.**
> Il programmatore non può manipolare lo stack.

# Tipizzazione

I tipi associati alle variabili si estendono alle espressioni:

- _overload:_ significati diversi a seconda del contesto;
- _coercion:_ promozioni automatiche a tipi differenti per risolvere conflitti
- _polimorfismo:_ una funzione polimorfica ha un tipo parametrico o generico

> **Tipizzazione**
> regole che un linguaggio impone circa la tipizzazione dei dati

_Fortemente tipizzato:_ è necessario specificare il tipo per ogni elemento.

- tipizzazione statica
- type safety
- impossibilità di convertire i tipi

_Debolmente tipizzato:_ viola qualche regola del fortemente tipizzato.

> Il C è _debolmente tipizzato:_
>
> -   permette il casting
> -   permette puntatori void
> -   è presente il costrutto union

# Stack e scope

- Ogni funzione ha un suo spazio riservato sullo stack e può agire solo su parametri e variabili locali
- Le variabili globali dichiarate fuori dal main sono visibili a ogni funzione (sconsigliate e inutili)
- L'interfaccia di una funzione deve essere completamente definita

## Passaggio parametri

> Ad ogni chiamata i parametri vengono valutati e sostituiscono i parametri formali nella funzione chiamata

Si possono passare i parametri in due modi:

- per valore (**call by value**)
- per indirizzo (**call by reference**)

### Passaggio per valore

> _Nessun effetto collaterale_
> Non avviene nessuna modifica del valore al di fuori dello scope della funzione

```c
int quadrato(int y)
{
	y = y * y;
	/* qua y vale 100 */
	return y;
}

int main()
{
	int x, q;
	x = 10;
	q = quadrato(x);
	/* x vale ancora 10 */
	return 0;
}
```

### Passaggio per indirizzo

> _Il C non supporta il passaggio per indirizzo._
> Per simularlo si passa il valore dell'indirizzo di memoria del parametro.

Da dentro la funzione modifico una variabile fuori dal suo record di attivazione.

> _Genera effetti collaterali_
> Altera il contenuto delle variabili fuori dallo scope.

In C l'indirizzo di una variabile viene gestito come un tipo particolare che si chiama **puntatore**.

## Ritorni di funzioni

> Posso ottenere _solo un valore di ritorno_ e uno solo.

