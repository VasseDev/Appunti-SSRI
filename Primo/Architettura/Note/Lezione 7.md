---
share: true
---
  
# Il calcolatore  
  
[Slide: Lezione 7](../Slides/Architettura07.pdf)  
  
```table-of-contents  
  
```  
  
## Classi di calcolatori  
  
1. **Personal computer (PC)**  
    - pensato per un singolo utente  
    - costo limitato  
    - software di terze parti  
2. **Server**  
    - grandi dimensioni  
    - si accede solo tramite la rete (ssh)  
    - software dedicato o di terze parti  
3. **Calcolatori embedded**  
    - dedicati  
    - i più numerosi  
    - prestazioni limitate  
    - basso consumo  
    - costo ridotto  
4. **Dispositivi mobili**  
    - alimentati a batteria  
    - connessione wireless  
    - basso costo  
5. **Cloud computing**  
    - sostituisce i server locali con server remoti  
    - enormi centri di calcolo  
    - molti server che forniscono servizi tramite internet  
    - i server o la capacità di calcolo sono noleggiati  
  
## Strati di software  
  
1. **Software applicativo**  
    - componenti più vicini all'utente  
2. **Software di sistema**  
    - sistema operativo  
        - gestisce le risorse hardware  
        - gestisce le applicazioni che girano contemporaneamente  
    - compilatori  
        - traduzione di un programma sorgente in un programma eseguibile  
  
## Linguaggio macchina  
  
Il **linguaggio macchina** è il linguaggio nativo del calcolatore, costituito da sequenze di bit (0 e 1) che rappresentano istruzioni eseguibili direttamente dalla CPU.  
  
### Assembler  
  
L'**assembler** è un linguaggio di programmazione a basso livello che utilizza mnemonici per rappresentare le istruzioni del linguaggio macchina, rendendo il codice più leggibile per gli esseri umani.  
Ad ogni istruzione in assembler corrisponde una specifica istruzione in linguaggio macchina.  
  
## Linguaggi di alto livello  
  
I **linguaggi di alto livello** sono linguaggi di programmazione che utilizzano una sintassi più vicina al linguaggio umano, facilitando la scrittura e la lettura del codice.  
Ad ogni istruzione in un linguaggio di alto livello corrispondono più istruzioni in linguaggio macchina.  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 17.48.19](../../../Immagini/Screenshot%202025-11-10%20alle%2017.48.19.png)  
  
## Architettura di Von Neumann  
  
Componenti principali:  
  
1. **Unità di elaborazione centrale (CPU)**  
    - esegue le istruzioni del programma  
    - composta da:  
        - Unità di controllo  
        - Unità aritmetico-logica (ALU)  
        - Registri  
2. **Memoria**  
    - memorizza dati e istruzioni  
3. **Dispositivi di input/output (I/O)**  
    - consentono la comunicazione con l'esterno  
  
### Memoria  
  
La memoria è organizzata in celle, ciascuna con un indirizzo univoco.  
Ogni cella può contenere un dato o un'istruzione.  
  
### Ciclo di fetch-decode-execute  
  
1. **Fetch (prelievo)**: l'unità di controllo recupera l'istruzione dalla memoria.  
2. **Decode (decodifica)**: l'unità di controllo interpreta l'istruzione.  
3. **Execute (esecuzione)**: l'unità di elaborazione esegue l'istruzione.  
   Questo ciclo si ripete continuamente durante l'esecuzione di un programma.  
  
### Cache  
  
La **cache** è una memoria veloce e di piccole dimensioni situata vicino alla CPU.  
Viene utilizzata per memorizzare temporaneamente i dati e le istruzioni più frequentemente utilizzati, riducendo i tempi di accesso alla memoria principale.  
È fatta con la tecnologia SRAM (Static RAM), più veloce ma più costosa della DRAM (Dynamic RAM) usata per la memoria principale.  
  
### Memoria secondaria  
  
La **memoria secondaria** è utilizzata per l'archiviazione permanente dei dati e dei programmi.  
  
### Gerarchia delle memorie  
  
![Screenshot 2025-11-10 alle 17.52.30](../../../Immagini/Screenshot%202025-11-10%20alle%2017.52.30.png)  
  
## Architettura  
  
L'**architettura** dell'insieme di istruzioni (ISA) definisce il set di istruzioni che la CPU può eseguire, nonché il formato delle istruzioni e i modi di indirizzamento.  
  
Comprende:  
  
- tutte le informazioni necessarie per scrivere un programma in linguaggio macchina funzionante  
- le istruzioni e il loro formato binario  
- i registri nel processore  
- le caratteristiche della memoria principale  
- i dispositivi di I/O  
  
### Implementazione  
  
L'**implementazione** riguarda come l'architettura viene realizzata fisicamente nel processore, inclusi i circuiti elettronici e le tecnologie utilizzate.  
Ci sono diverse implementazioni della stessa architettura, che possono variare in termini di prestazioni, consumo energetico e costo.  
  
### Classificazione delle architetture  
  
1. **CISC (Complex Instruction Set Computer)**  
    - istruzioni complesse  
    - molte istruzioni diverse  
    - esecuzione più lenta per istruzione  
    - esempio: x86  
2. **RISC (Reduced Instruction Set Computer)**  
    - istruzioni semplici  
    - numero ridotto di istruzioni  
    - esecuzione più veloce per istruzione  
    - esempio: ARM  
  
# Architettura MIPS  
  
L'architettura MIPS (Microprocessor without Interlocked Pipeline Stages) è un'architettura RISC.  
  
## Registri  
  
La CPU MIPS dispone di 32 registri generali a 32 bit, numerati da `$0` a `$31`.  
  
Convenzione sui registri:  
  
- `$zero` (`$0`): sempre 0  
- `$t0`-`$t9`: registri temporanei  
- `$s0`-`$s7`: registri salvati (variabili dei programmi)  
  
## Operazioni aritmetiche  
  
`add a,b,c`  
  
- somma i valori nei registri b e c  
- memorizza il risultato nel registro a  
  
Ciascuna istruzione aritmetica MIPS  
  
- esegue solo un'operazione  
- deve contenere esattamente tre operandi  
  
_Esempio_  
  
```assembly  
add $t0, $t1, $t2  # $t0 = $t1 + $t2  
```  
  
`mult a,b`  
  
- moltiplica i valori nei registri a e b  
- memorizza il risultato in registri speciali `hi` e `lo`  
    - `hi`: parte alta del risultato  
    - `lo`: parte bassa del risultato  
- la moltiplicazione di due numeri rappresentati con 32 bit può produrre un risultato di 64 bit  
- per ottenere il risultato completo, si usano le istruzioni `mfhi` e `mflo`  
    - `mfhi a`: copia il valore del registro `hi` nel registro a  
    - `mflo a`: copia il valore del registro `lo` nel registro a  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 19.11.27](../../../Immagini/Screenshot%202025-11-10%20alle%2019.11.27.png)  
  
`div a,b`  
  
- divide il valore nel registro a per il valore nel registro b  
- memorizza il quoziente in `lo` e il resto in `hi`  
  
### Operandi immediati  
  
Alcune istruzioni MIPS supportano operandi immediati, che sono valori costanti inclusi direttamente nell'istruzione.  
`addi a,b,imm`  
  
- somma il valore nel registro b con l'immediato imm  
- memorizza il risultato nel registro a  
  
#### Copia di registri  
  
`addi a,b,0`  
  
- copia il valore dal registro b al registro a  
- uno dei due addendi è 0  
  
### Sottrazione immediata  
  
`subi` non esiste.  
Per sottrarre un immediato, si usa:  
`addi a,b,-imm`  
  
- sottrae l'immediato imm dal valore nel registro b  
- memorizza il risultato nel registro a  
  
## Array e matrici  
  
Gli array e le matrici sono memorizzati in memoria come sequenze contigue di elementi.  
  
## Memoria  
  
La memoria MIPS è organizzata in byte (8 bit).  
  
- Ogni cella di memoria ha un indirizzo unico.  
- Gli indirizzi sono multipli di 4 per l'accesso a parole (32 bit).  
- La dimensione della memoria massima è di 4 GB (2^32 byte).  
  
### Byte in una parola  
  
I byte in una parola possono essere disposti in due modi:  
  
1. **Big-endian**: il byte più significativo (MSB) è memorizzato all'indirizzo più basso.  
2. **Little-endian**: il byte meno significativo (LSB) è memorizzato all'indirizzo più basso.  
  
> **MIPS** utilizza il formato big-endian per default.  
  
### Lettura di una parola  
  
`lw a, offset(b)`  
  
- carica una parola dalla memoria (`lw` = load word)  
  
_Esempio_  
![Screenshot 2025-11-10 alle 18.16.14](../../../Immagini/Screenshot%202025-11-10%20alle%2018.16.14.png)  
  
_Esempio_  
  
- `A` è un array di 100 parole parole (4 byte ciascuna)  
- il compilatore associa le variabili `g` e `h` ai registri `$s1` e `$s2`  
- l'indirizzo base di `A` è memorizzato in `$s3`  
- traduci in assembler MIPS l'istruzione `g=h+A[8]`  
  
```assembly  
lw $t0, 32($s3)   # carica A[8] in $t0 (8*4=32)  
add $s1, $s2, $t0  # g = h + A[8]  
```  
  
### Scrittura di una parola  
  
`sw $s1, 20($s2)`  
  
- memorizza una parola in memoria (`sw` = store word)  
- salva il contenuto del registro `$s1` all'indirizzo calcolato sommando l'offset 20 al valore nel registro `$s2`  
  
_Esempio_  
  
- `B` è un array di 100 parole (4 byte ciascuna)  
- il compilatore associa la variabile `h` al registro `$s2`  
- l'indirizzo base di `B` è memorizzato in `$s3`  
- traduci in assembler MIPS l'istruzione `B[12]=h+B[8]`  
  
```assembly  
lw $t0, 32($s3)    # carica B[8] in $t0 (8*4=32)  
add $t1, $s2, $t0   # calcola h + B[8] in $t1  
sw $t1, 48($s3)    # memorizza il risultato in B[12] (12*4=48)  
```  
  
### Operatori logici  
  
![Screenshot 2025-11-10 alle 18.26.34](../../../Immagini/Screenshot%202025-11-10%20alle%2018.26.34.png)  
  
#### Shift left  
  
`sll $t2, $s0, 4`  
  
- sposta a sinistra il contenuto di `$s0` di 4 bit (`sll` = shift left logical)  
- riempie con zeri i bit a destra  
- equivale a moltiplicare per 16 (2^4)  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 18.34.10](../../../Immagini/Screenshot%202025-11-10%20alle%2018.34.10.png)  
  
#### Shift right  
  
`srl $t2, $s0, 4`  
  
- sposta a destra il contenuto di `$s0` di 4 bit (`srl` = shift right logical)  
- riempie con zeri i bit a sinistra  
- equivale a dividere per 16 (2^4) arrotondando per difetto  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 18.34.38](../../../Immagini/Screenshot%202025-11-10%20alle%2018.34.38.png)  
  
#### AND bit a bit  
  
`and $t0, $t1, $t2`  
  
- esegue l'AND bit a bit tra i registri `$t1` e `$t2`  
- memorizza il risultato in `$t0`  
- esempio: 1100 AND 1010 = 1000  
  
Può essere usato per forzare a 0 alcuni bit (maschera di bit).  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 18.33.51](../../../Immagini/Screenshot%202025-11-10%20alle%2018.33.51.png)  
  
#### OR bit a bit  
  
`or $t0, $t1, $t2`  
  
- esegue l'OR bit a bit tra i registri `$t1` e `$t2`  
- memorizza il risultato in `$t0`  
- esempio: 1100 OR 1010 = 1110  
  
Può essere usato per forzare a 1 alcuni bit (maschera di bit).  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 18.36.18](../../../Immagini/Screenshot%202025-11-10%20alle%2018.36.18.png)  
  
#### NOR bit a bit  
  
`nor $t0, $t1, $t2`  
  
- esegue il NOR bit a bit tra i registri `$t1` e `$t2`  
- memorizza il risultato in `$t0`  
- esempio: 1100 NOR 1010 = 0001  
  
Può essere usato per simulare il NOT bit a bit, ovvero se `t2` è `$zero` allora `$t0` conterrà il complemento di `$t1`.  
  
_Esempio_  
  
![Screenshot 2025-11-10 alle 18.37.54](../../../Immagini/Screenshot%202025-11-10%20alle%2018.37.54.png)  
  
#### ANDi e ORi  
  
`andi $t0, $t1, imm`  
![Screenshot 2025-11-10 alle 18.38.55](../../../Immagini/Screenshot%202025-11-10%20alle%2018.38.55.png)  
  
`ori $t0, $t1, imm`  
![Screenshot 2025-11-10 alle 18.39.04](../../../Immagini/Screenshot%202025-11-10%20alle%2018.39.04.png)  
  
# Esercizi  
  
**Esercizio 1**  
Qual è il codice assembler MIPS corrispondente alla seguente istruzione? Si supponga che le variabili `f`, `g` e `h` siano date e che possano essere dichiarate come interi a 32 bit all’interno del programma:  
`f = g + (h – 5)`  
  
```assembly  
addi i, h, 5  
add f, g, i  
```  
  
**Esercizio 2**  
Scrivere una sola istruzione ad alto livello che corrisponda alle seguenti istruzioni MIPS:  
  
```assembly  
add f, g, h  
add, f, i, f  
```  
  
```c  
f = i + g + h;  
```  
  
**Esercizio 3**  
Scrivere il codice assembler MIPS che corrisponde alla seguenti istruzioni ad alto livello. Si supponga che le variabili `i` e `j`, siano assegnate rispettivamente ai registri `$s3` e `$s4`. Si assuma che l’indirizzo base dei vettori `A` e `B` sia contenuto rispettivamente nei registri `$s6` e `$s7`  
  
- `B[8] = A[i-j]`  
- `B[8] = A[i] + A[j]`\  
  
```assembly  
# a  
sub $t0, $s3, $s4  
addi 32($s7), $t0, 0  
  
# b  
add 32($s7), $s3($s6), $s3($s6)  
```  
  
**Esercizio 4**  
Tradurre il seguente spezzone di codice assembler MIPS in un linguaggio ad alto livello. Si supponga che le variabili `f`, `g`, `h`, `i` e `j` siano assegnate rispettivamente ai registri `$s0`, `$s1`, `$s2`, `$s3` e `$s4`. Si assuma che l’indirizzo base dei vettori `A` e `B` sia contenuto nei registri `$s6` e `$s7` rispettivamente.  
  
```assembly  
addi $t0, $s6, 4  
add $t1, $s6, $zero  
sw $t1, 0($t0)  
lw $t0, 0($t0)  
add $s0, $t1, $t0  
```  
  
```c  
A[1] = A[0];  
f = A[0] + A[1];  
```  
  
**Esercizio 5**  
Supponendo che `$t0 = 0xAAAAAAAA` e `$t1 = 0x12345678`, determinare il contenuto di `$t2` dopo l’esecuzione delle seguenti istruzioni MIPS:  
  
```assembly  
sll $t2, $t0, 4  
or $t2, $t2, $t1  
```  
  
Dopo l'esecuzione delle istruzioni, il contenuto di `$t2` sarà `0xBABEFEF8`.  
  
Perché?  
  
1. La prima istruzione `sll $t2, $t0, 4` sposta a sinistra il valore di `$t0` (0xAAAAAAAA) di 4 bit, risultando in `0xAAAAAAA0`.  
2. La seconda istruzione `or $t2, $t2, $t1` esegue un'operazione OR bit a bit tra `0xAAAAAAA0` e `0x12345678`, risultando in `0xBABEFEF8`.  
  
**Esercizio 6**  
Supponendo che `t0 = 0xAAAAAAAA, $t1 = 0x12345678`, determinare il contenuto di `$t2` dopo l’esecuzione delle seguenti istruzioni MIPS:  
  
```assembly  
srl $t2, $t0, 3  
andi $t2, $t2, 0xFFEF  
```  
  
1. La prima istruzione `srl $t2, $t0, 3` sposta a destra il valore di `$t0` (0xAAAAAAAA) di 3 bit, risultando in `0x15555555`.  
2. La seconda istruzione `andi $t2, $t2, 0xFFEF` esegue un'operazione AND bit a bit tra `0x15555555` e `0x0000FFEF`, risultando in `0x00005545`.  
  
**Esercizio 7**  
Determinare la sequenza più corta di istruzioni MIPS che consente di estrarre i bit da 11 a 16 dal registro `$t0` e li sostituisce ai bit da 26 a 31 del registro `$t1`, lasciando inalterati tutti gli altri bit di `$t1` e `$t0`.  
  
