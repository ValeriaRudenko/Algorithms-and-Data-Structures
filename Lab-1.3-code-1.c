#include &lt;stdio.h&gt;
#include &lt;time.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;math.h&gt;
float randrange(float min, float max)
{
float range = (max - min);
float div = RAND_MAX / range;
return min + (rand() / div);
}
int main()
{
srand(time(NULL));
int n, i, c ,d;
printf(&quot;Enter \&#39;n\&#39;:&quot;);
float m, a, b, mul=-1, R[n];
scanf(&quot;%i&quot;,&amp;n);
float Y[n], Z[n];
printf(&quot;Enter \&#39;a\&#39;:&quot;);
scanf(&quot;%f&quot;,&amp;a);
printf(&quot;Enter \&#39;b\&#39;:&quot;);
scanf(&quot;%f&quot;,&amp;b);
getchar();
for (i=0; i &lt; n; i++)
{
Y[i] = randrange(0-2*abs(a), 2*abs(a));
}
printf(&quot;The Y massive:\n&quot;);
for (i=0; i &lt; n; i++)
{
printf(&quot;%.3f, &quot;, Y[i]);
}
printf(&quot;\n&quot;);
for (i=0; i &lt; n; i++)
{
if (Y[i] &lt;=4*b )
{
Z[i] = 2*(pow(Y[i],3));
}
else
{
Z[i] = a * Y[i] - 2;
}

}
printf(&quot;The Z massive:\n&quot;);
for (i=0; i &lt; n; i++)
{
printf(&quot;%.3f, &quot;, Z[i]);
}
printf(&quot;\n&quot;);
for (i=0; i &lt; n; i++)
{
if ((i+1)%2==0){
R[i]= a * Z[i];
printf(&quot;%.3f&quot;,Z[i]);
}
}
m = R[0];
for(int i=0; i&lt;n; i++)
{
if (m&gt;R[i])
{
m=R[i];}
else
{
m = m;
}
}
printf(&quot;\nMinimal value in R[n]=%.3f&quot;,m);
printf(&quot;\nPress \&quot;Enter\&quot; to close the program&quot;);
getchar();
return 0;
}