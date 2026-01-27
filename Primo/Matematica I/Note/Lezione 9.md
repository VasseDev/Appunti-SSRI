---
share: true
---
[Lezione 9: Slides](<Primo/Matematica I/Slides/L09 (28.10.2025).pdf>)  
  
# Teorema fondamentale dell'algebra  
  
> $\mathbb{C}$ è matematicamente chiuso, vuol dire che ogni equazione polinomiale in $\mathbb{C}$  
  
$$  
a_nz^n+a_{n-1}z^{n-1}+\dots+a_1z+a_0=0\qquad a_0,a_1,\dots,a_n\in\mathbb{C}  
$$  
  
ha esattamente $n$ radici (soluzioni) contate con molteplicità.  
  
> **NOTA**  
> $\mathbb{R}$ non è matematicamente chiuso.  
> Infatti  
  
$$  
x^2+1=0  
$$  
  
> non ha soluzioni in $\mathbb{R}$  
  
**Esercizio**  
Risolvere  
$$  
z^3=\overline{z}  
$$  
è un'equazione polinomiale? no: c'è $z$.  
Non sappiamo a priori il numero di soluzioni.  
Usiamo la *forma trigonometrica*.  
$$  
z=\rho(\cos\theta+i\sin\theta)  
$$  
$$  
z^3=\rho^3(\cos(3\theta)+i\sin(3\theta))  
$$  
$$  
\underset{\text{non è una scrittura in forma trigonometrica}}{\overline{z}=\rho(\cos\theta-i\sin\theta)=}  
$$  
$$  
\underset{\text{ora è in forma trigonometrica}}{=\rho(\cos(-\theta)+i\sin(-\theta))}  
$$  
modulo di $\overline{z}=\rho$  
argomento di $\overline{z}=-\theta$  
  
> *Ricordiamo*  
$$  
-\sin\theta=\sin(-\theta)  
$$  
> seno è dispari  
$$  
\cos\theta=\cos(-\theta)  
$$  
> coseno è pari  
  
L'equazione  
$$  
z^3=\overline{z}  
$$  
diventa  
$$  
\rho^3(\cos(3\theta)+i\sin(3\theta))=\rho(\cos(-\theta)+i\sin(-\theta))  
$$  
  
Due complessi sono uguali se hanno stesso modulo e stesso argomento a meno di $2k\pi$.  
$$  
\begin{cases}  
\rho^3=\rho\\  
3\theta=-\theta+2k\pi\quad k\in\mathbb{Z}  
\end{cases}  
\quad  
\begin{cases}  
\rho^3-\rho=0\\  
4\theta=2k\pi  
\end{cases}  
\quad  
\begin{cases}  
\rho(\rho^2-1)=0\\  
\theta=\frac{2k\pi}{4}=k\cdot\frac{\pi}{2}  
\end{cases}  
$$  
$$  
\begin{cases}  
\rho=0,1,\cancel{-1}\text{ perché }\rho\geq0\text{ sempre}\\  
\theta=0,\frac{\pi}{2},\pi,\frac{3}{2}\pi,\cancel{2\pi},\cancel{\frac{5}{2}\pi},\dots\rightarrow\text{si ripetono}  
\end{cases}  
$$  
se $p=0\rightarrow z=0$  
se $p=1\rightarrow\theta=0,\frac{\pi}{2},\theta,\frac{3}{2}\pi$  
  
$$  
\begin{align}  
&\theta=0\longrightarrow z_1=1(\cos(0)+i\sin(0))=1+i\cdot0=1\\  
&\theta=\frac{\pi}{2}\longrightarrow z_2=1\cdot(\cos(\frac{\pi}{2})+i\sin(\frac{\pi}{2}))=0+i\cdot1=i\\  
&\theta=\pi\longrightarrow z_3=1\cdot(\cos(\pi)+i\sin(\pi))=-1+i\cdot0=-1\\  
&\theta=\frac{3}{2}\pi\longrightarrow z_4=1\cdot(\cos(\frac{3}{2}\pi)+i\sin(\frac{3}{2}\pi))=0+i\cdot(-1)=-i  
\end{align}  
$$  
  
ci sono $5$ soluzioni:  
$$  
0,1,-1,i,-i  
$$  
  
---  
# Moltiplicazione per i  
  
$$  
z=\rho(\cos\theta+i\sin\theta)  
$$  
vogliamo capire modulo e argomento di $iz$  
$$  
|iz|=|i|\cdot|z|=i\cdot\rho=\rho\qquad(\text{stesso modulo di z})  
$$  
argomento di $iz$?  
$$  
iz=\rho i(\cos\theta+i\sin\theta)=\rho(i\cos\theta+i^2\sin\theta)=\rho(-\sin\theta+i\cos\theta)  
$$  
non è ancora in forma trigonometrica  
$$  
\begin{align}  
&\cos(\theta\frac{\pi}{2})=-\sin\theta\\  
&\sin(\theta+\frac{\pi}{2})=\cos\theta  
\end{align}  
$$  
$$  
=\rho(\cos(\theta+\frac{\pi}{2})+\sin(\theta+\frac{\pi}{2}))  
$$  
  
  
L'argomento di $iz$ è $\theta+\frac{\pi}{2}$.  
La moltiplicazione per $i$ è la rotazione di $90°$ in senso antiorario.  
![Screenshot 2026-01-08 alle 00.51.23](../../../Immagini/Screenshot%202026-01-08%20alle%2000.51.23.png)  
  
---  
  
*Esempio*  
Disegnare  
$$  
A=\{z\in\mathbb{C}|1<|z|<2,\frac{\pi}{6}<\theta\frac{\pi}{3}\}  
$$  
![Screenshot 2026-01-08 alle 00.53.52](../../../Immagini/Screenshot%202026-01-08%20alle%2000.53.52.png)  
e  
$$  
B=\{iz|z\in A\}  
$$  
![Screenshot 2026-01-08 alle 00.54.12](../../../Immagini/Screenshot%202026-01-08%20alle%2000.54.12.png)  
  
---  
  
*Esercizio*  
$$  
(2\overline{z}-i)^2=-3  
$$  
non è polinomiale.  
  
Usiamo la sostituzione.  
$$  
w=2\overline{z}-i  
$$  
  
L'equazione diventa  
$$  
w^2=-3  
$$  
equazione facile, non c'è bisogno di trasformare $-3$ in forma trigonometrica.  
  
$$  
w=\pm\sqrt{-3}=\pm\sqrt{3}\cdot\sqrt{-1}=\pm\sqrt{3}\cdot i  
$$  
  
Ricordiamo che $w=2\overline{z}-i$.  
Otteniamo due equazioni  
$$  
2\overline{z}-i=\sqrt{3}\cdot i\quad\quad 2\overline{z}-i=-\sqrt{3}\cdot i  
$$  
$$  
2\overline{z}=(1+\sqrt{3})i\quad\quad 2\overline{z}=(1-\sqrt{3})i  
$$  
$$  
\overline{z}=\frac{(1+\sqrt{3})}{2}i\quad\quad \overline{z}=\frac{(1-\sqrt{3})}{2}i  
$$  
$$  
z=-\frac{1+\sqrt{3}}{2}i\quad\quad z=-\frac{1-\sqrt{3}}{2}i  
$$  
*Esercizio per casa*  
$$  
iz^3=\overline{z}  
$$  
*Esercizi*  
1  
$$  
z^2+(\overline{z})^2=-2(Im(z)+1)^2  
$$  
Utilizzo la forma algebrica  
$$  
z=x+iy\quad\quad x,y\in\mathbb{R}  
$$  
$$  
z^2=(x+iy)^2=x^2+2ixy-y^2  
$$  
$$  
\overline{z}=x-iy  
$$  
$$  
(\overline{z})^2=(x-iy)^2=x^2-2ixy+(-iy)^2=x^2-2ixy-y^2  
$$  
Sostituiamo nell'equazione  
$$  
x^2+2ixy-y^2 + x^2-2ixy-y^2=-2(y+1)^2  
$$  
$$  
2x^2-2y^2=-2(y^2+2y+1)  
$$  
$$  
2x^2+4y+2=0  
$$  
$$  
4y=-2x^2-2  
$$  
$$  
y=-\frac{1}{2}x^2-\frac{1}{2}  
$$  
è l'equazione di una parabola.  
Le soluzioni sono  
$$  
z=x+iy\quad\text{con}\quad (x,y)\quad\text{soddisfacenti la parabola}  
$$  
Ci sono infinite soluzioni.  
  
```functionplot  
---  
title:   
xLabel:   
yLabel:   
bounds: [-10,10,-10,10]  
disableZoom: true  
grid: false  
---  
f(x)=-(1/2)x^2-(1/2)  
```  
  
2  
Scrivere in forma trigonometrica  
$$  
(\sqrt{3}-i)^5  
$$  
e poi risolvere  
$$  
z^5=(\sqrt{3}-i)^5  
$$  
$$  
w=\sqrt{3}-i  
$$  
lo scrivo in forma trigonometrica  
$$  
\rho=\sqrt{(\sqrt{3})^2+(-1)^2}=2  
$$  
$$  
\begin{cases*}  
\cos\theta=\frac{x}{\rho}=\frac{\sqrt{3}}{2}\\  
\sin\theta=\frac{y}{\rho}=-\frac{1}{2}  
\end{cases*}  
$$  
$\theta$ è nel 4° quadrante.  
$$  
\theta=-\frac{\pi}{6}  
$$  
$$  
\sqrt{3}-i=2(\cos(-\frac{\pi}{6})+i\sin(-\frac{\pi}{6}))  
$$  
Regola di De Meuvre  
$$  
(\sqrt{3}-i)^5=2^5(\cos(-\frac{5\pi}{6})+i\sin(-\frac{5\pi}{6}))  
$$  
Risolvere  
$$  
z^5=(\sqrt{3}-i)^5=2^5(\cos(-\frac{5\pi}{6})+i\sin(-\frac{5\pi}{6}))  
$$  
È un'equazione polinomiale e ha 5 soluzioni.  
  
Vogliamo trovare le radici quinte.  
$$  
z_k=\rho(\cos(\theta_k)+i\sin(\theta_k))\quad k=0,1,2,3,4  
$$  
$$  
\rho=\space^5\sqrt{2^5}=2  
$$  
$$  
\theta_k=\frac{-\frac{5\pi}{6}+2k\pi}{5}  
$$  
Esplicitiamo $\theta_k$:  
$$  
\theta_o=-\frac{\pi}{6}  
$$  
$$  
\theta_1=2\pi  
$$  
$$  
\theta_2=\frac{7\pi}{30}  
$$  
$$  
\theta_3=\frac{11\pi}{30}  
$$  
$$  
\theta_4=\frac{31\pi}{30}  
$$  
