#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;math.h&gt;
int main()
{
int n, i;
double sum = 0;
double prod = 1;
int operationQuantity = 0;
printf(&quot;Enter your N: &quot;);
scanf(&quot;%i&quot;, &amp;n);
for (i = 1; i &lt;= n; i++) {
sum += (i*sin(i) + i);
prod *= (sum)/(i*sqrt(i));
operationQuantity += 7;
}
printf(&quot;Result : %.7f\n&quot;, prod);
printf(&quot;Operations performed : %i\n&quot;, operationQuantity);
return 0;
}