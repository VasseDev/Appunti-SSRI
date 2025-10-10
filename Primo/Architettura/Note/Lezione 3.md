---
share: true
---

# Struttura di un calcolatore

![Screenshot 2025-10-10 alle 10.50.14](../../../Immagini/Screenshot%202025-10-10%20alle%2010.50.14.png)

- **Memoria**:
    - programmi e processi
    - dati in ingresso, uscita ed intermedi
- **CPU (Central Processing Unit)**:
    - Control Unit $\rightarrow$ dove vengono orchestrate le operazioni
    - Datapath $\rightarrow$ dove avvengono le operazioni
- **Input/Output**

## Livelli di astrazione di un calcolatore

- **Algoritmi**: descrivono i passi necessari per risolvere un prolema
- **Linguaggi di programmazione**: passi di un algoritmi descritti in un linguaggio di programmazione di alto livello
- **Sistema operativo**: gestisce le risorse del computer
- **Architettura dell'insieme delle istruzioni (ISA)**: istruzioni eseguite dal processore
- **Microarchitettura**: architettura del processore
- **Gestore dei trasferimenti dei dati**
- **Porte logiche**
- **Transistor**

## Progettazione dei sistemi digitali

- **Messa a punto delle specifiche**: comportamento del circuito
- **Formalizzazione**: ricavare la funzione che rappresenta il circuito
- **Ottimizzazione**: ricavare il circuito migliore
- **Mappatura tecnologica**: ottenere un circuito elettronico
- **Verifica**: correttezza finale

## Logica binaria e porte logiche

> I **circuiti elettronici digitali** trattano informazioni binarie e sono composti da transistor.
> I circuiti elettronici digitali di base sono chiamati **porte logiche**.

I circuiti sono delle reti di porte logiche.
Per descrivere questa rete si usa:

- la logica binaria
- l'algebra booleana

### Logica binaria

Caratteristiche:

- i valori possono avere valore 0 o 1
- gli operatori fondamentali sono: AND, OR, NOT
    - AND = $\times$
    - OR = $+$

#### La negazione (NOT)

> Inverte i bit

$\overline X$ è vera quando $X$ è falsa e viceversa ![Screenshot 2025-10-10 alle 11.17.53](../../../Immagini/Screenshot%202025-10-10%20alle%2011.17.53.png)

#### Congiunzione (AND)

> Moltiplica i bit

$XY$ è vera se e solo se $X$ è vera e $Y$ è vera
![Screenshot 2025-10-10 alle 11.19.13](../../../Immagini/Screenshot%202025-10-10%20alle%2011.19.13.png)

#### Disgiunzione (OR)

> Somma i bit

$X+Y$ è vera se almeno una tra $X$ e $Y$ è vera
![Screenshot 2025-10-10 alle 11.20.17](../../../Immagini/Screenshot%202025-10-10%20alle%2011.20.17.png)

> **ATTENZIONE** 
> $1+1=1$ e **non** $1+1=10$ come nell'aritmetica binaria

### Porte logiche

Sono circuiti di base che calcolano funzioni semplici.


![Screenshot 2025-10-10 alle 11.27.05](../../../Immagini/Screenshot%202025-10-10%20alle%2011.27.05.png)