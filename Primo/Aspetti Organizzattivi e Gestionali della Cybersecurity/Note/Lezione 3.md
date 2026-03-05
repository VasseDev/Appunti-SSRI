---
share: true
---
  
## La nascita di Internet  
Nel 1950 nasce ARPA (Agenzia per i Progetti di Ricerca Avanzata).  
Nel 1965 nasce il packet switching.  
Nel 1967 Larry Robert presenta il progetto ARPANET.  
Nel 1971 sono collegati ad Arpanet ventitré computer.  
Nel 1972 viene mandata la prima e-mail.  
Nel 1973 la rete sbarca in Europa e viene inventato il TCP/IP.  
  
Il packet switching è una tecnica di commutazione in cui il messaggio viene diviso in parti più piccole (packet) che vengono gestite singolarmente.  
Ai pacchetti viene assegnato un header:  
- indirizzo sorgente  
- indirizzo destinazione  
- numero di pacchetti del messaggio  
- numero di sequenza  
I pacchetti viaggiano attraverso al rete, prendendo il percorso più breve.  
I pacchetti vengono poi ricomposti dal mittente e se sono arrivati tutti e in ordine viene mandata una notifica di conferma  
  
Il singolo nodo deve essere in grado di capire qual è la strada più breve.  
Questo processo di chiama routing.  
  
Il routing statico viene fatto manualmente dagli amministratori di rete. È accettabile quando il numero di dispositivi è più basso.  
Il routing dinamico è gestito automaticamente dai router. È necessario quando il numero di dispositivi è più alto.  
Algoritmi di routing dinamico:  
- **OSPF** (Open Shortest Path First): è un protocollo di routing dinamico che utilizza l'algoritmo di Dijkstra per calcolare il percorso più breve. Acquisisce informazioni dai router adiacenti.  
- **RIP**: è un protocollo di routing dinamico che utilizza l'algoritmo di Bellman-Ford per calcolare il percorso più breve. Impiega il numero di salti come metrica.  
  
Nel 1983 Arpanet viene divisa in due parti:  
- MILNET: per uso militare  
- ARPANET: per uso civile, che viene poi sostituita da Internet.  
Il TCP/IP diventa il protocollo standard per la comunicazione su Internet.  
Gli indirizzi IP sono unici su tutta la rete globale.  
  
Gli indirizzi IP sono un sistema di indirizzamento univoco.  
Gli indirizzi IP si dividono in due tipi:  
- IPv4: 32 bit, con 4 ottetti (es. 172.16.254.1)  
- IPv6: 128 bit, con 16 ottetti (es. 2001:0db8:85a3:0000:0000:8a2e:0370:7334)  
Per ovviare alla limitatezza degli indirizzi IPv4 si è inventato il sistema di mascheratura.  
Oggi si usa ancora principalmente IPv4.  
Gli indirizzi sono gestiti dall'InterNIC (Internet Network Information Center) e assegnati agli ISP (Internet Service Provider).  
  
Il protocollo TCP/IP è un insieme di protocolli che governano la comunicazione su Internet:  
- IP (Internet Protocol): si occupa dell'indirizzamento e del routing dei pacchetti.  
- TCP (Transmission Control Protocol): si occupa della gestione della connessione e del controllo del flusso dei dati.  
  
