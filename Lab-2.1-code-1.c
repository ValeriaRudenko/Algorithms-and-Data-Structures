#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;stdbool.h&gt;

int main() {
int up;
int down;

int maxNum = 5;
int minNum = 0;
int matrix[7][7] = {
{9, 6, 8, 7, 6, 5, 5},
{9, 5, 7, 7, 6, 4, 4},
{8, 5, 6, 5, 5, 3, 4},
{8, 3, 6, 5, 5, 3, 4},
{-1, 3, 4, 2, 2, 1, 1},
{-2, 2, 2, 1, 1, 1, 1},
{-3, 1, 1, 1, 1, 1, 1},

};

printf(&quot;Matrix\n&quot;);

for (int i = 0; i &lt; 7; i++) {
for (int j = 0; j &lt; 7; j++) {
printf(&quot;%d\t&quot;, matrix[i][j]);
}
printf(&quot;\n&quot;);
}

for (int j = 0; j &lt; 7; j++) {
up = 0;

down = 7;

bool finished = false;

while (!finished) {
int mid = (int) (up + down) / 2;

if (matrix[mid][j] &gt; maxNum) up = mid;
else if (matrix[mid][j] &lt; minNum) down = mid;
else {
printf(&quot;%d&quot;, matrix[mid][j]);
printf(&quot;\ncolumn = %d element = %d\n&quot;, j, mid);
system(&quot;pause&quot;);
break;
}
if (up + 1 == 7 || down - 1 == 0) finished = true;
else if (down - up == 1) finished = true;
}
}

system(&quot;pause&quot;);
return 0;
}