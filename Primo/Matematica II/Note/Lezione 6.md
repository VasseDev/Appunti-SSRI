---
share: true
---
  
2)  
$$  
\lim(\sqrt{n+1}+\sqrt{n})^{\frac{1}{\ln n}}  
$$  
$$  
(\sqrt{n+1}+\sqrt{n})^{\frac{1}{\ln n}}=e^{\ln((\sqrt{n+1}+\sqrt{n})^{\frac{1}{\ln n}})}=  
$$  
$$  
=e^{\frac{1}{\ln n}\ln(\sqrt{n+1}+\sqrt{n})}=  
$$  
$$  
=\frac{\ln(\sqrt{n}(1+\frac{\sqrt{n+1}}{\sqrt{n}}))}{\ln n}=  
$$  
$$  
=\frac{\frac{1}{2}\ln n}{\ln n}+ \frac{\ln(1+\sqrt{1+\frac{1}{n}})}{\ln n}=  
$$  
$$  
\lim_{n\to\infty}(\sqrt{n+1}+\sqrt{n})^{\frac{1}{\ln n}}=\lim_{n\to\infty}e^{\frac{1}{2}+\frac{\ln(1+\sqrt{1+\frac{1}{n}})}{\ln n}}=  
$$  
$$  
=\frac{1}{2}  
$$  
  
3)  
$$  
\{a_N\}_{n\in\mathbb{N}}  
$$  
$$  
\begin{cases}  
a_1=1\\  
a_{n+1}=1+\frac{a_n^2}{4}  
\end{cases}  
$$  
$$  
a_1=1\quad a_2=1+\frac{1}{4}\quad a_3=1+\frac{(1+\frac{1}{4})^2}{4}\quad   
$$  
*Idea:* mi aspetto $a_n$ monotona crescente  
$$  
\implies\text{il fatto che }a_n>0\text{ non serve a niente}  
$$  
*Suggerimento:* dimostro che $a_n\leq 2$ per ogni $n\in\mathbb{N}$  
  
**Per induzione:**  
$$  
a_1=1\leq2\qquad\text{vero}  
$$  
$$  
\text{se }a_n\leq2\qquad\text{ipotesi di induzione}  
$$  
$$  
\text{dimostro}\qquad a_{n+1}\leq2  
$$  
$$  
a_{n+1}=1+\frac{a_n^2}{4}  
$$  
$$  
a_n\leq2\implies a_n^2\leq4\implies\frac{a_n^2}{4}\leq1  
$$  
$$  
\implies a_{n+1}=1+\frac{a_n^2}{4}\leq2\qquad\text{per ogni }n\in\mathbb{N}  
$$  
La successione è limitata dall'alto.  
  
*Suggerimento 2:* dimostro che $a_n$ è monotona crescente.  
$$  
a_{n+1}\geq a_n\quad\forall n  
$$  
$$  
1+\frac{a_n^2}{4}\geq a_n\quad\text{se e solo se}\quad a_n^2-4a_n+4\geq0  
$$  
$$  
(a_n-2)^2\geq0\quad\forall n  
$$  
$$  
\implies\exists\ \lim_{n\to\infty}a_n=L  
$$  
per il teorema delle successioni monotone.  
  
Calcolo $L=\lim_{n\to\infty}a_n$:  
$$  
L=\lim_{n\to\infty}a_{n+1}=\lim_{n\to\infty}1+\frac{a_n^2}{4}=1+\frac{L^2}{4}  
$$  
$$  
\implies L^2-4L+4=0\quad\text{se e solo se}\quad (L-2)^2=0  
$$  
$$  
\implies L=2  
$$  
  
# Serie numeriche  
  
Se sommo infiniti numeri posso ottenere un numero finito?  
$$  
1+2+3+4+7+\cdots  
$$  
$$  
1+\frac{1}{2}+\frac{1}{3}+\frac{1}{4}+\cdots?  
$$  
$$  
a+\frac{1}{2}+\frac{1}{4}+\frac{1}{8}+\frac{1}{16}+\cdots=1  
$$  
$$  
\frac{1}{2}+\frac{1}{3}+\frac{1}{4}+\frac{1}{5}+\cdots=\infty  
$$  
  
---  
  
Consideriamo una successione $\{a_n\}$ di numeri reali.  
  
*Definisco* **somma parziale**  
$$  
s_n=a_1+a_2+\cdots +a_n  
$$  
$$  
\{s_n\}_{n\in\mathbb{N}}\text{ è a sua volta una successione}  
$$  
**Notazione**  
$$  
\boxed{s_n=\sum^{k=1}_{n}a_k}  
$$  
*Problema*  
$$  
\exists\lim_{n\to\infty}s_n\quad\text{?}  
$$  
se sì allora  
$$  
\sum_{k=1}^{\infty}a_k=\lim_{k\to\infty}s_n  
$$  
se la successione delle somme parziali $\{s_n\}$ ammette limite, diremo che la serie converge.  
$$  
\sum_{k=1}^{\infty}a_k\text{ converge se e solo se }\{s_n\}\text{ converge}  
$$  
Cioè la somma di tutti i numeri della successione $\{a_n\}$ è finita.  
  
---  
  
### Successione di Gauss  
$$  
a_n=n  
$$  
$$  
s_n=\sum_{k=1}^{n}a_k=1+2+3+\cdots+n  
$$  
$$  
=\frac{n(n+1)}{2}  
$$  
$$  
\lim_{n\to\infty}s_n=\lim_{n\to\infty}\frac{n(n+1)}{2}=\infty  
$$  
  
---  
  
**Riepilogo**  
1) Parto da una successione $\{a_n\}$ di numeri reali  
2) Costruisco $s_n=\sum_{k=1}^{n}a_k$  
3) $s_n$ è difficile da calcolare, quindi cerchiamo criteri per studiare quanto vale $\lim_{n\to\infty}s_n$ senza calcolare $s_n$.  
4) Se  
	1) $\lim_{n\to\infty}s_n=L\in\mathbb{R}$ allora $\sum_{k=1}^{\infty}a_k=L$, cioè diciamo che la serie è convergente e indichiamo $\sum_{k=1}^{\infty}a_k<\infty$.  
	2) Se $\lim_{n\to\infty}s_n=\infty\text{ o } -\infty$ allora diciamo che la serie è divergente e indichiamo $\sum_{k=1}^{\infty}a_k=\infty\text{ o } -\infty$.  
	3) Se $\lim_{n\to\infty}s_n$ non esiste, diciamo che la serie è irregolare.  
  
---  
  
*Esempio di irregolare*  
$$  
a_n=(-1)^n  
$$  
$$  
s_1=-1  
$$  
$$  
s_2=-1+1=0  
$$  
$$  
s_3=-1+1-1=-1  
$$  
$$  
s_4=-1+1-1+1=0  
$$  
$$  
\implies s_n\begin{cases}  
-1 & \text{se $n$ è dispari}\\  
0 & \text{se $n$ è pari}  
\end{cases}  
$$  
$$  
\implies\nexists\lim_{n\to\infty}s_n  
$$  
$$  
\implies\text{la serie }\sum_{k=1}^{\infty}(-1)^k\text{ è irregolare}  
$$  
  
*Esempio 2*  
$$  
a_n=\frac{1}{\sqrt{n+1}+\sqrt{n}}  
$$  
$$  
a_1=\frac{1}{\sqrt{2}+\sqrt{1}}\quad a_2=\frac{1}{\sqrt{3}+\sqrt{2}}\quad a_3=\frac{1}{\sqrt{4}+\sqrt{3}}\quad\cdots  
$$  
$$  
s_n=?  
$$  
$$  
s_1=a_1=\frac{1}{\sqrt{2}+1}  
$$  
$$  
s_n=\frac{1}{\sqrt{2}+1}+\frac{1}{\sqrt{3}+\sqrt{2}}+\cdots +\frac{1}{\sqrt{n+1}+\sqrt{n}}  
$$  
$$  
a_n=\frac{1}{\sqrt{n+1}+\sqrt{n}}\cdot\frac{\sqrt{n+1}-\sqrt{n}}{\sqrt{n+1}-\sqrt{n}}= \frac{\sqrt{n+1}-\sqrt{n}}{(n+1)-n}=\sqrt{n+1}-\sqrt{n}  
$$  
$$  
s_n=\sqrt{2}-1+\sqrt{3}-\sqrt{2}+\cdots +\sqrt{n+1}-\sqrt{n}=  
$$  
si chiama **serie telescopica**  
$$  
s_n=-1+\sqrt{n+1}  
$$  
$$  
\lim_{n\to\infty}s_n=\lim_{n\to\infty}(-1+\sqrt{n+1})=+\infty  
$$  
