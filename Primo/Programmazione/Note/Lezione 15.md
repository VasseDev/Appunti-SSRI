---
share: true
---
  
## Astrazione procedurale  
  
- **Comportamento di una procedura:** cosa fa vista dal di fuori  
- **Implementazione di una procedura:** i dettagli implementativi di come il comportamento è realizzato  
  
## Astrazione modulare  
  
Un modulo è una collezione di dichiarazioni che includono variabili e procedure.  
Il modulo agisce come una black box: l'utente del modulo conosce solo l'interfaccia pubblica, non l'implementazione interna.  
  
**Ruolo:** deve essere generale.  
**Interfaccia:** se il ruolo è chiaro l'interfaccia è semplice da definire.  
**Implementazione:** può essere complessa, ma nascosta all'utente.  
  
## Encapsulation e information hiding  
  
- **Encapsulation:** raggruppare dati e procedure che operano su quei dati in un'unica unità (modulo).  
- **Information hiding:** nascondere i dettagli interni del modulo, esponendo solo ciò che è necessario attraverso l'interfaccia pubblica.  
  
Due caratteristiche:  
  
- _costrutti_ del linguaggio che facilitano l'associazione di dati e procedure  
- _meccanismi_ del linguaggio per nascondere i dettagli interni  
  
## Programmazione modulare  
  
Un programma è visto come insieme di moduli che collaborano tra loro.  
  
![Screenshot 2025-11-19 alle 13.58.32](../../../Immagini/Screenshot%202025-11-19%20alle%2013.58.32.png)  
  
È una prima forma di incapsulamento.  
Non c'è un legame stretto tra dati e procedure.  
  
- I dati possono essere globali.  
- Non scala bene per sistemi grandi e complessi.  
  
### Vantaggi della programmazione modulare  
  
- suddivisione del lavoro  
- riuso del codice  
- manutenzione facilitata  
  
### Svantaggi della programmazione modulare  
  
- non si tratta di incapsulazione forte  
- non ha supporto in fase di sviluppo  
- organizzazione basata sulle funzionalità  
  
## Variabili globali e statiche  
  
Visibilità:  
  
- **globale**: visibile da tutto il programma  
- **statica**: visibile solo all'interno del modulo  
  
# Astrazione dei dati  
  
Prevede entità che hanno un tipo e un insieme di operazioni associate.  
  
- **tipo**: il nome che lo identifica  
- **operazioni**: le procedure che operano su quel tipo, costituiscono la sua interfaccia  
  
Il suo dominio di applicazione è definito da _assiomi e precondizioni_, che definiscono il contratto rispettato dall'entità.  
  
## Famiglie di operazioni  
  
- Costruttori -> creano istanze del tipo  
- Selettori -> accedono ai dati interni  
- Predicati -> verificano proprietà, ritorna valori booleani  
- Funzioni -> calcolano valori  
- Trasformatori -> modificano lo stato  
  
## Esempio  
  
**Esempio 1**  
Definire l'ADT "numero naturale".  
Di che tipo parliamo? _numero intero positivo_  
Che operazioni deve garantire il suo contratto?  
**Operazioni:**  
  
- successore (S) -> funzione  
- somma -> funzione  
- sottrazione -> funzione  
- prodotto -> funzione  
- divisione -> funzione  
- confronto (=) -> predicato  
- divisibilità -> predicato  
- primo -> predicato  
- ecc.  
  
Gli assiomi e le precondizioni potrebbero essere i seguenti:  
  
$$  
n+0=0+n=n  
$$  
  
$$  
n+S(m)=S(n)+m  
$$  
  
$$  
n\cdot 0=0\cdot n=0  
$$  
  
$$  
n\cdot S(m)=n\cdot m + n  
$$  
  
**Esempio 2**  
Definire e realizzare l'ADT insieme di numeri interi  
Descrivere operazioni sensate guardando alle famiglie di operazioni definibili.  
  
- AddInt(i) - aggiunge un numero intero (TRASFORMATORE)  
- IsPresent(i)) - verifica se un numero intero è presente (PREDICATO)  
- ...  
  
**Esempio 3**  
Definire e realizzare l'ADT pila lifo.  
  
Operazioni:  
  
- Push(i) - aggiunge un elemento in cima  
- Top() - restituisce l'elemento in cima (precondizione: lo stack contiene almeno un elemento)  
- Drop() - rimuove l'elemento in cima (precondizione: lo stack contiene almeno un elemento)  
  
Assiomi:  
  
- Se n è il numero di dati contenuti nello stack prima dell'operazione Push(i), dopo l'operazione lo stack conterrà n+1 elementi.  
- Dopo l'operazione Drop(), lo stack conterrà n-1 elementi.  
- Top() lascia inalterato lo stack.  
  
> La struttura interna del dato non è rilevante per un ADT.  
  
## ADT in C?  
  
In C non esistono meccanismi per realizzare ADT in modo diretto.  
  
Se volessi realizzare concretamente in C l'ADT dovrei:  
  
- fornire delle implementazioni per le funzioni  
- trovare dei modi per supportare le peculiarità dell'ADT  
  
Cosa potrei usare?  
  
- `typedef`  
- potrei definire funzioni che operano su strutture dati  
  
### Esempio  
  
**Esempio 1**  
Definiamo il tipo di dato astratto contatore  
  
Pensiamo al tipo (intero) e all'interfaccia (incrementa).  
  
**Header:** definisce in astratto cos'è un contatore.  
  
```c  
typedef int contatore;  
  
resetta(contatore *);  
void incrementa(contatore *);  
...  
```  
  
**Sorgente:** realizza l'implementazione delle operazioni.  
  
```c  
#include "contatore.h"  
  
void resetta(contatore *c) {  
	*c = 0;  
}  
  
void incrementa(contatore *c) {  
	(*c)++;  
}  
  
int main() {  
	contatore c;  
	resetta(&c);  
	incrementa(&c);  
}  
```  
  
È responsabilità del programmatore non violare il contratto dell'ADT.  
La struttura interna del contatore è visibile all'esterno.  
Le operazioni agiscono su qualunque intero, non solo su quelli che rappresentano contatori.  
  
**Esempio 2**  
Definire l'ADT Stringa di max 100 caratteri.  
  
Descrivere operazioni sensate guardando alle famiglie di operazioni definibili.  
  
- GetCharAt(i) - restituisce il carattere alla posizione i (SELETTORE)  
- length() - restituisce la lunghezza della stringa (FUNZIONE)  
- Concat(stringa) - concatena la stringa con quella passata (COSTRUTTORE)  
- ...  
  
Implementiamolo in C: dovremo decidere una struttura dati e implementare delle funzioni.  
  
![Screenshot 2025-11-19 alle 14.53.55](../../../Immagini/Screenshot%202025-11-19%20alle%2014.53.55.png)  
  
La riga 28 è una violazione del contratto, perché accedo direttamente alla struttura interna.  
  
## ADT  
  
**Incapsulamento:** nascondo l'implementazione interna dell'ADT e la rappresentazione dei dati.  
  
**Località dei cambiamenti:** se cambio l'implementazione interna, non devo cambiare il codice che usa l'ADT.  
  
**Flessibilità:** posso implementare in modi diversi lo stesso ADT, a seconda della situazione.  
  
# Approfondimenti  
  
## Incapsulamento  
  
Supponiamo di voler definire un ADT "numero complesso"  
  
- $z=+ib$ dove $a,b \in \mathbb{R}$  
  
Le operazioni  
  
- re() restituisce la parte reale  
- img() restituisce la parte immaginaria  
- mod() restituisce il modulo  
  
Come rappresento il dato internamente?  
  
- rappresentazione geometrica  
- rappresentazione trigonometrica  
  
Con astrazione procedurale:  
  
- definisco il tipo  
- ogni volta che voglio usare un numero complesso, uso le funzioni re(), img(), mod()  
- avrei problemi di manutenibilità  
  
> Nel procedurale la dipendenza del codice della struttura dati è elevata.  
  
**Da procedurale a modulare**  
  
_Forma algebrica_  
  
complex.c  
  
```c  
struct Complex {  
	double real;  
	double imag;  
};  
  
double re(struct Complex *c) {  
	return c->real;  
}  
double img(struct Complex *c) {  
	return c->imag;  
}  
double mod(struct Complex *c) {  
	return sqrt(c->real*c->real + c->imag*c->imag);  
}  
```  
  
complex.h  
  
```c  
struct Complex;  
double re(struct Complex *c);  
double img(struct Complex *c);  
double mod(struct Complex *c);  
```  
  
Posso accedere alla parte reale in due modi.  
Espongo la struttura interna come parametro.  
  
Per migliorare l'incapsulamento:  
  
- header file: tutta e sola l'interfaccia indipendente dall'implementazione  
- source file: l'implementazione  
  
Occorre anchge naxcondere la struttura interna.  
come? con un puntatore a void.  
  
complex.h  
  
```c  
double re(void *this);  
double img(void *this);  
double mod(void *this);  
```  
  
Scriviamo una funzione per la creare una nuova istanza.  
  
complex.c  
  
```c  
void *newComplex(double real, double imag) {  
	struct Complex *this = (struct Complex *) malloc(sizeof(struct Complex));  
	c->real = real;  
	c->imag = imag;  
	return this;  
}  
```  
  
Costruisco senza esporre la struttura interna. Questa modalità è chiamata *Procedural Data Abstraction*.  
  
![Screenshot 2025-11-19 alle 15.41.40](../../../Immagini/Screenshot%202025-11-19%20alle%2015.41.40.png)![Screenshot 2025-11-19 alle 15.41.47](../../../Immagini/Screenshot%202025-11-19%20alle%2015.41.47.png)  
  
C non permette di incapsulare dati e funzioni, ma rende possibile simularlo, attraverso puntatori a funzione.  
  
```c  
typedef struct {  
	double real;  
	double imm;  
	double (*re)(void *);  
	double (*img)(void *);  
	double (*mod)(void *);  
} Complex;  
```  
  
In questo modo ogni istanza di Complex ha le sue funzioni associate.  
  
```c  
Complex *newComplex(double real, double imag) {  
	Complex *this = (Complex *) malloc(sizeof(Complex));  
	this->real = real;  
	this->imm = imag;  
	this->re = re;  
	this->img = img;  
	this->mod = mod;  
	return this;  
}  
```  
  
Ora è migliore, ma ho sempre il problema di passare l'entità alla funzione che agisce sull'entità stessa.  
  
```c  
int main(int argc, char *argv[]) {  
	Complex *c = newComplex(3.0, 4.0);  
	printf("Re: %f\n", c->re(c));  
	printf("Im: %f\n", c->img(c));  
	printf("Mod: %f\n", c->mod(c));  
	return 0;  
}  
```  
  
Posso usare lo static.  
Static può anche essere utile per rendere "private" delle funzioni.  
  
![Screenshot 2025-11-19 alle 15.54.40](../../../Immagini/Screenshot%202025-11-19%20alle%2015.54.40.png)  
  
# Astrazione ad oggetti  
  
Ogni oggetto è dotato di:  
- identità  
- stato  
- comportamento  
  
Si può 