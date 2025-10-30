---
share: true
---

![L07 (21.10.2025)](../Slides/L07%20(21.10.2025).pdf)

# Numeri complessi

Un numero complesso è un numero

$$
z=x+iy\space\space\space x,y\in\mathbb{R}
$$

$$
i = \text{unità immginaria}
$$

$$
i^2 = -1
$$

ovvero

$$
i = \sqrt{-1}
$$

$$
x=Re(z)\rightarrow \text{parte reale}
$$

$$
y=Im(z)\rightarrow\text{parte immaginaria}
$$

## Somma

$$
(1-i)+(\sqrt{2}+2i)=(1-\sqrt{2})+i(-1+2)=(1+\sqrt{2})+i
$$

## Moltiplicazione

$$
(1-i)\cdot(\sqrt{2}+2i)=\sqrt{2}+2i-\sqrt{2}i-i(21)=2+\sqrt{2}+(2-\sqrt{2})i
$$

## Potenze

$$
\begin{flalign*}

& i^2 = -1 &&\\

& i^3 = i^2 \cdot i = (-1)i = -i &&\\

& i^4 = i^3 \cdot i = (-i) \cdot i = -i^2 = -(-1) = 1 &&\\

& i^5 = i^4 \cdot i = 1 \cdot i = i &&\\

& i^6 = i^5\cdot i = i\cdot i = i^2 =-1 &&

\end{flalign*}
$$

Si ripete

## Forma trigonometrica

$$
z=x+iy
$$

modulo di $z$ è

$$
|z|=\sqrt{x^2+y^2}\geq0\rightarrow\text{reale}
$$

$$
|z|=\text{lunghezza del segmento}
$$

![Screenshot 2025-10-24 alle 14.13.38](../../../Immagini/Screenshot%202025-10-24%20alle%2014.13.38.png)

> Di solito $|z|$ si indica con $$\rho=|z|$$

$$
\theta=\text{angolo formato dal segnemnto e asse x}
$$

è detto argomento di $z$.

Come si calcola $\theta$?

$$
\begin{cases}
\cos\theta = x/\rho\\
\sin\theta = y/\rho
\end{cases}
\quad
\rightarrow\text{da qui si ricava}\space\theta
$$

> _Nota_ > $\theta$ è definito a meno di multipli di $2\pi$.
> Quando $\theta$ è in $[0,2\pi]$ o $[-\pi,\pi]$ si dice che $\theta$ è l'argomento principale.

---

Un punto nel piano è descritto tramite le proiezioni sugli assi coordinati o tramite modulo e argomento.

![Screenshot 2025-10-24 alle 14.17.08](../../../Immagini/Screenshot%202025-10-24%20alle%2014.17.08.png)

$$
z=x+iy=\rho\cos\theta+i(\rho\sin\theta)=\rho(\cos\theta+i\sin\theta)
$$

### Esempio

1

$$
z=\sqrt{3}+i
$$

$$
x = \sqrt{3}
$$

$$
y=1
$$

$$
\rho=|z|=\sqrt{(\sqrt{3})^2+1^2}=\sqrt{4}=2
$$

Troviamo ora $\theta$ l'argomento.
Dobbiamo risolverlo.

$$
\begin{cases}
\cos\theta=\frac{x}{\rho}=\frac{\sqrt{3}}{2}\\
\sin\theta=\frac{y}{\rho}=\frac{1}{2}
\end{cases}
$$

Noto che $\theta$ è nel $I^o$ quadrante.
Forma trigonometrica:

$$
\rho(\cos\theta+i\sin\theta)=2\left(\cos\left(\frac{\pi}{6}\right)+i\sin\left(\frac{\pi}{6}\right)\right)
$$

2

$$
z=i
$$

$$
x=0
$$

$$
y=1
$$

$$
\rho = |z|=\sqrt{0^2+1^2}=1
$$

$$
\begin{cases}
\cos\theta=\frac{0}{1}=0\\
\sin\theta=\frac{1}{1}=1
\end{cases}
$$

$$
\theta=\frac{\pi}{2}
$$

#### Per casa

$$
z=-2+2\sqrt{3}i
$$

$$
x=-2
$$

$$
y=2\sqrt{3}
$$
$$
\rho=\sqrt{(-2)^2+(2\sqrt{3})^2}=\sqrt{4+12}=\sqrt{16}=4
$$
$$
\begin{cases}
\cos\theta=-\frac{2}{4}=-\frac{1}{2}\\
\sin\theta=\frac{2\sqrt{3}}{4}=\frac{\sqrt{3}}{2}
\end{cases}
\quad
\rightarrow
\quad
\theta=\frac{5}{6}\pi
$$
$$
z=4(\cos\left(\frac{5}{6}\pi\right)+i\sin\left(\frac{5}{6}\pi\right))
$$


## Formule di Moivre

> La forma trigonometrica è utile per calcolare prodotti e quozienti.

$$
z_1=\rho_1(\cos\theta_1+i\sin\theta_1)
$$

$$
z_2=\rho_2(\cos\theta_2+i\sin\theta_2)
$$

calcoliamo

$$
z_1\cdot z_2=\rho_1\cdot \rho_2(\cos\theta_1+i\sin\theta_1)(\cos\theta_2+i\sin\theta_2)=
$$

$$
=\rho_1\cdot\rho_2(\cos\theta_1\cos\theta_2+i\cos\theta_1\sin\theta_2+i\sin\theta_1\cos\theta_2+i^2\sin\theta_1\sin\theta_2)=
$$

$$
=\rho_1\rho_2(cos(\theta_1+\theta_2)+i\sin(\theta_1+\theta_2))
$$

notiamo che

$$
|z_1 z_2|=\rho_1\rho_2
$$

$$
arg(z_1z_2)=\theta_1\theta_2
$$

> La formula si generalizza a $n$ numero complessi, cioè se $$z_1=\rho_1(\cos\theta_1+i\sin\theta_1)$$ > $$z_2=\rho_2(\cos\theta_2+i\sin\theta_2)$$ > $$z_n=\rho_n(\cos\theta_n+i\sin\theta_n)$$ > $$z_1\cdot z_2\cdot...\cdot z_n=\rho_1\cdot\rho_2\cdot...\cdot\rho_n(\cos(\theta_1+\theta_2+\dots+\theta_n)+i\sin(\theta_1+\theta_2+\dots+\theta_n)$$
> Da qui si ricava la formula delle potenze che è il caso $$z_1=z_2=\dots=z_n=z=\rho(\cos\theta+i\sin\theta)$$ > $$z^n=\rho^n(\cos(n\theta)+i\sin(n\theta))$$

### Esempio

$$
(1+i)^7
$$

$$
z=1+i\rightarrow\text{voglio calcolare}\space z^7
$$

Usiamo la forma trigonometrica.
Modulo e argomento:

$$
\rho=\sqrt{2}
$$

$$
\begin{cases}
\cos\theta=\frac{1}{\sqrt{2}}=\frac{\sqrt{2}}{2}\\
\sin\theta=\frac{1}{\sqrt{2}}=\frac{\sqrt{2}}{2}\\
\end{cases}
$$

$$
\theta=\frac{\pi}{4}=45^o
$$

$$
z=1+i=\sqrt{2}(\cos(\pi/4)+i\sin(\pi/4))
$$

De Moivre:

$$
z^7=(\sqrt 2)^7=(\cos(7\cdot\frac{\pi}{4})+i\sin(7\cdot\frac{\pi}{4}))=
$$

$$
=8\sqrt{2}(\cos(\frac{7\pi}{4})+i\sin(\frac{7\pi}{4}))
$$

$$
\cos(\frac{7\pi}{4})=\frac{\sqrt{2}}{2}
$$

$$
\sin(\frac{7\pi}{4})=-\frac{\sqrt{2}}{2}
$$

$$
=8\sqrt{2}(\frac{\sqrt 2}{2}+i(-\frac{\sqrt2}{2}))=8-8i
$$

### Formula di De Moivre per i quozienti

$$
z_1=\rho_1(\cos\theta_1+i\sin\theta_1)
$$

$$
z_2=\rho_2(\cos\theta_2+i\sin\theta_2)\neq 0
$$

$$
\frac{z_1}{z_2}=\frac{\rho_1(\cos\theta_1+i\sin\theta_1)}{\rho_2(\cos\theta_2+i\sin\theta_2)} \cdot \frac{\cos\theta_2-i\sin\theta_2}{\cos\theta_2-i\sin\theta_2}=
$$

$$
=\frac{\rho_1}{\rho_2}\cdot\frac{\cos\theta_1\cos\theta_2+\sin\theta_1\sin\theta_2+i(\sin\theta_1\cos\theta_2-\cos\theta_1\sin\theta_2)}{\cos^2\theta_2+\sin^2\theta_2}=
$$

$$
\cos^2\theta_2+\sin^2\theta_2=1
$$

$$
=\frac{\rho_1}{\rho_2}(\cos(\theta_1-\theta_2)+i(\sin(\theta_1-\theta_2)))
$$

$$
\rho=|\frac{z_1}{z_2}|=\frac{\rho_1}{\rho_2}
$$

$$
arg(\frac{z_1}{z_2})=\theta_1-\theta_2
$$

### Radici n-esime

> La radice $n$-esima di un numero complesso $w$ è un complesso $z$ tale che $$z^n=w$$

Sia

$$
w=r(\cos\varphi+i\sin\varphi)\neq 0
$$

$w$ ammette $n$ radici $n$-esime.

Come si calcolano?
Queste sono:

$$
z_k=r^{1/n}(\cos\theta_k+i\sin\theta_k)
$$

$$
k=0,1,\dots,n-1
$$

$$
\theta_k=\frac{\varphi+2k\pi}{n}\rightarrow\text{radici n-esime di w}
$$

#### Esempio

Calcoliamo le radici cubiche di $w=1$, cioè $^3\sqrt{1}$ intese come radici complesse.

$$
w=1
$$

in forma trigonometrica

$$
w=1=\cos0+i\sin0
$$

$$
r=1
$$

$$
\varphi=0
$$

Ho 3 radici cubuche di $w=1$.

$$
z_k=1^{1/3}(\cos\theta_k+i\sin\theta_k)
$$

$$
k=0,1,2
$$

$$
\theta_k=\frac{\varphi+2k\pi}{3}=\frac{2k\pi}{3}
$$

$$
\theta_0=0
$$

$$
\theta_1=\frac{2\pi}{3}
$$

$$
\theta_2=\frac{4\pi}{3}
$$

Le radici sono

$$
z_0=\cos0+i\sin0=1+0i=1
$$

$$
z_1=\cos(\frac{2\pi}{3})+i\sin(\frac{2\pi}{3})
$$

$$
z_2=\cos(\frac{4\pi}{3})+i\sin(\frac{4\pi}{3})
$$

#### Esercizi per casa

Calcolare le radici cubiche di $-1$.

$$
w=-1=\cos(\pi)+i\sin(\pi)
$$
$$
r=1
$$
$$
\varphi=\pi
$$
$$
k=0,1,2
$$
$$
\theta_0=\frac{\pi+2\cdot0\cdot\pi}{3}=\frac{\pi}{3}
$$
$$
\theta_1=\frac{\pi+2\cdot1\cdot\pi}{3}=\pi
$$
$$
\theta_2=\frac{\pi+2\cdot2\cdot\pi}{3}=\frac{5\pi}{3}
$$
Le radici sono
$$
z_0=\cos\left(\frac{\pi}{3}\right)+i\sin\left(\frac{\pi}{3}\right)=\frac{1}{2}+i\frac{\sqrt{3}}{2}
$$
$$
z_1=\cos\left(\pi\right)+i\sin(\pi)=-1
$$
$$
z_2=\cos\left(\frac{5\pi}{3}\right)+i\sin\left(\frac{5\pi}{3}\right)=\frac{1}{2}-i\frac{\sqrt{3}}{2}
$$
