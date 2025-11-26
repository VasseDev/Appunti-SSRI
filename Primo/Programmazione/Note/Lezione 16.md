---
share: true
---
  
# Astrazione a oggetti  
  
Il mondo fisico è costituito da un insieme di oggetti dotati di:  
  
- identità  
- stato  
- comportamento  
  
questa astrazione è estendibile al software  
  
Ogni oggetto ha uno stato composto da un gruppo di attributi.  
  
Incapsulamento dello stato:  
  
- lo stato è nascosto all'esterno  
- l'accesso allo stato avviene tramite metodi pubblici  
- i metodi privati possono accedere direttamente allo stato  
  
Nel mondo reale esistono molti oggetti dello stesso tipo.  
Questi oggetti condividono lo stesso comportamento ma hanno stati diversi.  
In programmazione orientata agli oggetti, un **classe** è un modello per creare oggetti.  
  
Indica:  
  
- le caratteristiche comuni (attributi)  
- i comportamenti (metodi)  
- le sue relazioni con altre classi  
  
Quindi l'oggetto è la specifica istanza di una classe.  
  
Un metodo è simile a una funzione:  
  
- ha un nome  
- può avere parametri  
- può restituire un valore  
- è composto da istruzioni  
  
Ma differisce perché:  
  
- è associato a una classe o a un oggetto  
- il codice effettivamente eseguito dipende dall'oggetto che lo invoca (polimorfismo)  
  
Per rappresentare le classi si usa una struttura grafica chiamata diagramma delle classi.  
  
**Esempio**  
![Screenshot 2025-11-25 alle 15.08.58](../../../Immagini/Screenshot%202025-11-25%20alle%2015.08.58.png)  
  
## Livelli di astrazione in c  
  
**Astrazione procedurale**  
Uso delle funzioni.  
  
**Astrazione modulare**  
Suddivide il file .c e .h accorpando le funzioni.  
  
**Astrazione del dato**  
ADT in C con *typedef*  
  
**Astrazione ad oggetti**  
ADT con funzioni come campi di una struct (usando i puntatori a funzione). Costruzione e gestione del puntatore this.  
  
*Information hiding* supportata marginalmente (con lo static).  
  
## Livelli di astrazione in Java  
  
**Astrazione procedurale**  
La suddivisione del codice in metodi  
  
**Astrazione modulare**  
La suddivisione del codice in classi e package  
  
**Astrazione del dato**  
ADT rappresentato con l'uso di *class*  
  
**Astrazione ad oggetti**  
Oggetti istanze di classi che incapsulano stato e comportamento.  
  
*Information hiding* supportata nativamente con i modificatori di accesso (public, private, protected).  
  
