---
share: true
---
# Ripasso di trigonometria (seconda parte)  
## Formule di addizione/sottrazione  
$$  
\cos(x+y)=\cos(x)\cos(y)-\sin(x)\sin(y)  
$$  
$$  
\cos(x-y)=\cos(x)\cos(y)+\sin(x)\sin(y)  
$$  
$$  
\sin(x+y)=\sin(x)\cos(y)+\cos(x)\sin(y)  
$$  
$$  
\sin(x-y)=\sin(x)\cos(y)-\cos(x)\sin(y)  
$$  
  
si dimostrano con le proprietà dei triangoli.  
### Esempio  
Calcolare $\cos(75^o)$  
$$  
75^o=30^o+45^o  
$$  
$$  
\cos(75^o)=\cos(30^o+45^o)=\cos(30^o)\cos(45^o)-\sin(30^o)\sin(45^o)=\frac{\sqrt{3}}{2}\frac{\sqrt{2}}{2}-\frac{1}{2}\frac{\sqrt{2}}{2}=\frac{\sqrt{6}-\sqrt{2}}{4}  
$$  
  
## Simmetrie  
$\sin(x)$ è una funzione dipsari  
$$  
\sin(-x)=-\sin(x)  
$$  
$\cos(x)$ è una funzione pari  
$$  
\cos(-x)=\cos(x)  
$$  
![Screenshot 2026-01-06 alle 14.50.59](../../../Immagini/Screenshot%202026-01-06%20alle%2014.50.59.png)  
**Altre simmetrie**  
$$  
\sin(\pi-x)=\sin(x)  
$$  
![Screenshot 2026-01-06 alle 14.51.19](../../../Immagini/Screenshot%202026-01-06%20alle%2014.51.19.png)  
  
$$  
\begin{align}  
&\cos(\pi-x)=-\cos(x)\\  
&\sin(\pi+x)=-\sin(x)\\  
&\cos(\pi+x)=-\cos(x)  
\end{align}  
$$  
**Esempio**  
  
$$  
\cos\left(\frac{2}{3}\pi\right)  
$$  
$$  
\frac{2}{3}\pi=120°=180°-60°=\pi-\frac{\pi}{3}  
$$  
$$  
\cos\left(\frac{2}{3}\pi\right)=\cos\left(\pi-\frac{\pi}{3}\right)=-\cos\left(\frac{\pi}{3}\right)=-\frac{1}{2}  
$$  
![Screenshot 2026-01-06 alle 15.01.02](../../../Immagini/Screenshot%202026-01-06%20alle%2015.01.02.png)  
$$  
\begin{align}  
&\sin\left(\frac{2\pi}{3}\right)=\frac{\sqrt{3}}{2}\\  
&\cos\left(\frac{4\pi}{3}\right)=\cos\left(\frac{2\pi}{3}\right)=-\frac{1}{2}\\  
&\sin\left(\frac{4\pi}{3}\right)=-\sin\left(\frac{2\pi}{3}\right)=-\frac{\sqrt{3}}{2}  
\end{align}  
$$  
  
## Formule di duplicazione e bisezione  
$$  
\begin{align}  
&\sin(2x)=2\sin(x)\cos(x)\\  
&\cos(2x)=\cos^2(x)-\sin^2(x)  
\end{align}  
$$  
$$  
\sin(\frac{x}{2})=\pm\sqrt{\frac{1-\cos(x)}{2}}\qquad\cos(\frac{x}{2})=\pm\sqrt{\frac{1+\cos(x)}{2}}  
$$  
  
**Esempio**  
  
$$  
15°=\frac{\pi}{12}  
$$  
proporzione  
$$  
15°:360°=x:2\pi  
$$  
$$  
\frac{15}{360}=\frac{x}{2\pi}  
$$  
$$  
x=2\pi\cdot\frac{15}{360}=\frac{\pi}{12}  
$$  
quindi  
$$  
\sin\left(\frac{\pi}{12}\right)=\sin\left(\frac{1}{2}\cdot\frac{\pi}{6}\right)\underset{\underset{\text{bisezione}}{\uparrow}}{=}\pm\sqrt{\frac{1-\cos\left(\frac{\pi}{6}\right)}{2}}=\sqrt{\frac{1-\frac{\sqrt3}{2}}{2}}  
$$  
  
## Triangoli rettangoli  
  
![Screenshot 2026-01-06 alle 15.20.09](../../../Immagini/Screenshot%202026-01-06%20alle%2015.20.09.png)  
  
> Un cateto è l'ipotenusa per il coseno dell'angolo compreso  
  
$$  
a=c\cdot\cos(\theta)  
$$  
  
> Un cateto è l'ipotenusa per il seno dell'angolo opposto  
  
$$  
b=c\cdot\sin(\theta)  
$$  
  
## Disequazioni trigonometriche  
  
$$  
\cos(x)>\frac{\sqrt{2}}{2}  
$$  
  
![Screenshot 2026-01-06 alle 15.29.44](../../../Immagini/Screenshot%202026-01-06%20alle%2015.29.44.png)  
  
$$  
2k\pi-\frac{\pi}{4}<x<\frac{\pi}{4}+2k\pi\qquad k\in\mathbb{Z}  
$$  
  
![Screenshot 2026-01-06 alle 15.31.05](../../../Immagini/Screenshot%202026-01-06%20alle%2015.31.05.png)  
  
### Esercizio  
  
1.Risolvere  
$$  
\tan(x)<1  
$$  
usando il grafico.  
  
![Screenshot 2026-01-06 alle 15.34.48](../../../Immagini/Screenshot%202026-01-06%20alle%2015.34.48.png)  
  
$$  
k\pi-\frac{\pi}{2}<x<\frac{\pi}{4}+k\pi\qquad k\in\mathbb{Z}  
$$  
  
2.  
$$  
\tan(x)>\sqrt{3}  
$$  
$$  
\tan\left(\frac{\pi}{3}\right)=\sqrt{3}  
$$  
$$  
\frac{\pi}{3}+k\pi<x<\frac{\pi}{2}+k\pi  
$$  
  
## Funzioni trigonometriche inverse  
  
### arcsin  
  
![Screenshot 2026-01-06 alle 15.52.52](../../../Immagini/Screenshot%202026-01-06%20alle%2015.52.52.png)  
  
$\sin(x)$ è iniettivo da $-\frac{\pi}{2}$ a $\frac{\pi}{2}$ e ha immagine $[-1,1]$.  
  
La sua funzione inversa chiamata  
$$  
\arcsin(y)  
$$  
è definita su $[-1,1]$ e ha immagine $[-\frac{\pi}{2},\frac{\pi}{2}]$.  
  
![Screenshot 2026-01-06 alle 15.56.16](../../../Immagini/Screenshot%202026-01-06%20alle%2015.56.16.png)  
  
### arccos  
  
![Screenshot 2026-01-06 alle 15.57.12](../../../Immagini/Screenshot%202026-01-06%20alle%2015.57.12.png)  
  
Il coseno è iniettivo su $[0,\pi]$ e ha immagine $[-1,1]$  
  
La funzione inversa  
$$  
\arccos(y)  
$$  
va da $[-1,1]$ a $[0,\pi]$.  
  
![Screenshot 2026-01-06 alle 16.00.09](../../../Immagini/Screenshot%202026-01-06%20alle%2016.00.09.png)  
  
$$  
\begin{cases}  
y=\cos(x)\\  
x\in[0,\pi]  
\end{cases}  
\quad\text{equivale a}\quad  
\begin{cases}  
x=\arccos(y)\\  
y\in[-1,1]  
\end{cases}  
$$  
oppure per $x\in[0,\pi]$: $\arccos(cos(x))=x$  
  
### arctan  
  
![Screenshot 2026-01-06 alle 16.02.52](../../../Immagini/Screenshot%202026-01-06%20alle%2016.02.52.png)  
  
La tangente è iniettiva su $(-\frac{\pi}{2},\frac{\pi}{2})$ e ha immagine $(-\infty,+\infty)$.  
  
Quindi la funzione inversa  
$$  
\arctan(y)  
$$  
è definita su $(-\infty,+\infty)$ e ha immagine $(-\frac{\pi}{2},\frac{\pi}{2})$.  
  
![Screenshot 2026-01-06 alle 16.07.36](../../../Immagini/Screenshot%202026-01-06%20alle%2016.07.36.png)  
  
Funzione limitata:  
$$  
-\frac{\pi}{2}<\arctan(y)<\frac{\pi}{2}  
$$  
il dominio di $\arctan$ è tutto $\mathbb{R}$.  
  
# Numeri complessi  
  
$$  
z=x+iy\qquad x,y\in\mathbb{R}\quad i^2=-1  
$$  
  
## Forma trigonometrica  
  
![Screenshot 2026-01-06 alle 16.09.54](../../../Immagini/Screenshot%202026-01-06%20alle%2016.09.54.png)  
  
$$  
\rho=|z|=\sqrt{x^2+y^2}\qquad\text{ipotenusa}  
$$  
$$  
\begin{cases}  
x=\rho\cos(\theta)\\  
y=\rho\sin(\theta)  
\end{cases}  
\quad\rightarrow\quad  
\begin{cases}  
\cos(\theta)=\frac{x}{\rho}\\  
\sin(\theta)=\frac{y}{\rho}  
\end{cases}  
\rightarrow\text{si ricava }\theta  
$$  
  
$$  
z= x+iy=\rho\cos\theta+i\rho\sin\theta=\rho\left(\cos\theta+i\sin\theta\right)  
$$  
  
$\rho$ = modulo di $z$  
$\theta$ = argomento di $z$  
  
di solito prendiamo $\theta \in[0,2\pi]$  
$\theta$ in realtà è definito a meno di multipli di $2\pi$.  
  
**Esempio**  
  
$$  
z=-2+2\sqrt{3}i  
$$  
  
forma trigonometrica?  
  
$$  
\rho=\sqrt{x^2+y^2}=\sqrt{\left(-2\right)^2+\left(2\sqrt{3}\right)^2}=4  
$$  
  
$$  
\begin{cases}  
\cos\theta=x/\rho=-\frac{2}{4}=-\frac{1}{2}\\  
\sin\theta=y/\rho=\frac{{2\sqrt{3}}}{4}=\frac{\sqrt{3}}{2}  
\end{cases}  
$$  
  
$\theta$ è nel 2° quadrante.  
  
$$  
\cos\left(\frac{2\pi}{3}\right)=-\frac{1}{2}\quad\sin  
$$  
  
$$  
z=4\left(\cos{\frac{2\pi}{3}}+i\sin\frac{2\pi}{3}\right)  
$$  
  
**Altra formula per $\theta$**  
  
$$  
\theta=  
\begin{cases}  
\arctan\left(\frac{y}{x}\right)\quad se\quad x>0\quad e \quad y \quad\text{qualsiasi}\\  
\arctan\left(\frac{y}{x}\right)+\pi \quad se\quad x<0\quad e \quad y\geq\\  
\arctan\left(\frac{y}{x}\right)-\pi\quad se\quad x<0\quad e \quad y<0\\  
\frac{\pi}{2}\quad se\quad x=0\quad e \quad y>0\\  
-\frac{\pi}{2}\quad se\quad x=0\quad e \quad y<0  
\end{cases}  
$$  
  
$$  
\theta\in(-\pi,\pi]  
$$  
  
Si usa se $\theta$ non è un angolo notevole.  
  
### Potenze  
  
$$  
z=\rho\left(\cos\theta+i\sin\theta\right)  
$$  
  
$$  
z^n=\rho^n\left(\cos\left(n\theta\right)+i\sin\left(n\theta\right)\right)\quad n\space\text{intero positivo}  
$$  
  
### Radici n-esime  
  
$$  
0\neq w=r\left(\cos\left(\varphi\right)+i\sin\left(\varphi\right)\right)\quad n\space\text{intero positivo}  
$$  
  
posso risolvere $z^n=w$?  
Sì, ci sono esattamente $n$ soluzioni, ovvero $n$ radici n-esime di $w$.  
  
Le radici sono  
  
$$  
z_k=\rho\left(\cos\left(\theta_k\right)+i\sin\left(\theta_k\right)\right)  
$$  
  
dove  
  
$$  
\theta_k=\frac{\varphi+2k\pi}{n}\quad k=0,1,2,\dots,n-1  
$$  
  
$$  
\rho=\space^n\sqrt{r}  
$$  
  
**Calcoliamo le radici terze di $w=-1$**  
  
$$  
w=1=-1+0i  
$$  
  
$$  
r=\sqrt{\left(-1\right)^2+0^2}=1  
$$  
  
$$  
\varphi=\pi\space\text{infatti}  
\begin{cases}  
\cos\varphi=\frac{x}{r}=-1\\  
\sin\varphi=\frac{y}{r}=0  
\end{cases}  
$$  
  
$$  
w=-1=\cos\pi+i\sin\pi  
$$  
  
Ora posso trovare le radici.  
  
$$  
Z_k=\space^n\sqrt{r}\left(\cos\left(\frac{\varphi+2k\pi}{n}\right)+i\sin\left(\frac{\varphi+2k\pi}{n}\right)\right)  
$$  
  
$$  
k=0,1,\dots,n-1  
$$  
  
nel nostro caso  
  
$$  
r=1  
$$  
  
$$  
\varphi=\pi  
$$  
  
$$  
n=3  
$$  
  
$$  
z_0=\cos\left(\frac{\pi}{3}\right)+i\sin\left(\frac{\pi}{3}\right)=\frac{1}{2}+i\frac{\sqrt{3}}{2}  
$$  
  
$$  
z_1=\cos\left(\pi\right)+i\sin\left(\pi\right)=-1  
$$  
  
$$  
z_2=\cos\left(\frac{\pi+4\pi}{3}\right)+i\sin\left(\frac{\pi+4\pi}{3}\right)=\cos\left(\frac{5\pi}{3}\right)+i\sin\left(\frac{5\pi}{3}\right)=\frac{1}{2}-i\frac{\sqrt{3}}{2}  
$$  
  
_Esempio_  
Radici quadrate di $-1$, ovvero $\sqrt{-1}$ .  
  
$$  
i^2=-1  
$$  
  
$$  
\left(-i\right)^2=-1  
$$  
  
$i, -i$ sono le radici quadrate di $-1$.  
  
> **Nota**  
> Le radici quadrate di $w\neq0$ sono sempre 2, una l'opposta dell'altra, quindi è sufficiente trovarne una, diciamo $z_0$, e l'altra sarà $z_1=z_0$.  
  
_Esercizio_  
Trovare le radici quadrate di $-i$.  
  
$$  
w=0-i  
$$  
  
$$  
r=\sqrt{0^2+\left(-1\right)^2}=1  
$$  
  
$$  
\varphi=\pi  
$$  
  
$$  
w=\cos\pi+i\sin\pi  
$$  
  
$$  
z_k=\sqrt{r}\left(\cos\left(\frac{\varphi+2k\pi}{2}\right)+i\sin\left(\frac{\varphi+2k\pi}{2}\right)\right)  
$$  
  
$$  
k=0,1  
$$  
  
per $k=0$  
  
$$  
z_0=\cos\left(\frac{\frac{3}{2}\pi+0}{2}\right)+i\sin\left(\frac{\frac{3}{2}\pi+0}{2}\right)=\cos\left(\frac{3\pi}{4}\right)+i\sin\left(\frac{3\pi}{4}\right)=-\frac{\sqrt{2}}{2}+i\frac{\sqrt 2}{2}  
$$  
  
per $k=1$  
  
$$  
z_1=\cos\left(\frac{\frac{3}{2}\pi+2\pi}{2}\right)+i\sin\left(\frac{\frac{3}{2}\pi+2\pi}{2}\right)=\cos\left(\frac{\frac{3\pi+4\pi}{2}}{2}\right)+i\sin\left(\frac{\frac{3\pi+4\pi}{2}}{2}\right)=\cos\left(\frac{\frac{7\pi}{2}}{2}\right)+i\sin\left(\frac{\frac{7\pi}{2}}{2}\right)=\cos\left(\frac{7\pi}{4}\right)+i\sin\left(\frac{7\pi}{4}\right)  
$$  
  
$$  
z_1=\frac{\sqrt{2}}{2}+i\frac{\sqrt{2}}{2}  
$$  
  
> **Notare**    
> che $z_1$ è l'opposto $z_0$  
  
## Equazioni con i complessi  
$$  
z^3-|z|=0  
$$  
forma algebrica  
forma trigonometrica  
  
*qui usiamo la forma trigonometrica*  
$$  
z=\rho\left(\cos\theta+i\sin\theta\right)  
$$  
$$  
|z|=\rho  
$$  
$$  
z^3=\rho^3\left(\cos\left(3\theta\right)+i\sin\left(3\theta\right)\right)  
$$  
sostituiamo in $z^3-|z|=0rightarrow z^3=|z|$  
$$  
\rho^3\left(\cos\left(3\theta\right)+i\sin\left(3\theta\right)\right)=\rho  
$$  
Due complessi sono uguali se hanno stesso modulo e stesso argomento a meno di multipli di $2\pi$.  
  
$$  
\begin{cases}  
\rho^3=\rho\\  
3\theta=0+2k\pi\quad con\quad k\in\mathbb{Z}  
\end{cases}  
$$  
$$  
\begin{cases}  
\rho^3-\rho=0\\  
\theta=\frac{2k\pi}{3}\quad\text{con}\quad k\in\mathbb{Z}  
\end{cases}  
\quad  
\begin{cases}  
\rho\left(\rho^3-1\right)=0\\  
\theta=\frac{2k\pi}{3}\quad\text{con}\quad k\in\mathbb{Z}  
\end{cases}  
\quad  
\begin{cases}  
\rho=0,1,-1\\  
\theta=\frac{2k\pi}{3}\quad\text{con}\quad k\in\mathbb{Z}  
\end{cases}  
$$  
caso $\rho=0:\quad z=0$ \left(se $|z|=0$ allora $z=0$\right)  
caso $\rho=1:\quad\theta=0,\frac{2\pi}{3},\frac{4\pi}{3}$  
	$z=_1=\cos0+i\sin0=1$  
	$z_2=\cos\left(\frac{2\pi}{3}\right)+i\sin\left(\frac{2\pi}{3}\right)=-\frac{1}{2}+i\frac{\sqrt{3}}{2}$  
	$z_3=\cos\left(\frac{4\pi}{3}\right)+i\sin\left({\frac{4\pi}{3}}\right)=-\frac{1}{2}-\frac{\sqrt{3}}{2}$  
  
**Esercizi**  
1.   
$$  
A=\{z\in\mathbb{C}||z|\geq1\space\text{e}\space\theta\in\left(\pi,\frac{3\pi}{2}\right)\}  
$$  
2.   
$$  
z^2+1+i=-\frac{i}{z^2}\quad c.e.\space z^2\neq0\Rightarrow z\neq0  
$$  
$$  
z^2(z^2+1+i)=z^2(-\frac{i}{z^2})  
$$  
$$  
z^4+(1+i)z^2+i=0  
$$  
sostituzione $z^2=w$  
$$  
w^2+(1+i)w+i=0  
$$  
la formula quadratica vale anche con i complessi  
$$  
w_{1,2}=\frac{-(1+i)\pm\sqrt{(1+i)^2-4i}}{2}=\frac{-(1+i)\pm\sqrt{(1+2i-i-4i)}}{2}=\frac{-(1+i)\pm\sqrt{-2i}}{2}  
$$  
il problema è capire cos'è una radice di $-2i$  
$$  
-2i=2\left(\cos\left(\frac{3\pi}{2}\right)+i\sin\left(\frac{3\pi}{2}\right)\right)  
$$  
$$  
z_0=\sqrt{2}\left(\cos\left(\frac{\varphi+0}{2}\right)+i\sin\left(\frac{\varphi+0}{2}\right)\right)=-1+i  
$$  
verifica:  
$$  
(-1+i)^2=1-2i-1=-2i  
$$  
quindi  
$$  
w_{1,2}=\frac{-(1+i)\pm(-1+i)}{2}<  
\begin{align}  
-1\\  
-i  
\end{align}  
$$  
ricordiamo che $w=z^2$  
otteniamo  
$$  
z^2=-1  
$$  
$$  
z^2=-i  
$$  
risolvo $z^2=-1$  
$$  
S=\pm i  
$$  
risolvo $z^2=-i$  
	dobbiamo calcolare le radici di $-i$  
	l'abbiamo fatto prima  
$$  
z=-\frac{\sqrt{2}}{2}+\frac{\sqrt{2}}{2}i  
$$  
$$  
z=\frac{\sqrt{2}}{2}-\frac{\sqrt{2}}{2}i  
$$  
Ho 4 soluzioni  
### Esercizi per casa  
