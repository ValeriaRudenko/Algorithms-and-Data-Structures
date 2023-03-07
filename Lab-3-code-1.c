#include <stdio.h>;
#include <time.h>;
#include <stdlib.h>;
#include <math.h>;
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
float a, b, mul=-1, R;
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
} //
printf(&quot;\n&quot;);
for (i=0; i &lt; n; i++)
{
if (Y[i] &gt; a || Y[i] &lt; -a)
{
Z[i] = 5 - Y[i];
}
else
{
Z[i] = 3 * b * Y[i];
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
R += mul * (sqrt(Z[i] * Z[i] + a * a) - Z[i]) * (sqrt(Z[i] * Z[i] + a * a) - Z[i]);
mul = -mul;
printf(&quot;%i step result: %.3f \n&quot;, i+1, R);
}
printf(&quot;The resulting \&quot;R\&quot; value: %.3f&quot;, R);
printf(&quot;\nPress \&quot;Enter\&quot; to close the program&quot;);
getchar();
return 0;
}