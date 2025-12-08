---
share: true
---
  
![Architettura09](../Slides/Architettura09.pdf)  
![Lezione9](../Libri/Lezione9.pdf)  
  
# Progetto CPU a singolo ciclo  
  
## Implementazione HW  
  
L'architettura delle istruzioni può avere diverse implementazioni hardware.  
Vedremo un'implementazione semplificata che esegue un sottoinsieme delle istruzioni MIPS:  
1  
  
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
Questo permette di leggere e scrivere un elemento di stato nello stesso ciclo di clock senza creare problemi di concorrenza.  
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
  
Sono necessari 2 elementi:  
  
- il _register file_  
- la _ALU_  
  
![Screenshot 2025-11-28 alle 09.57.45](../../../Immagini/Screenshot%202025-11-28%20alle%2009.57.45.png)  
  
1. lettura dei registri `rs` e `rt`  
2. operazione `funct` nell'ALU  
3. scrittura del risultato nel registro `rd`  
  
L'architettura può leggere e scrivere nel _register file_ nello stesso ciclo di clock, semplicemente il contenuto letto in un dato istante sarà relativo al ciclo di clock precedente, mentre quello scritto nel ciclo corrente potrà essere letto nel ciclo successivo.  
  
L'uscita _Zero_ della ALU è 1 se il risultato dell'operazione equivale a 0 oppure se la condizione del `beq` è verificata.  
  
**Esempio**  
  
```  
add x1, x2, x3  
```  
  
### Lettura registri  
  
Struttura logica del _register file_.  
![Screenshot 2025-11-28 alle 09.59.54](../../../Immagini/Screenshot%202025-11-28%20alle%2009.59.54.png)  
L'indice dei registri viene passato a due multiplexer che selezionano il valore del rispettivo registro.  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.06.19](../../../Immagini/Screenshot%202025-11-28%20alle%2010.06.19.png)  
  
### Scrittura registri  
  
Logica di scrittura del _register file_.  
![Screenshot 2025-11-28 alle 10.00.25](../../../Immagini/Screenshot%202025-11-28%20alle%2010.00.25.png)  
  
1. Il decoder $5\rightarrow 32$ prende il numero del registro da scrivere e attiva una sola delle sue 32 linee d'uscita.  
2. _RegWrite_ abilità la scrittura.  
3. Ogni uscita del decoder viene combinata con _RegWrite_ tramite una porta AND. Quindi solo il registro selezionato riceve il _clock_ **(C)**.  
4. Il dato **(D)** viene scritto nel registro selezionato.  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.08.27](../../../Immagini/Screenshot%202025-11-28%20alle%2010.08.27.png)  
  
### ALU (unità aritmetico-logica)  
  
![Screenshot 2025-11-28 alle 10.01.07](../../../Immagini/Screenshot%202025-11-28%20alle%2010.01.07.png)  
  
Prende in **input**:  
  
- due operandi di 32 bit  
- _OperazioneALU_ che specifica quale operazione deve eseguire  
  
Restituisce in **output**:  
  
- un risultato di 32 bit  
- il bit _Zero_ che è `1` sei il risultato dell'operazione è 0 (si usa per `beq`)  
  
**Esempio**  
![Screenshot 2025-11-28 alle 10.07.33](../../../Immagini/Screenshot%202025-11-28%20alle%2010.07.33.png)  
  
### Schema per istruzioni R  
  
![Screenshot 2025-11-28 alle 10.10.03](../../../Immagini/Screenshot%202025-11-28%20alle%2010.10.03.png)  
  
1. Fetch dell’istruzione  
    - Il **PC** contiene l’indirizzo della prossima istruzione.  
    - L’indirizzo viene inviato alla **memoria istruzioni**, che restituisce la **word dell’istruzione**.  
    - In parallelo, il PC viene incrementato di 4 tramite l’**adder**.  
2. Decodifica dell’istruzione. L’istruzione letta dalla memoria è suddivisa nei suoi campi:  
    - op (6 bit): codice dell’operazione. Viene inviato all’**unità di controllo**, che genera i segnali di controllo del datapath.  
    - rs (5 bit): primo registro sorgente  
    - rt (5 bit): secondo registro sorgente  
    - rd (5 bit): registro destinazione  
    - shamt (5 bit): shift amount  
    - funct (6 bit): funzione ALU specifica  
3. Lettura dei registri  
    - I campi rs e rt indirizzano il **file di registri**, che restituisce:  
        - valore contenuto nel registro rs  
        - valore contenuto nel registro rt  
    - Il campo rd verrà usato più avanti nel ciclo, durante la fase di scrittura.  
4. Controllo dell’ALU  
    - L’unità di controllo utilizza op e, se necessario, il campo funct per determinare l’**operazione ALU** da eseguire.  
    - Questa scelta viene inviata all’ALU tramite l’**ALU control**.  
5. Esecuzione  
    - L’**ALU** riceve i valori letti dai registri e applica l’operazione richiesta:  
        - somma, sottrazione, AND, OR, slittamenti, ecc.  
    - Produce:  
        - un **risultato**  
        - un segnale **zero** (utile per branch, ma non rappresentato qui)  
6. Scrittura del risultato (fase WB). Se il segnale di controllo **RegWrite** è attivo:  
    - il valore prodotto dall’ALU viene inviato al file di registri  
    - il registro di destinazione è quello indicato da rd  
    - il dato viene scritto nel registro selezionato  
  
**Riassunto più compatto:**  
  
1. PC → Memoria istruzioni → istruzione  
2. Istruzione → estrazione dei campi (op, rs, rt, rd, shamt, funct)  
3. op → Unità di controllo → segnali di controllo  
4. rs, rt → Register file → lettura dei due operandi  
5. funct → ALU control → definizione dell’operazione  
6. ALU → calcolo del risultato  
7. rd + RegWrite → Register file → scrittura del risultato  
  
## Esecuzione delle istruzioni di formato I  
  
### Unità addizionali utilizzate  
  
Oltre al _register file_ e alla _ALU_ mostrate in precedenza sono richieste due unità addizionali.  
  
**Unità di memoria dati**  
![Screenshot 2025-11-28 alle 10.12.43](../../../Immagini/Screenshot%202025-11-28%20alle%2010.12.43.png)  
  
- è un circuito combinatorio che permette l'accesso alla memoria centrale  
- prende in input due segnali di controllo _MemWrite_ e _MemRead_ che gli comunicano quale operazione deve eseguire. All'interno di un ciclo di clock solo uno dei due può essere asserito.  
  
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
  
Calcolo dell'indirizzo di salto  
![Screenshot 2025-11-28 alle 10.29.04](../../../Immagini/Screenshot%202025-11-28%20alle%2010.29.04.png)  
  
1. Estensione dell'offset su 32 bit  
2. Moltiplicazione per 4 dell'offset  
3. Somma del PC con l'estensione del segno  
  
![Pasted image 20251208120720](../../../Immagini/Pasted%20image%2020251208120720.png)  
  
1. Arrivo dell’istruzione  
    - L’istruzione appena prelevata dalla memoria entra nel blocco **Registri** (file di registri).  
    - I campi dell’istruzione vengono usati così:  
        - Registro di lettura 1 ← campo **rs**  
        - Registro di lettura 2 ← campo **rt**  
        - Il campo **immediato** a 16 bit viene mandato al blocco di **Estensione del segno**.  
2. Lettura dei registri. Nel blocco **Registri** si leggono:  
    - **Dato letto 1**: contenuto del registro rs.  
    - **Dato letto 2**: contenuto del registro rt.  
3. Estensione del segno dell’immediato  
    - Il campo immediato a 16 bit dell’istruzione entra nel blocco **Estensione del segno**.  
    - Esce un valore a **32 bit**: è lo stesso numero, ma esteso mantenendo il segno (se il bit più significativo dei 16 bit è 1, si riempiono di 1 i bit alti).  
    - Questo valore viene usato come offset per calcolare l’indirizzo di salto delle istruzioni di branch.  
4. Shift a sinistra di 2 posizioni  
    - Il valore a 32 bit esteso dal segno entra nel blocco **Shift sinistra 2**.  
    - Viene spostato di due bit verso sinistra (moltiplicato per 4).  
    - Questo serve perché gli indirizzi delle istruzioni sono allineati a parola (4 byte), mentre l’immediato nel branch è espresso in parole, non in byte.  
5. Calcolo dell’indirizzo di salto  
    - Dall’unità di elaborazione arriva **PC + 4** (indirizzo dell’istruzione successiva).  
    - Il risultato dello **Shift sinistra 2** viene sommato a **PC + 4** nell’unità **Add (Somma)**.  
    - L’uscita di questo sommatore è l’**Indirizzo di salto** (branch target).  
    - Questo è l’indirizzo a cui il PC verrà caricato se il salto condizionato risulta “da prendere”.  
6. Operazione della ALU  
    - In parallelo al calcolo dell’indirizzo di salto, **Dato letto 1** e **Dato letto 2** entrano nella **ALU**.  
    - la ALU esegue in genere una **sottrazione**: Dato letto 1 – Dato letto 2.  
7. Segnale Zero per la logica di salto  
    - La ALU produce due risultati:  
        - Il risultato dell’operazione aritmetico/logica.  
        - Il segnale **Zero**, che vale 1 se il risultato è uguale a 0.  
    - Il segnale **Zero** va **“Verso la logica di controllo dei salti”**:  
        - se **Zero = 1** e il segnale di controllo **Branch** è attivo, la logica di controllo decide di caricare il PC con l’**Indirizzo di salto** calcolato dal sommatore.  
        - Se Zero = 0 (i registri erano diversi) il PC rimane su **PC + 4** e il salto non viene effettuato.  
  
#### Confronto tra registri  
  
![Screenshot 2025-12-08 alle 12.30.38](../../../Immagini/Screenshot%202025-12-08%20alle%2012.30.38.png)  
  
1. La ALU esegue una `sub` tra i due registri  
2. Se i contenuti sono uguali in uscita dalla ALU si avrà `Zero = 1`, allora PC = l'indirizzo calcolato a partire dall'_offset_  
3. Se non sono uguali si avrà invece `Zero = 0`, allora PC = PC+4  
  
## Schema per R e I  
  
![Screenshot 2025-12-08 alle 12.35.02](../../../Immagini/Screenshot%202025-12-08%20alle%2012.35.02.png)  
  
### Esempio beq  
  
![Screenshot 2025-12-08 alle 12.37.59](../../../Immagini/Screenshot%202025-12-08%20alle%2012.37.59.png)  
  
## Esecuzione delle istruzioni di formato J (salto incondizionato)  
  
![Screenshot 2025-12-08 alle 12.46.28](../../../Immagini/Screenshot%202025-12-08%20alle%2012.46.28.png)  
  
Il nuovo indirizzo del PC viene costruito come segue:  
  
1. Si prende il campo **\[25–0\]** (indirizzo di salto).  
2. Viene applicato uno **shift a sinistra di 2 bit** (per allineare l’indirizzo alle word boundary, dato che le istruzioni sono lunghe 4 byte).  
3. Si prendono i **bit alti del PC+4** → (PC + 4) \[31–28\].  
4. Si forma il nuovo PC concatenando:  
  
```  
PC_next = { (PC+4)[31–28],  indirizzo_shiftato[27–0] }  
```  
  
# Schema complessivo  
  
![Screenshot 2025-12-08 alle 12.47.29](../../../Immagini/Screenshot%202025-12-08%20alle%2012.47.29.png)  
  
# Riassunto - CPU ciclo unico  
  
1. L'esecuzione di una istruzione si compie in un ciclo di clock  
2. Tutte le unità coinvolte sono utilizzate contemporaneamente  
3. Ogni unità può essere usata una sola volta per istruzione, quindi è necessario:  
    1. avere 2 memorie (istruzioni e dati)  
    2. avere 3 ALU (1 ALU e 2 sommatori)  
    3. usare alcuni multiplexer  
