



extern int a[13*13*13*13*2], b[1024], *k, l, m;

void
foo (int *q, float *p)
{
  int *i, *j, *n, *o;
  for (i = &a[0]; i < &a[13*13*13*13*2]; i += 13*13*13*2)
    for (j = &a[0]; j < &a[13*13*13*2]; j += 13*13*2)
      for (n = &a[0]; n < &a[13*13*2]; n += 13*2)
 for (o = &a[0]; o < &a[13*2]; o += 2)
   q[k - &a[0]] *= p[k - &a[0]] + 7 * (i-&a[0]) + 14 * (j-&a[0]) + 21 * (n-&a[0]) + 28 * (o-&a[0]), k += m + 1;
}

void
bar ()
{
  int *i;
  for (i = &a[0]; i < &a[1024]; i++)
    *i *= b[i - &a[0]];
}
