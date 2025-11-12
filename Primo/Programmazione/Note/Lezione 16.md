---
share: true
---
  
[Lezione 16: Slides](../Slides/Lezione16-ProgrammazioneC.pdf)  
  
```table-of-contents  
  
```  
  
# Qualificatore const  
  
## Variabili costanti e define  
  
`#define A 12` $\rightarrow$ definisce una costante simbolica A che vale 12. Non alloca ma sostituisce A con 12 nel codice sorgente prima della compilazione.  
  
`const int B = 34;` $\rightarrow$ dichiara una variabile di tipo intero B che vale 34. Alloca spazio in memoria per B e ne impedisce la modifica successiva.  
  
## Passaggio di parametri  
  
`void Inizializza(int *t)` $\rightarrow$ la funzione prende come parametro un puntatore a intero. Permette di modificare l'array originale passato alla funzione.  
  
`void Stampa(const int *t)` $\rightarrow$ la funzione prende come parametro un puntatore a intero costante. Non permette di modificare l'array originale passato alla funzione.  
  
Nonostante venga passato alla funzione un puntatore, l'uso di `const` impedisce la modifica dei dati puntati.  
  
# Puntatori a funzione  
  
**Esempio**  
  
```c  
# include <stdio.h>  
  
void fun(int a)  
{  
	printf("Valore: %d\n", a);  
}  
  
int main()  
{  
	void (*pFun)(int) = fun; // Dichiarazione di un puntatore a funzione  
	pFun(10);                // Chiamata della funzione tramite il puntatore  
	return 0;  
}  
```  
  
In questo esempio, `pFun` è un puntatore a una funzione che prende un `int` come parametro e restituisce `void`. Viene inizializzato con l'indirizzo della funzione `fun`, e poi viene chiamato con l'argomento `10`.  
  
## Array di puntatori a funzione  
  
```c  
#include <stdio.h>  
void add(int a, int b) { printf("Addizione: %d\n", a + b); }  
void subtract(int a, int b) { printf("Sottrazione: %d\n", a - b); }  
void multiply(int a, int b) { printf("Moltiplicazione: %d\n", a * b); }  
  
int main() {  
	void (*operations[3])(int, int) = {add, subtract, multiply};  
	int choice, x = 10, y = 5;  
  
	printf("0 add,, 1 sub, 2 mul\n")  
	scanf("%d", &choice);  
  
	if (ch > 2) return -1;  
  
	(*fun_ptr_arr[choice])(x, y); // Chiamata della funzione selezionata  
  
	return 0;  
}  
```  
  
In questo esempio, `operations` è un array di puntatori a funzioni che prendono due `int` come parametri e restituiscono `void`. L'utente può scegliere quale operazione eseguire in base all'indice fornito.  
  
## Funzioni passate a funzioni  
  
```c  
#include <stdio.h>  
void fun1() { printf("Funzione 1\n"); }  
void fun2() { printf("Funzione 2\n"); }  
  
void wrapper(void (*func)())  
{  
	func(); // Chiamata della funzione passata come parametro  
}  
  
int main()  
{  
	wrapper(fun1); // Passaggio di fun1 come parametro  
	wrapper(fun2); // Passaggio di fun2 come parametro  
	return 0;  
}  
```  
  
In questo esempio, la funzione `wrapper` prende come parametro un puntatore a funzione e la chiama all'interno del suo corpo. Le funzioni `fun1` e `fun2` vengono passate a `wrapper` e chiamate di conseguenza.  
  
### Ordinare un array di elementi  
  
Cosa serve per ordinare un array?  
  
- Sapere come confrontare due elementi  
- Applicare il confronto a coppie di elementi nell'array  
  
> L'applicazione **NON** deve dipendere dal modo in cui vengono confrontati gli elementi.  
  
*Bubble sort*  
```c  
#include <stdio.h>  
void bubbleSort(int arr[], int n, int (*compare)(int, int)) {  
	for (int i = 0; i < n-1; i++) {  
		for (int j = 0; j < n-i-1; j++) {  
			if (compare(arr[j], arr[j+1]) > 0) {  
				// Scambia arr[j] e arr[j+1]  
				int temp = arr[j];  
				arr[j] = arr[j+1];  
				arr[j+1] = temp;  
			}  
		}  
	}  
}  
```  
  
In questo esempio, `bubbleSort` prende un array di interi, la sua dimensione e un puntatore a funzione `compare` che confronta due interi. La funzione di confronto può essere definita separatamente per specificare l'ordine desiderato (crescente o decrescente).  
  
