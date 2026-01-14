---
share: true
---
[Lezione 17: Slides](<Primo/Matematica I/Slides/L17 (19.11.2025).pdf>)  
  
# Gruppi  
## Definizione  
  
Un gruppo  
  
$$  
(G, \ast)  
$$  
  
è un insieme G dotato di un'operazione binaria:  
  
$$  
\ast: G\times G \to G  
$$  
$$  
(a,b)\mapsto a\ast b  
$$  
  
che verifica le seguenti proprietà:  
  
1. $\ast$ è associativa  
$$  
(a\ast b)\ast c=a\ast(b\ast c)\quad\forall a,b,c\in G  
$$  
2. Esiste un elemento neutro $e\in G$ rispetto all'operazione $\ast$ tale che  
$$  
\forall\space a\in G:\space  
\begin{cases}  
e\ast a=a\\  
a\ast e=a  
\end{cases}  
$$  
3. Ogni elemento di G ammette un inverso rispetto all'operazione $\ast$, cioè  
$$  
\forall\space a\in G\quad\exists\space a^{-1}\in G:\space  
\begin{cases}  
a\ast a^{-1}=e\\  
a^{-1}\ast a=e  
\end{cases}  
$$  
4. Se inoltre vale  
$$  
\forall\space a,b\in G:\space a\ast b=b\ast a  
$$  
si dice che il gruppo è abeliano (o commutativo).  
  
**Esempio**  
$$  
(\mathbb{R}, +)  
$$  
elemento neutro: $0$  
$$  
a+0=a  
$$  
$$  
0+a=a  
$$  
elemento inverso: $-a$  
$$  
a+(-a)=0  
$$  
abeliano perché  
$$  
a+b=b+a\quad\forall\space a,b\in\mathbb{R}  
$$  
  
---  
$$  
(\mathbb{R}, \cdot)  
$$  
non è un gruppo, $0$ non è invertibile.  
  
---  
$$  
(\mathbb{R}\setminus\{0\}, \cdot)  
$$  
elemento neutro: $1$  
$$  
a\cdot 1=a\qquad\text{e}\qquad 1\cdot a=a  
$$  
elemento inverso: $\frac{1}{a}$  
$$  
a\cdot \frac{1}{a}=1  
$$  
$$  
\frac{1}{a}\cdot a=1  
$$  
abeliano.  
  
---  
$$  
(\mathbb{Z}_n,+)  
$$  
gruppo abeliano.  
neutro: $[0]_n$  
inverso: $[-a]_n$  
  
## Proposizione  
  
1. l'elemento neutro è unico  
2. l'inverso di ogni elemento è unico  
  
