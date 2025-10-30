---
share: true
---


# Puntatori

> La memoria è organizzata in N celle di dimensione fissata (tipicamente 1 byte = 8 bit)
>
> -   ordinate sequenzialmente
> -   dotate di un indirizzo numerico

Occorre specificare il tipo dell'oggetto puntato (per sapere quanta memoria è puntata)

```c
tipo_puntato *variabile;
```

**I puntatori possono essere trattati come interi.**

## Esempio

![Screenshot 2025-10-29 alle 14.33.59](../../../Immagini/Screenshot%202025-10-29%20alle%2014.33.59.png)

![Screenshot 2025-10-29 alle 14.34.28](../../../Immagini/Screenshot%202025-10-29%20alle%2014.34.28.png)

Il tipo determina la dimensione, quindi in rosso vedo riferimenti con errori nei tipi riferiti potenzialmente.

## Referenziazione

> L'operatore `&` fornisce l'indirizzo di un oggetto.

```c
int i;
int *p;
p = &i;
```

Ha priorità intermedia fra `=` e `[]`, fra `[]` e `.`.

## Dereferenziazione

> Il puntatore `*` fornisce l'oggetto puntato da un puntatore.

```c
int i = 2, j, *p;
p = &i;
j = *p; /* ora j vale 2 */
```

In questo caso `*p` diventa un **alias** di `i`.

- Se un puntatore non è inizializzato, accedere all'oggetto porta a un comportamento indefinito. Il compilatore lo segnala come _warning_.

## Aritmetica dei puntatori

> Si possono applicare ai puntatori gli operatori di relazione.
> Prima si convertono gli indirizzi in interi, poi si confrontano.

Un puntatore si può inizializzare ad un valore.
Un valore sensato è `NULL` (equivale a 0).

## Vettori e puntatori

**V equivale a &V\[0\]**

Si può trattare un sottovettore come se fosse un vettore.

```c
int V[N], *p, s;
s = Somma(V,N); //somma da V[0] a V[N-1]
p = &V[N/2];
s = Somma(p,N/2); //somma da V[N/2] a V[N/2+N/2-1]
```

Si può definire un vettore dinamico, cioè la cui dimensione è determinata durante l'esecuzione.

> **UNA STRINGA È UN ARRAY DI CARATTERI + IL TERMINATORE DI STRINGA**

# Strutture

> Le **strutture (o record)** sono agglomerati di tipi diversi, ma legati tra loro, detti **membri** o o **campi**.

```c
struct {
	tipo1 campo1;
	tipo2 campo2;
	...
} variabile;
```

Posso anche usare il `typedef` per definire un nuovo tipo.

```c
typedef struct {
	double temperatura;
	double pressione;
	double umidita;
} datiMeteo;

datiMeteo meteOggi;
```

Dichiarazione con tag

```c
datiMeteo meteOggi;
struct datiMeteo {
	double temperatura;
	double pressione;
	double umidita;
};

struct datiMeteo meteOggi;
```

## Accesso ai campi

```c
t = meteOggi.temperatura;
meteOggi.pressione *= 1.1;
strcpy(qui.nome,"Milano");
```

## Annidamento

Strutture e vettori possono contenere strutture e vettori ricorsivamente, con qualsiasi numero di livelli.

```c
typedef struct {
	long id;
	char nome[LUNGH+1];
	char cognome[LUNGH+1];
} persona;

typedef struct {
	long matricola;
	persona identita;
} studente;
```

Per accedere a un campo di una sottostruttura:

```c
strcpy(studente1.identita.nome,"");
```

oppure

```c
iniziale1 = studente1.identita.nome[0];
iniziale2 = studente1.identita.cognome[0];
```

## Assegnamento

Copia i campi della struttura a destra in quelli della struttura a sinistra

- copia i campi di tipo elementare
- copia i campi di tipo struttura, sottocampo per sottocampo
- copia i campi di tipo vettore statico (strano!)
- **copia i campi di tipo puntatore, ma non duplica l'oggetto puntato (vettori dinamici!); questo può essere molto pericoloso**

# Union

> Simili ad una struttura ma...
> il compilatore alloca solo lo spazio al più grosso e gli altri si sovrappongono.

Si usa come le *struct* quando devo risparmiare spazio.


