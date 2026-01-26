---
share: true
---
[Lezione 25: Slides](<Primo/Matematica I/Slides/L25 (18.12.2025).pdf>)  
  
# Diagonalizzabilità  
  
$$  
A=\begin{pmatrix}  
\cdot & \cdot & \cdot \\  
\cdot & \cdot & \cdot \\  
\cdot & \cdot & \cdot  
\end{pmatrix}  
\rightsquigarrow  
\begin{pmatrix}  
-1 & 0 & 0 & 0\\  
0 & 2 & 0 & 0\\  
0 & 0 & 2 & 0\\  
0 & 0 & 0 & 0  
\end{pmatrix}  
$$  
  
Calcolare autovalori, autovettori  
  
## Teorema/criterio di diagonalizzabilità  
  
> Sia $A$ una matrice quadrata di ordine $n$. Allora $A$ è diagonalizzabile se e solo se  
  
1. Somma molteplicità algebriche degli autovalori $=nj$  
2. Autovalori di $A$ tutti regolari, cioè $\underset{\text{molt. algebrica}}{m_a(a_i)}=\underset{\text{molt. geometrica}}{m_g(a_i)}$ per ogni autovalore $a_i$.  
  
Polinomio caratteristico $\rightarrow$ grado $n$  
Poly Car $=0$  
$P(a)=0\implies a$ autovalore  
  
$$  
P(x)=(x-a)Q(x)  
$$  
  
$$  
Q(x)=0\quad Q(a)=0?\quad   
\begin{align}  
&\nearrow \text{NO}:m_a(a)=1\\  
&\searrow\text{SI}:P(x)=(x-1)^2Q_2(x)  
\end{align}  
$$  
  
**Moltiplicazione algebrica:**   
  
massimo $m$ t.c. $(x-a)^m|P(x)$  
  
*Esempi*  
  
$$  
x^2+2x+1=(x+1)^2\quad m_a(-1)=2  
$$  
  
$$  
(x-1)^1(x+2)^1=0\quad m_a(1)=1,\quad m_a(-2)=1  
$$  
  
**Moltiplicazione geometrica:**  
  
Ho $a$ autovalore. Autospazio di $a$  
  
$$  
\mathrm{Aut}(a)=\{V\mid Av=av\}  
$$  
  
$$  
\dim \mathrm{Aut}(a)=m_g(a)  
$$  
  
**Fatti:**  
  
1. Autovettori: $\quad a\quad Av=av\quad v\neq0$  
2. Se $a$ è autovalore $\quad1\leq m_g(a)\leq m_a(a)$  
  
Se $m_a(a)=1$: in quel caso sicuramente  
  
$$  
1=m_g(a)=m_a(a)  
$$  
  
*Passo 1:* autovalori e conto $m_a(a)$  
Check: $\sum m_a(a_i)=n$? ($n$ ordine matrice)  
  
- sì: passo 2  
- no: non diagonalizzabile  
  
*Passo 2:* devo controllare $m_g(a)$  
Per gli autovalori di $m_a(a)=1$, fine.  
Cioè: controlla davvero $m_g(a)$ quando $m_a(a)\geq 2$.  
*In particolare:* se tutti gli autovalori hanno $m_a(a)=1$, allora $A$ è diagonalizzabile.  
  
*Esempio*  
$$  
A=\begin{pmatrix}  
0 & 1\\  
-1 & 0  
\end{pmatrix},\quad \text{polinomio caratteristico}  
$$  
  
$$  
\det(A-tId)=\det\begin{pmatrix}  
-t & 1\\  
-1 & -t  
\end{pmatrix}=t^2+1  
$$  
  
Diagonalizzabile su $\mathbb{R}$? No: $t^2+1\neq0$ sempre.  
  
Diagonalizzabile su $\mathbb{C}$? Sì: $t^2+1=(t-i)(t+i)$  
  
# Applicazioni lineari / Omomorfismi tra spazi vettoriali  
  
> **Definizione**  
> Siano $V$ e $W$ spazi vettoriali su un campo $\mathbb{K}$. Un omomorfismo/applicazione lineare tra $V$ e $W$ è una funzione  
  
$$  
f:V\to W\mid\forall\ v_1,v_2\in V,\forall\ k \in \mathbb{K}  
$$  
  
$$  
\begin{cases}  
\boxed{1}\ f(v_1+v_2)=f(v_1)+f(v_2)\\  
\boxed{2}\ f(kv_1)=kf(v_1)  
\end{cases}  
$$  
  
> equivalentemente  
  
$$  
f(\sum_{i=1}^n k_iv_i)=\sum_{i=1}^n k_if(v_i)  
$$  
  
*esempio*  
$$  
f(3v_1+7v_2-5v_3)=3f(v_1)+7f(v_2)-5f(v_3)  
$$  
  
*Esempi*  
$$  
V=W=\mathbb{R}^2,\quad \underset{\text{è lineare}}{f(x)=0}\quad \underset{0}{f(x+y)}=\underset{0}{f(x)}+\underset{0}{f(y)}  
$$  
  
$$  
\underset{0}{f(kx)}=\underset{0}{kf(x)}  
$$  
  
$$  
\underset{\text{non è lineare}}{f(x)=1}\quad \underset{1}{f(x+y)}\neq \underset{1}{f(x)}+\underset{1}{f(y)}  
$$  
  
$$  
\underset{\text{applicazione lineare}}{f(x)=x}\quad \underset{x+y}{f(x+y)}=\underset{x}{f(x)}+\underset{y}{f(y)}  
$$  
  
$$  
\underset{kx}{f(kx)}=\underset{k}{(k)}\underset{x}{f(x)}  
$$  
  
$$  
\underset{\text{lineare}}{f(x)=nx}:\text{moltiplicazioni per una costante sono lineari}  
$$  
  
$$  
\underset{\text{non lineare}}{f(x)=x^2}\quad f(x+y)=(x+y)^2\neq x^2+y^2=f(x)+f(y)  
$$  
  
non ce ne sono altre  
  
$$  
\mathbb{R}^2\to\mathbb{R}^2\quad  
\begin{align}  
&f(v)=k\cdot v\\  
&f(v_1+v_2)=f(v_1)+f(v_2)\\  
&k(v_1+v_2)=kv_1+kv_2\\  
&f(hv_1))=hf(v_1)\\  
\end{align}  
$$  
  
$$  
\begin{align*}&\mathbb{R}^2 = \{ a\begin{pmatrix} 1\\ 0 \end{pmatrix} + b\begin{pmatrix} 0\\ 1  
\end{pmatrix} \mid a,b\in\mathbb{R} \} \\&f\begin{pmatrix} a\\ b \end{pmatrix} = \begin{pmatrix} a\\  
\end{pmatrix} \\[1em]&\text{Addittività:} \\&f\left(\begin{pmatrix} a\\ b \end{pmatrix} + \begin{pmatrix}  
c\\ d \end{pmatrix}\right) = f\begin{pmatrix} a+c\\ b+d \end{pmatrix} = \begin{pmatrix} a+c\\ 0  
\end{pmatrix} \\&f\begin{pmatrix} a\\ b \end{pmatrix} + f\begin{pmatrix} c\\ d \end{pmatrix} =  
\begin{pmatrix} a\\ 0 \end{pmatrix} + \begin{pmatrix} c\\ 0 \end{pmatrix} = \begin{pmatrix} a+c\\ 0  
\end{pmatrix}\\[1em]&\text{Omogeneità:} \\&f\left(k\begin{pmatrix} a\\ b \end{pmatrix}\right) =  
f\begin{pmatrix} ka\\ kb \end{pmatrix} = \begin{pmatrix} ka\\ 0 \end{pmatrix} \\&k f\begin{pmatrix} a\\ b  
\end{pmatrix} = k \begin{pmatrix} a\\ 0 \end{pmatrix} = \begin{pmatrix} ka\\ 0 \end{pmatrix}\end{align*}  
$$  
  
> **Definizione**  
> Siano $V,W$ spazi vettoriali.  
> Sia $f:V\to W$ un'applicazione lineare.  
> Definiamo  
  
$$  
\begin{align}  
&\boxed{1}\ \mathrm{Ker}(f)=\{v\in V\mid f(v)=0\}\quad\text{nucleo di }f\\  
&\boxed{2}\ \mathrm{Im}(f)=\{w\in W\mid \exists v\in V:f(v)=w\}\quad\text{immagine di }f  
\end{align}  
$$  
  
$$  
\underset{V}{\mathrm{Ker}}\curvearrowright\underset{W}{\mathrm{Im}}  
$$  
  
> **Teorema**  
  
$$  
\begin{align}  
&\boxed{1}\ \mathrm{Ker}(f)\text{ è sottospazio vettoriale di }V\\  
&\boxed{2}\ \mathrm{Im}(f)\text{ è sottospazio vettoriale di }W  
\end{align}  
$$  
  
*Dimostrazione*  
  
$$  
\mathrm{Ker}f:v_1,v_2\in\mathrm{Ker}f  
$$  
  
$$  
\begin{align}  
&v_1+v_2\in\mathrm{Ker}f\\  
&kv_1\in\mathrm{Ker}f  
\end{align}  
\to\text{cose da far vedere}  
$$  
  
$$  
\begin{align}  
&f(v_1)=0.f(v_2)=0\implies f(v_1+v_2)=f(v_1)+f(v_2)=0+0=0\\  
&f(v_1)=0,k\in\mathbb{K}\implies f(kv_1)=kf(v_1)=k\cdot 0=0  
\end{align}  
$$  
  
**Domanda**   
**1)**  
  
Se  
  
$$  
\{v_1,\dots,v_n\}\text{ base di }V,f:V\to W  
$$  
  
lineare, è vero che  
  
$$  
\{f(v_1),\dots,f(v_n)\}\text{ base di }W?\textbf{ NO}  
$$  
  
**2)**  
  
$$  
f:V\to W, V=\langle v_1,\dots,v_n\rangle\implies W=\langle f(v_1),\dots,f(v_n)\rangle?\textbf{ NO}  
$$  
  
**3)**  
  
$$  
f:V\to W, V=\langle v_1,\dots,v_n\rangle\implies \mathrm{Im}(f)=\langle f(v_1),\dots,f(v_n)\rangle?\textbf{ SÌ}  
$$  
  
In particolare se  
  
$$  
\{v_1,\dots,v_n\}\text{ base di }V\implies \mathrm{Im}(f)=\langle f(v_1),\dots,f(v_n)\rangle  
$$  
  
## Teorema (nullità + rango)  
  
Sia $f:V\to W$ un'applicazione lineare con $\dim(V)=n<\infty$. Allora  
  
$$  
n=\dim V=\dim(\mathrm{Ker}(f))+\dim(\mathrm{Im}(f))  
$$  
  
$$  
f:\mathbb{R}^2\to W\qquad\mathbb{R}^2=\langle\begin{pmatrix}1\\ 0\end{pmatrix},\begin{pmatrix}0\\ 1\end{pmatrix}\rangle  
$$  
  
$$  
f(a,b)=ax^3-b\qquad\dim(\mathbb{R}^2)=2\qquad\dim(\mathbb{R}^n)=n  
$$  
  
$$  
n=2  
$$  
  
$$  
\mathrm{Ker}f=\{v\mid f(v)=0\}\qquad ax^3-b=0\qquad\text{come polinomio}\begin{cases}  
a=0\\ b=0  
\end{cases}  
$$  
  
$$  
f\begin{pmatrix}a\\ b\end{pmatrix}=0\iff a=0,b=0\iff \mathrm{Ker}(f)=\{0\}  
$$  
  
### Terminologia  
  
Un applicazione lineare si dice:  
  
$$  
\begin{align}  
&\boxed{1}\text{ iniettiva, quando è iniettiva come funzione}\\  
&\boxed{2}\text{ suriettiva, quando è suriettiva come funzione}\\  
&\boxed{3}\text{ isomorfismo, quando è biettiva come funzione}  
\end{align}  
$$  
  
*Esempio*  
$$  
W=\{p(x)\in\mathbb{R}[x]\mid\deg(p)\leq 3\}  
$$  
  
$$  
ax^3+bx^2+cx+d\quad\longleftrightarrow\quad\begin{pmatrix}a\\ b\\ c\\ d\end{pmatrix}  
$$  
  
$$  
f:\mathbb{R}^4\to W\quad f\begin{pmatrix}a\\ b\\ c\\ d\end{pmatrix}=ax^3+bx^2+cx+d  
$$  
  
$$  
\text{applicazioni lineari}\quad\longleftrightarrow\quad\text{matrici}  
$$  
  
## Rappresen