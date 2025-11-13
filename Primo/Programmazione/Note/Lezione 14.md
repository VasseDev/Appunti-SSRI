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
  
void fun(int a) {  
	printf("Valore: %d\n", a);  
}  
  
int main() {  
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
  
void wrapper(void (*func)()) {  
	func(); // Chiamata della funzione passata come parametro  
}  
  
int main() {  
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
  
_Bubble sort_  
  
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
  
### Ricerca di un elemento in un array  
  
```c  
#include <stdbool.h>  
  
bool compare(const void *a, const void *b) {  
return (*(int *)a == *(int *)b);  
}  
  
int search(void *arr, int n, size_t elemSize, const void *target, bool (*compare)(const void *, const void *)) {  
	char *ptr = (char *)arr;  
	int i;  
	for (i = 0; i < n; i++) {  
		if (compare((void *)(ptr + i * elemSize), target)) {  
			return i; // Elemento trovato  
		}  
	}  
	return -1; // Elemento non trovato  
}  
  
int main() {  
	int arr[] = {1, 2, 3, 4, 5};  
	int target = 3;  
	int index = search(arr, 5, sizeof(int), &target, compare);  
	if (index != -1) {  
		printf("Elemento trovato all'indice: %d\n", index);  
	} else {  
		printf("Elemento non trovato\n");  
	}  
	return 0;  
}  
```  
  
In questo esempio, la funzione `search` prende un array generico, la sua dimensione, la dimensione di ogni elemento, un puntatore al valore target e un puntatore a funzione `compare` che confronta due elementi. La funzione di confronto può essere definita separatamente per specificare come confrontare gli elementi.  
  
### Funzione come campo  
  
```c  
typedef struct {  
	char name[10];  
	char surname[20];  
	int votes[3];  
	double (*f)(int*, int);  
} students;  
  
double average(int* votes, int n) {  
	int sum = 0;  
	for (int i = 0; i < n; i++) {  
		sum += votes[i];  
	}  
	return (double)sum / n;  
}  
  
int main() {  
	students s1 = {"Mario", "Rossi", {28, 30, 27}, average};  
	printf("La media di %s %s è %.2f\n", s1.name, s1.surname, s1.f(s1.votes, 3));  
	return 0;  
}  
```  
  
In questo esempio, la struttura `students` contiene un campo che è un puntatore a funzione. La funzione `average` calcola la media dei voti e viene assegnata al campo `f` della struttura `s1`. La media viene poi calcolata chiamando la funzione tramite il puntatore.  
  
## Funzioni ritornate da funzioni  
  
Il compilatore non permette di ritornare il puntatore a funzione.  
Dobbiamo usare typedef.  
  
```c  
typedef return type (*function_name)(parameter types);  
```  
  
```c  
// tipo ptr puntatore a funzione  
typedef int (*operation_t)(int, int);  
```  
  
```c  
// tipo pm puntatore a funzione che ritorna ptr  
typedef ptr (*pm)();  
```  
  
_Esempio_  
  
```c  
#include <stdio.h>  
typedef int (*operation_t)(int, int);  
  
int add(int a, int b) { return a + b; }  
int subtract(int a, int b) { return a - b; }  
  
operation_t getOperation(char op) {  
	if (op == '+') {  
		return add;  
	} else if (op == '-') {  
		return subtract;  
	} else {  
		return NULL;  
	}  
}  
  
int main() {  
	char op;  
	int a = 10, b = 5;  
	printf("Enter operation (+ or -): ");  
	scanf(" %c", &op);  
	operation_t operation = getOperation(op);  
	if (operation != NULL) {  
		int result = operation(a, b);  
		printf("Result: %d\n", result);  
	} else {  
		printf("Invalid operation\n");  
	}  
	return 0;  
}  
```  
  
In questo esempio, la funzione `getOperation` restituisce un puntatore a funzione in base all'operazione richiesta dall'utente. La funzione restituita viene poi chiamata nel `main` per eseguire l'operazione desiderata.  
  
