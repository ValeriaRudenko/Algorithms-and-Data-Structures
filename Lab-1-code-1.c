#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
int main() {
float a, b, x;
// functions ranges
const float r1=-10;
const float r2=-5;
const float r3=5;
const float r4=15;
const float r5=25;
puts (&quot;Input float x: &quot;);
scanf (&quot;%f&quot;,&amp;x);
if (x&gt;=r5)
{
b=2*x*x*x-3*x+2;
printf(&quot;case 2 %f&quot;,b);
}
else if (x&gt;r4)
{
puts (&quot;x is out of range&quot;);
}
else if (x&gt;r3)
{
a=x*x*x-6;
printf(&quot;case 1 %f&quot;, a);
}
else if (x&gt;r1)
{
a=x*x*x-6;
printf(&quot;case 1 %f&quot;,a);
}
else if (x&gt;r2)
{
puts(&quot;x is out of range&quot;);
}
return (0);
}