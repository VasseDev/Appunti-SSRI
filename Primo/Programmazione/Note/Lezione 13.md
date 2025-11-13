---
share: true
---
  
[Slides: Lezione 13](../Slides/Lezione11-ProgrammazioneC.pdf)  
  
```table-of-contents  
  
```  
  
# Ricorsione  
  
La ricorrenza può avere due forme nella programmazione:  
  
- ripetizioni (cicli)  
- ricorsione  
  
La ricorsione è una tecnica di programmazione in cui una funzione chiama sé stessa per risolvere un problema. È particolarmente utile per problemi che possono essere suddivisi in sottoproblemi più piccoli dello stesso tipo.  
  
La ricorsione è l'analogo informatico dell'induzione matematica.  
  
Definizione induttiva di fattoriale  
  
$$  
n!:=  
\begin{cases}  
1 & \text{se } n=0 \\  
n \cdot (n-1)! & \text{se } n>0  
\end{cases}  
$$  
  
N=0 si chiama _caso base_ (non richiama rimandi alla funzione fattoriale)  
N>0 si chiama _caso induttivo_ (richiama la funzione fattoriale)  
  
Implementazione ricorsiva in Python:  
  
```python  
def fattoriale(n -> int) -> int:  
	if n == 0:  
		return 1  
	else:  
		return n * fattoriale(n - 1)  
```  
  
## Caso base e riduzione  
  
Ogni funzione ricorsiva deve avere:  
  
- un caso base: una condizione che termina la ricorsione  
- una procedura di riduzione: una parte della funzione che riduce il problema a un caso più semplice (_winding_)  
- la garanzia che ogni chiamata ricorsiva si avvicina al caso base  
- una procedura di ricostruzione: una parte della funzione che combina i risultati delle chiamate ricorsive per ottenere la soluzione finale (unwinding)  
  
**Potenza**  
Calcolo di una potenza n-esima:  
  
- _caso base_ n=0 -> restituisco 1  
- _caso induttivo_ n>0 -> restituisco x \* potenza(x, n-1)  
- _garanzia di terminazione_: n decresce a ogni chiamata  
  
```python  
def potenza(x: float, n: int) -> float:  
	if n == 0:  
		return 1  
	else:  
		return x * potenza(x, n - 1)  
```  
  
## Record di attivazione  
  
Quando chiamo una funzione ricorsiva, il sistema deve mantenere traccia di ogni chiamata attiva. Per fare ciò, utilizza una struttura dati chiamata _stack delle chiamate_ (call stack).  
  
**Esempio**  
![Screenshot 2025-11-11 alle 15.05.42](../../../Immagini/Screenshot%202025-11-11%20alle%2015.05.42.png)  
  
## Ricorsione multipla  
  
Una ricorsione multipla è quando una funzione chiama sé stessa più di una volta nella sua definizione.  
  
**Esempio: Fibonacci**  
  
```python  
def fibonacci(n: int) -> int:  
	if n == 0:  
		return 0  
	elif n == 1:  
		return 1  
	else:  
		return fibonacci(n - 1) + fibonacci(n - 2)  
```  
  
**Esempio: Torre di Hanoi**  
  
- Tre pali: A, B, C  
- n dischi di dimensioni diverse  
- Obiettivo: spostare tutti i dischi da A a C seguendo le regole:  
    - spostare un solo disco alla volta  
    - un disco più grande non può essere posizionato su uno più piccolo  
  
```python  
def hanoi(n: int, source: str, target: str, auxiliary: str):  
	if n == 1:  
		print(f"Sposta il disco 1 da {source} a {target}")  
	else:  
		hanoi(n - 1, source, auxiliary, target)  
		print(f"Sposta il disco {n} da {source} a {target}")  
		hanoi(n - 1, auxiliary, target, source)  
```  
  
## Iterazione vs Ricorsione  
  
- Solitamente le soluzioni iterative sono più efficienti in termini di memoria e velocità.  
- Le soluzioni ricorsive sono quelle più eleganti e facili da comprendere per problemi naturalmente ricorsivi.  
  
### Strutture dati  
  
Relazione tra tipo di dato e struttura dati:  
- array -> cicli  
- liste -> ricorsione  
  
