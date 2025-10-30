---
share: true
---

![Lezione6-LinguaggioC](../Slides/Lezione6-LinguaggioC.pdf)

## Operatore ternario

> `(espressione1 ? espressione2 : espressione3)`

Si valuta espressione1 che e di tipo logico:

- se espressione1 e vera, si valuta espressione2
- se espressione1 e falsa, si valuta espressione3

## Selezione multipla

> L'istruzione `switch` consente di specificare più valori per una selezione in un singolo blocco.

Come funzione:

1. valuta l'espressione
2. si cerca la costante di valore uguale all'espressione
    1. se esiste esegue le istruzioni associate _e tutte quelle sotto_
    2. altrimenti esegue il default

> Per far si che esegua un solo case si usa l'istruzione `break`alla fine dell'istruzione.

In teoria lo switch viola la programmazione strutturata.

## Ciclo `for`

> Ciclo per il quale ho un _numero fissato di iterazioni_ note a priori.

```c
for (<espr-iniz>; <espr-cond>; <espr-incr>)
	<istruzione>
```

equivale a

```c
espr-iniz;
while (espr-cond) {
	istruzione;
	espr-incr;
}
```

## Operatore virgola

> TODO

## Istruzione break

> Permette di uscire dal costrutto in cui è inserito.
> Ciò è contrario alla programmazione strutturata.

**Esempio**

```c
for (d=2; d<n; d++)
if (n % d == 0) break;

return ((d < n) ? 0 : 1);
```

Scritto in versione strutturata:

```c
for (d=2; (n % d != 0) && (d < n); d++)
```

## Istruzione continue

> Provoca il passaggio all'iterazione successiva.

**Esempio**

```c
s = 0;
for (i=1; i<=n; i++)
{
	if (i%2 == 0)
		continue;
	s += i*i;
}
```

Scritto in versione strutturata:

```c
s = 0;
for (i=1; i<=n; i++)
{
	if (i%2 != 0)
	{
		s += i*i;
	}
}
```

## Tipi definiti da utente

> Puoi dare un nome ai tipi di dato esistenti per chiarirne il significato.

- vale solo nel blocco cui appartiene
- se inserita tra le direttive vale per l'intero file
- la definizione termina `;`
- _aggiunge un nuovo nome alla tabella dei tipi di dato_

```c
typedef int anno;
anno a; a = 2010;
```

### Enum

> Valori numerati alla dichiarazione.

```c
enum {PICCHE, CUORI, QUADRI, FIORI}

// equivale a

#define PICCHE 0
#define CUORI 1
#define QUADRI 2
#define FIORI 3
```

