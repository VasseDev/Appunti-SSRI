---
share: true
---
  
  
# Java  
  
Java rispetta la programmazione ad oggetti in modo dogmatico.  
  
La memoria associata ad un oggetto contiene lo stato dell'oggetto, rappresentato dai valori degli attributi e ciò che serve alla JVM per gestire l'oggetto (ad esempio un puntatore alla tabella dei metodi).  
  
## Responsabilità e astrazione (*S*OLID)  
  
- Single Responsibility Principle (SRP): una classe deve avere una sola responsabilità e tale responsabilità deve essere completamente incapsulata dalla classe.  
  
## Esempio  
  
Classe che rappresenta l'ADT contatore  
  
```java  
public class Contatore {  
	private int valore;  
  
	public Contatore() {  
		this.valore = 0;  
	}  
  
	public void incrementa() {  
		this.valore++;  
	}  
  
	public void decrementa() {  
		this.valore--;  
	}  
  
	public int getValore() {  
		return this.valore;  
	}  
	  
	public void resetta() {  
		this.valore = 0;  
	}  
}  
```  
  
In questo esempio, la classe `Contatore` incapsula lo stato del contatore (l'attributo `valore`) e fornisce metodi pubblici per manipolare e accedere a tale stato. La responsabilità della classe è limitata alla gestione del contatore, rispettando il principio di responsabilità singola (SRP).  
  
La classe `Starter` contenente il metodo `main` per eseguire il programma:  
  
```java  
public class Starter {  
	public static void main(String[] args) {  
		Contatore contatore = new Contatore();  
		contatore.incrementa();  
		System.out.println("Valore del contatore: " + contatore.getValore());  
		contatore.decrementa();  
		System.out.println("Valore del contatore dopo decremento: " + contatore.getValore());  
		contatore.resetta();  
		System.out.println("Valore del contatore dopo reset: " + contatore.getValore());  
	}  
}  
```  
  
In questo esempio, la classe `Starter` crea un'istanza della classe `Contatore` e utilizza i suoi metodi per manipolare il contatore e stampare il suo valore.  
  
## Static  
  
L'attributo static condivide il valore tra tutte le istanze della classe.  
  
```java  
public class Contatore {  
	private static int valoreGlobale = 0;  
	private int valoreIstanza;  
  
	public Contatore() {  
		this.valoreIstanza = 0;  
	}  
  
	public void incrementa() {  
		this.valoreIstanza++;  
		valoreGlobale++;  
	}  
  
	public int getValoreIstanza() {  
		return this.valoreIstanza;  
	}  
  
	public static int getValoreGlobale() {  
		return valoreGlobale;  
	}  
}  
```  
  
In questo esempio, `valoreGlobale` è un attributo statico condiviso tra tutte le istanze della classe `Contatore`, mentre `valoreIstanza` è un attributo specifico per ogni istanza.  
  
Un metodo static può essere chiamato senza creare un'istanza della classe.  
  
```java  
public class MathUtils {  
	public static int somma(int a, int b) {  
		return a + b;  
	}  
}  
```  
  
In questo esempio, il metodo `somma` è statico e può essere chiamato direttamente sulla classe `MathUtils` senza creare un'istanza della classe.