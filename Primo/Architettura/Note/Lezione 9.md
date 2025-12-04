---
share: true
---
  
![Architettura09](../Slides/Architettura09.pdf)  
  
# Progetto CPU a singolo ciclo  
  
## Implementazione HW  
  
L'architettura delle istruzioni può avere diverse implementazioni hardware.  
Vedremo un'implementazione semplificata che esegue un sottoinsieme delle istruzioni MIPS:  
  
- istruzioni logico-matematiche (R)  
  
```  
add, sub, and, or, slt  
```  
  
- istruzioni di lettura e scrittura in memoria (I)  
  
```  
lw, sw  
```  
  
- istruzione di salto condizionato (I)  
  
```  
beq  
```  
  
- istruzione di salto incondizionato (J)  
  
```  
j  
```  
  
## CPU  
  
Costituita da:  
  
1. _unità di controllo_ (control unit)  
    - riceve in input un'istruzione e genera _segnali di controllo_  
2. _unità di elaborazione_ (data path)  
    - esegue le istruzioni utilizzando elementi di stato ed elementi combinatori  
  
**Schema semplificato**  
![Screenshot 2025-11-28 alle 08.34.28](../../../Immagini/Screenshot%202025-11-28%20alle%2008.34.28.png)  
  
![Screenshot 2025-11-28 alle 08.41.52](../../../Immagini/Screenshot%202025-11-28%20alle%2008.41.52.png)  
  
- **Elementi che variano con il clock** (stato)  
    - PC  
    - Registri generali  
    - Memoria dati  
        - scrittura di un dato sulla base dell'indirizzo  
- **Elementi combinatori (indipendenti dal clock)**  
    - ALU  
        - esegue operazioni aritmetiche e logiche  
        - utilizzata da tutte le istruzioni tranne la jump  
    - Sommatori  
    - Memoria istruzioni  
        - lettura di una istruzione dalla memoria centrale  
    - Memoria dati  
        - lettura di un dato sulla base dell'indirizzo  
  
### Metodo di temporizzazione  
  
Gli _elementi di stato_ prendono in input:  
  
- il valore da scrivere  
- il clock  
  
La temporizzazione è _sensibile ai fronti_, lo stato viene cioè aggiornato in corrispondenza di un fronte del clock.  
Ogni istruzione dura un ciclo di clock.  
  
## Fetch  
  
Il _fetch_ è la fase in cui viene caricata un'istruzione.  
  
Il _PC_, che contiene l'indirizzo dell'istruzione corrente, deve essere aggiornato al valore $\text{PC}+4$ (istruzione successiva) se non ci sono salti  
  
Il _sommatore_ calcola l'indirizzo della prossima istruzione.  
  
La _memoria istruzioni_ legge l'istruzione dalla memoria centrale all'indirizzo contenuto nel PC.  
  
![Screenshot 2025-11-28 alle 08.54.13](../../../Immagini/Screenshot%202025-11-28%20alle%2008.54.13.png)  
  
### Fetch (senza salti)  
  
![Screenshot 2025-11-28 alle 08.55.43](../../../Immagini/Screenshot%202025-11-28%20alle%2008.55.43.png)  
  
Contemporaneamente:  
  
1. si prende l'istruzione corrente dal PC  
2. si calcola $PC+4$  
  
**Esempio**  
![Screenshot 2025-11-28 alle 08.57.07](../../../Immagini/Screenshot%202025-11-28%20alle%2008.57.07.png)  
  
## Decodifica  
  
![Screenshot 2025-11-28 alle 08.58.08](../../../Immagini/Screenshot%202025-11-28%20alle%2008.58.08.png)  
  
1. lettura dell'istruzione  
2. generazione dei segnali di controllo opportuni  
3. lettura dei registri (tranne jump)  
  
## Esecuzione delle istruzioni di formato R  
  
![Screenshot 2025-11-28 alle 09.57.45](../../../Immagini/Screenshot%202025-11-28%20alle%2009.57.45.png)  
  
1. lettura dei registri `rs` e `rt`  
2. operazione `funct` nell'ALU  
3. scrittura del risultato nel registro `rd`  
  
### Lettura registri  
  
![Screenshot 2025-11-28 alle 09.59.54](../../../Immagini/Screenshot%202025-11-28%20alle%2009.59.54.png)  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.06.19](../../../Immagini/Screenshot%202025-11-28%20alle%2010.06.19.png)  
  
### Scrittura registri  
  
_RegWrite_ abilità la scrittura.  
  
![Screenshot 2025-11-28 alle 10.00.25](../../../Immagini/Screenshot%202025-11-28%20alle%2010.00.25.png)  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.08.27](../../../Immagini/Screenshot%202025-11-28%20alle%2010.08.27.png)  
  
### ALU (unità aritmetico-logica)  
  
![Screenshot 2025-11-28 alle 10.01.07](../../../Immagini/Screenshot%202025-11-28%20alle%2010.01.07.png)  
  
Prende in **input**:  
  
- due operandi di 32 bit  
- OperazioneALU che specifica quale operazione deve eseguire  
  
Restituisce in **output**:  
  
- un risultato di 32 bit  
- il bit _Zero_ che è `1` sei il risultato dell'operazione è 0 (si usa per `beq`)  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.07.33](../../../Immagini/Screenshot%202025-11-28%20alle%2010.07.33.png)  
  
### Schema per istruzioni R  
  
![Screenshot 2025-11-28 alle 10.10.03](../../../Immagini/Screenshot%202025-11-28%20alle%2010.10.03.png)  
  
## Esecuzione delle istruzioni di formato I  
  
### Unità addizionali utilizzate  
  
**Unità di memoria dati**  
![Screenshot 2025-11-28 alle 10.12.43](../../../Immagini/Screenshot%202025-11-28%20alle%2010.12.43.png)  
  
- è un circuito combinatorio che permette l'accesso alla memoria centrale  
- prende in input due segnali di controllo *MemWrite* e *MemRead* che gli comunicano quale operazione deve eseguire  
  
**Unità di estensione del segno**  
![Screenshot 2025-11-28 alle 10.14.35](../../../Immagini/Screenshot%202025-11-28%20alle%2010.14.35.png)  
  
Inserisce nei 16 bit più significativi il bit del segno  
  
### Istruzioni lw e sw  
  
![Screenshot 2025-11-28 alle 10.15.37](../../../Immagini/Screenshot%202025-11-28%20alle%2010.15.37.png)  
  
Indirizzo di memoria calcolato:  
![Screenshot 2025-11-28 alle 10.20.47](../../../Immagini/Screenshot%202025-11-28%20alle%2010.20.47.png)  
#### Schema per lw  
  
1. Lettura del registro base `rs`  
2. calcolo dell'indirizzo: registro + offset  
	- questa operazione avviene grazie all'**ALU**  
3. lettura del dato  
4. scrittura nel registro `rt`  
  
![Screenshot 2025-11-28 alle 10.23.51](../../../Immagini/Screenshot%202025-11-28%20alle%2010.23.51.png)  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.24.07](../../../Immagini/Screenshot%202025-11-28%20alle%2010.24.07.png)  
  
#### Schema per sw  
  
1. lettura del registro base `rs` e del registro sorgente `rt`  
2. calcolo dell'indirizzo: base + offset  
3. scrittura del dato in memoria  
  
![Screenshot 2025-11-28 alle 10.26.20](../../../Immagini/Screenshot%202025-11-28%20alle%2010.26.20.png)  
  
#### Schema per istruzioni tipo R e I lw/sw  
![Screenshot 2025-11-28 alle 10.27.50](../../../Immagini/Screenshot%202025-11-28%20alle%2010.27.50.png)  
  
## Esecuzione delle istruzioni di formato I (salto condizionato)  
  
### Istruzione beq  
  
![Screenshot 2025-11-28 alle 10.29.04](../../../Immagini/Screenshot%202025-11-28%20alle%2010.29.04.png)  
  
