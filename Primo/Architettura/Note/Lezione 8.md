---
share: true
---
![Architettura08](../Slides/Architettura08.pdf)  
  
# Assembler MIPS  
  
# Istruzioni controllo  
  
Le istruzioni di controllo sono istruzioni che modificano l'ordine con cui vengono eseguite le istruzioni.  
  
## Salto condizionato  
  
Il salto viene eseguito solo se una certa condizione viene soddisfatta.  
  
`beq` (branch on equal)  
  
```  
beq $s1, $s2, L1 # vai a L1 se $s1=$s2  
```  
  
`bne` (branch on not equal)  
  
```  
bne $s1, $s2, L1 # vai a L1 se $s1!=s2  
```  
  
## Salto incondizionato  
  
Il salto viene eseguito sempre  
  
```  
j L1 # vai a L1  
```  
  
## Esempi  
  
**if ... then**  
  
codice C  
  
```c  
if (i==j) {  
	f=g+h;  
}  
```  
  
codice MIPS  
  
```assembly  
	bne $s3, $s4, Esci # se i!=j vai a Esci  
	add $s0, $s1, $s2  # se i=j f=g+h  
Esci:  
```  
  
**if ... then ... else**  
  
codice C  
  
```c  
if (i==j) {  
	f=g+h;  
} else {  
	f=g-h;  
}  
```  
  
codice MIPS  
  
```assembly  
		bne $s3, $s4, Else # se i != j vai a Else  
		add $s0, $s1, $s2  # f=g+h  
		j Esci.            # vai Esci  
Else:   sub $s0, $s1, $s2  # f=g-h  
Esci:  
```  
  
**for**  
  
codice C  
  
```c  
for (i != j) {  
	i=i+1;  
}  
```  
  
codice MIPS  
  
```assembly  
Loop:   beq $s3, $s4, Esci # se i=j vai a Esci  
		addi $s3, $s3, 1   # i=i+1  
		j Loop             # vai a Loop  
Esci:  
```  
  
## Minore e maggiore  
  
```assembly  
slt $t0, $s0, $s1 # set on less than  
```  
  
- se `$s0` < `$s1` allora `$t0=1`  
- se `$s0` >= `$s1` allora `$t0=0`  
  
Con `slt`, `beq` e `bne` possiamo implementare test sui valori delle variabili:  
(\==, !=, <, <=, >, >=)  
  
### minore e maggiore immediato  
  
```assembly  
slti $t0, $s0, 10 # set on less than immediate  
```  
  
- se `$s0` < 10 allora `$t0=1`  
- se `$s0` >= 10 allora `$t0=0`  
  
### Esempi  
  
**if ... then ... else**  
  
codice C  
  
```c  
if (i < j) {  
	f=g+h;  
} else {  
	f=g-h;  
}  
```  
  
codice MIPS  
  
```assembly  
		slt $t0, $s3, $s4  # se i<j allora $t0=1 altrimenti $t0=0  
		beq $t0, $zero, Else # se $t0==0 (i>=j) vai a Else  
		add $s0, $s1, $s2   # f=g+h  
		j Esci              # vai a Esci  
Else:   sub $s0, $s1, $s2   # f=g-h  
Esci:  
```  
  
**for**  
  
codice C  
  
```c  
for (i=0; i<j; i++) {  
	h=h-1;  
}  
```  
  
codice MIPS  
  
```assembly  
		add $s3, $zero, $zero # i=o  
Loop:   slt $t0, $s3, $s4     # se i>=j $t0=0  
		beq $t0, $zero, Esci  # se i>=j vai a Esci  
		addi $s2, $s2, -1     # h=h-1  
		addi $s3, $s3, 1      # i=i+1  
		j Loop                # vai a Loop  
Esci:  
```  
  
# Linguaggio macchina  
  
Le istruzioni assembly vengono tradotte in linguaggio macchina per poter essere eseguite.  
Le istruzioni in linguaggio macchina sono lunghe 32 bit.  
I registri sono indirizzati con numeri da 0 a 31.  
  
## Registri  
  
![Screenshot 2025-11-28 alle 07.43.57](../../../Immagini/Screenshot%202025-11-28%20alle%2007.43.57.png)  
  
## Formato istruzioni  
  
Le istruzioni macchina sono rappresentate con 32 bit. Questi 32 bit sono a loro volta suddivisi in gruppi detti campi.  
  
Il _formato_ di un'istruzione è il numero e la lunghezza di suddetti campi in un'istruzione.  
  
![Screenshot 2025-11-28 alle 07.46.45](../../../Immagini/Screenshot%202025-11-28%20alle%2007.46.45.png)  
  
- Formato **R** (registro)  
    - istruzioni aritmetiche logiche e di scorrimento  
- Formato **I** (immediato)  
    - istruzioni aritmetiche logiche con operandi immediati (costanti)  
    - istruzioni di trasferimento dati  
    - salti condizionati  
- Formato **J** (jump)  
    - salti incondizionati  
  
### Formato R (registro)  
  
![Screenshot 2025-11-28 alle 07.49.36](../../../Immagini/Screenshot%202025-11-28%20alle%2007.49.36.png)  
  
- **op**: (opcode) identifica la classe di istruzione  
- **rs**: primo operando  
- **rt**: secondo operando  
- **rd**: risultato  
- **shamt**: shift amount (scorrimento)  
- **funct**: tipo di operazione  
  
**Esempi di istruzioni in formato R**  
  
```assembly  
add, sub, mult, div # aritmetiche  
sll, srl            # shift  
and, or, not, slt   # logiche  
```  
  
**op** è sempre 000000  
  
![Screenshot 2025-11-28 alle 07.55.12](../../../Immagini/Screenshot%202025-11-28%20alle%2007.55.12.png)  
  
### Formato I (immediato)  
  
![Screenshot 2025-11-28 alle 07.56.58](../../../Immagini/Screenshot%202025-11-28%20alle%2007.56.58.png)  
  
- **op**: (opcode) tipo di istruzione  
- **rs**: registro base  
- **rt**: registro destinazione  
- **indirizzo**: $[-2^{15},2^{15}-1]$ che può rappresentare:  
    - l'offset  
    - una costante  
    - l'etichetta di un salto  
  
**Esempi di istruzioni in formato I**  
  
```assembly  
addi              # aritmetiche immediate  
andi, ori, slti   # logiche immediate  
beq, bne          # salti condizionati  
lw, sw            # accessi in memoria  
```  
  
Il campo **op** distingue le diverse operazioni.  
  
![Screenshot 2025-11-28 alle 08.01.42](../../../Immagini/Screenshot%202025-11-28%20alle%2008.01.42.png)  
  
#### Istruzioni di salto  
  
![Screenshot 2025-11-28 alle 08.03.28](../../../Immagini/Screenshot%202025-11-28%20alle%2008.03.28.png)  
  
L'indirizzo di destinazione del salto (l'etichetta L1) è relativo al _Program Counter_ (PC)  
Il PC contiene l'indirizzo dell'istruzione successiva da eseguire. Questo sistema consente di effettuare salti ad indirizzi di memoria più lunghi di 16 bit.  
L'assemblatore dunque sostituisce l'etichetta con l'indirizzo relativo del PC (quante istruzioni deve saltare).  
Può anche essere negativo.  
  
**Esempio**  
![Screenshot 2025-11-28 alle 08.08.19](../../../Immagini/Screenshot%202025-11-28%20alle%2008.08.19.png)  
  
$$  
\text{PC}+4=40016  
$$  
  
![Screenshot 2025-11-28 alle 08.08.55](../../../Immagini/Screenshot%202025-11-28%20alle%2008.08.55.png)  
  
$$  
\begin{align}  
&(\text{IA}-(\text{PC}+4))/4=(40024-40016)/4=2\\  
&\text{IA}=(\text{PC}+4)+\text{L1}\times 4=40016+2\times4=40024  
\end{align}  
$$  
  
### Formato J (jump)  
  
![Screenshot 2025-11-28 alle 08.13.24](../../../Immagini/Screenshot%202025-11-28%20alle%2008.13.24.png)  
  
- **op**: (opcode) tipo di istruzione  
- **indirizzo**: contiene l'indirizzo assoluto per la destinazione del salto  
  
**Esempio**  
![Screenshot 2025-11-28 alle 08.15.07](../../../Immagini/Screenshot%202025-11-28%20alle%2008.15.07.png)  
  
I 26-bit di indirizzo nelle jump sono un indirizzo di word ovvero un indirizzo di byte composto da 28-bit (si divide per 4).  
![Screenshot 2025-11-28 alle 08.18.13](../../../Immagini/Screenshot%202025-11-28%20alle%2008.18.13.png)  
  
#### Salti incondizionati lunghi  
  
Per saltare ad indirizzi superiori a $2^{28}$ byte si usa:  
```  
jr rs # jump register con formato R  
```