---
share: true
---

![Lezione3](../Slides/Lezione3.pdf)

# Algoritmi

> Serie di istruzioni univocamente decifrabile.

Risolve una classe di problemi.

Le caratteristiche di un algoritmo:

- Operazioni elmentari
- Istruzioni finite

Altre proprietà degli algoritmi sono:

- rigoroso: ogni passo di un algoritmo non deve essere ambiguo.
- finitezza:
- efficienza:

Esempio:

- ricetta da cucina

Un programma è l'espressione di un algoritmo in un linguaggio che l'esecutore è in grado di comprendere.

> **DOMANDA D'ESAME** 
> _Cos'è un algoritmo?_
> Un algoritmo è una sequenza composta da delle operazioni elementari che servono per risolvere una classe di problemi, questi vengono utilizzati dai programmatori i quali hanno come obiettivo quello di creare un programma preciso, efficiente e non ambiguo.

## Formulazione di un problema

Definizione dei dati e dei risultati che si vogliono ottenere.

Processo:

- individuazione dei dati in ingresso
- individuazione dei risultati desiderati
- individuazione dell'algoritmo di risoluzione

### Problema e istanza

- **Problema P**: dato $n\in\mathbb{N}$ calcolare la somma dei primi $n$ naturali.
- **Istanza di P**: risolvere P per $n=12$

> Un problema può essere visto come l'insieme di tutte le sue istanze.

> È impossibile garantire l'assenza di bug in un programma, ma solo trovarli

#### Esempio

Il problema di calcolare il MCD fra due numeri $x$ e $y$

- ingressi: due numeri
- uscite: il MCD

Istanze: 10 e 5 MCD è 5.
Soluzione: algoritmo di Euclide.

## Flusso di un algoritmo

- Algoritmo: sequenza di passio
- Flusso: l'ordine di esecuzione della sequenza di passi
- Esecuzione in sequenza: uno dopo l'altro

Il flusso:

- valuta delle condizioni

## Indecidibilità

> Non tutto che sembra una procedura passo passo è un algoritmo

**Esempio**
Dire se un numero è primo

Tipo di problemi:

- decisionale
- ricerca
- enumerazione
- ottimizzazione

> **Nota**
> Non tutti i problemi sono di natura computazionale. Uno di questi è **il problema dell'arresto**, che dice che è impossibile determinare a priori se un programma terminerà la sua esecuzione oppure no.

## Linguaggi per la descrizione di algoritmi

- **Linguaggi informali**
    - linguaggio naturale
- **Linguaggi semi-formali**
- **Linguaggi formali**
    - linguaggi di flusso
    - linguaggi di programmazione

### **Linguaggio naturale**

Il linguaggio naturale è inadatto per una macchina perché è:

- ambiguo
- vago
- complicato

### Pseudo-codice

Non è linguaggio naturale.
È un modo per codificare un ragionamento in una forma simile ad un programma.

### Linguaggio di programmazione

Usato per tradurre algoritmi in un linguaggio comprensibile ai calcolatori

- aderenza dettagliata alla macchina
- livello più vicino al programmatore

**Fase di analisi**: penso al linguaggio più adeguato a quel problema.
**Paradigma di programmazione**: il modello concettuale con il quale si concepisce il programma.

#### Assembler

È il linguaggio più vicino al linguaggio macchina (0 e 1).
Tutti i linguaggi di programmazione vengono tradotti in un certo assembler prima di arrivare al linguaggio macchina.

#### RAM (Random Access Machine)

Utilizzato per valutare il costo computazionale.
**Programma**: sequenza finita di istruzioni
**Istruzioni:** read, write, assegnamento, selezione, salto
Accesso alla memoria tramite l'indirizzo delle celle.

### Programmazione non strutturata

Sono presenti `goto` incondizionati.

### Programmazione strutturata ad alto livello

Fino ad ora abbiam outilizzato il paradigma di programmazione **imperativo**:

- parte della macero famiglia del paradigma procedurale.
    - descrive come si risolve un problema

> **Imperativo**
> programmazione intuitiva in cui si chiede all'esecutore di compiere delle azioni (richieste esplicite)
> **Caratteristiche**:
>
> -   Sono dinamici
> -   Il programma non è la stessa cosa della sua computazione (processo)

## Variabili

Paragonabili alle incognite matematiche.

- **Nome**: identificatore
    - corrisponde ad un area di memoria che contiene il valore dell'oggetto
    - l'indirizzo di memoria è statico, il valore è dinamico
- **Tipo**:
    - insieme dei possibili valori che possono essere assunti
    - insieme delle operazioni associate
    - spazio occupato in memoria
- **Valore**

![Screenshot 2025-10-08 alle 13.55.20](../../../Immagini/Screenshot%202025-10-08%20alle%2013.55.20.png)

### Assegnamento

Si può variare il contenuto della variabile con un assegnamento.

```
variabile <- espressione
```

Quando assegno una variabile sovrascrivo il valore precedente.

> Il concetto di **variabile** è un'astrazione del concetto di **locazione di memoria**

L'assegnazione astrae l'operazione **STORE** di un ipotetico linguaggio macchina.

### Tipo

> Il tipo è l'astrazione della rappresentazione di come è effettivamente rappresentato il dato in memoria.

> **DOMANDA D'ESAME** 
> _Cosa determina il tipo di una variabile?_
> -   La classe di valori che questa può assumere
> -   Le operazioni svolgibili con questa
> -   Quanto spazio occupa in memoria
> -   Come viene codificata l’operazione in memoria
> La variabile in realtà è solo un'astrazione (nome) della cella di memoria (composta da bit che vengono letti diversamente in base al tipo della suddetta) in cui il valore della variabile risiede, formalmente il nome può essere visto come un riferimento mnemonico.

### Dichiarazione

> Enunciato di linguaggio di programmazione che definisce un identificatore (nome).

Ne esistono due tipi:

- esplicita
- implicita

> **BNF** > `<dichiarazione_variabile>::= <tipo> ‘‘ ’’ <identificatore> `

Vantaggi di dichiarare esplicitamente all'inizio del programma:

- leggibilità dei programmi
- diminuisce la possibilità di errori
- facilita la compilazione

### Costanti

> Una costante è una cella di memoria che contiene un valore che non può essere variato dopo la prima inizializzazione.

### Espressioni

> Esiste un tipo assegnato ad ogni espressione.

Esistono delle espressioni che assumono un valore di verità:

- detto **booleano**
- può assumere solo due valori _{vero, falso}_
