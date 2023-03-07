#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;math.h&gt;
int main()
{

int n;
double j, i;
double sum = 0;
double prod = 1;
double dil;
int operationQuantity = 0;
printf(&quot;Enter your N: &quot;);
scanf(&quot;%i&quot;, &amp;n);
for (i = 1; i &lt;= n; i++) {
for (j = 1; j &lt;= i; j++) {
sum += j*sin(j) + j;
operationQuantity += 3;
}
dil = (sum)/(i*sqrt(i));
operationQuantity += 3;
prod *= dil;
sum = 0;
operationQuantity += 1;
}
printf(&quot;Result : %.7f\n&quot;, prod);
printf(&quot;Operations performed : %i\n&quot;, operationQuantity);
return 0;
}