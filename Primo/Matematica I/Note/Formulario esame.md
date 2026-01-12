---
share: true
---
### Trigonometria  
#### Simmetrie  
$$  
\sin(-\alpha)=-\sin(\alpha)  
$$  
$$  
\cos(-\alpha)=\cos(\alpha)  
$$  
$$  
\sin(\pi+\alpha)=-\sin(\alpha)  
$$  
$$  
\cos(\pi+\alpha)=-\cos(\alpha)  
$$  
$$  
\sin(\pi-\alpha)=\sin(\alpha)  
$$  
$$  
\cos(\pi-\alpha)=-\cos(\alpha)  
$$  
  
#### Formule di bisezione  
$$  
\sin(\frac{\alpha}{2})=\pm\sqrt{\frac{1-\cos(\alpha)}{2}}  
$$  
$$  
\cos(\frac{\alpha}{2})=\pm\sqrt{\frac{1+\cos(\alpha)}{2}}  
$$  
#### Formule di addizione  
$$  
\sin(a\pm b)=\sin(a)\cos(b)\pm\cos(a)\sin(b)  
$$  
$$  
\cos(a\pm b)=\cos(a)\cos(b)\mp\sin(a)\sin(b)  
$$  
#### Formule di duplicazione  
$$  
\sin(2a)=2\sin(a)\cos(a)  
$$  
$$  
\cos(2a)=\cos^2(a)-\sin^2(a)=2\cos^2(a)-1=1-2\sin^2(a)  
$$  
### Relazione di equivalenza  
**Riflessiva**  
$$  
\forall\space x \in X\quad (x,x)\in R\mid R(x,x)\mid xRx  
$$  
**Simmetrica**  
$$  
\forall\space x,y\in X\text{ se }(x,y)\in R\text{ allora }(y,x)\in R  
$$  
$$  
((x,y)\in R\Rightarrow(y,x)\in R)  
$$  
**Transitiva**  
$$  
\forall\space x,y,z\text{ se }(x,y)\in R\text{ e }(y,z)\in R\quad\text{[ipotesi]}  
$$  
$$  
\text{allora }(x,z)\in R  
$$  
### Principio di induzione (I forma)  
1. capire cosa dimostrare (definire $P(n)$)  
2. dimostrare il passo base  
3. dimostrare il passo induttivo  
    1. scrivere l'ipotesi induttiva  
    2. scrivere la tesi induttiva  
    3. dimostrare la tesi usando l'ipotesi  
### Principio di induzione (II forma)  
Sia $P(n)$ una proposizione che dipende da un numero naturale $n$. Se:  
1. Esiste un numero naturale $m$ tale che $P(m)$ è vera (base dell'induzione).  
2. Per ogni $k\geq m$, se $P(k)$ è vera, allora $P(k+1)$ è vera (passo induttivo).  
Allora $P(n)$ è vera per ogni numero naturale $n\geq m$.  
### Equazioni diofantee  
$$  
ax+by=c\text{ ha soluzioni intere}\iff MCD(a,b)|c  
$$  
1. calcolare $d=MCD(a,b)$  
2. se $d\nmid c$ l'equazione non ha soluzioni intere  
3. se $d|c$ dividere tutto per $d$ e risolvere l'equazione ridotta  
4. trovare una soluzione particolare dell'equazione ridotta usando l'algoritmo di Euclide esteso  
### Numeri complessi  
$$  
z=x+iy\quad x,y\in\mathbb{R}\quad i^2=-1  
$$  
$$  
\bar{z}=x-iy  
$$  
$$  
|z|=\sqrt{x^2+y^2}  
$$  
$$  
|z|^2=z\bar{z}  
$$  
#### Operazioni con i complessi  
$$  
z_1=x_1+iy_1\quad z_2=x_2+iy_2  
$$  
$$  
z_1+z_2=(x_1+x_2)+(y_1+y_2)i  
$$  
$$  
z_1\cdot z_2=(x_1x_2-y_1y_2)+(x_1y_2+x_2y_1)i  
$$  
$$  
\frac{z_1}{z_2}=\frac{x_1x_2+y_1y_2}{x_2^2+y_2^2}+ \frac{x_2y_1-x_1y_2}{x_2^2+y_2^2}i  
$$  
#### Forma trigonometrica  
$$  
z=\rho(\cos\theta+i\sin\theta)  
$$  
$$  
\theta=\arg(z)=\begin{cases}  
\arctan\frac{y}{x}&a>0\\  
\arctan\frac{y}{x}+\pi& x<0,y\geq0\\  
\arctan\frac{y}{x}-\pi& x<0,y<0\\  
\frac{\pi}{2}& x=0,y>0\\  
-\frac{\pi}{2}& x=0,y<0  
\end{cases}  
$$  
oppure  
$$  
\theta=\begin{cases}  
\cos\theta=\frac{x}{\rho}\\  
\sin\theta=\frac{y}{\rho}  
\end{cases}  
$$  
#### Formule di Moivre  
$$  
z_1\cdot z_2=\rho_1\rho_2\left[\cos(\theta_1+\theta_2)+i\sin(\theta_1+\theta_2)\right]  
$$  
$$  
\frac{z_1}{z_2}=\frac{\rho_1}{\rho_2}\left[\cos(\theta_1-\theta_2)+i\sin(\theta_1-\theta_2)\right]  
$$  
#### Equazioni con i complessi  
$$  
z^n=r(\cos n\theta+i\sin n\theta)  
$$  
$$  
z^n=w  
$$  
$$  
z_k=r^{\frac{1}{n}}\left[\cos\left(\frac{\varphi+2k\pi}{n}\right)+i\sin\left(\frac{\varphi+2k\pi}{n}\right)\right]\quad k=0,1,...,n-1  
$$  
  
