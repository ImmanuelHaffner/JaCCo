



extern void abort (void);

signed short s;
signed int i;
signed long l;
signed char v = -1;

void __attribute__((noinline,noclone))
bar (int t)
{
  if (t == 2 && s != -1)
    abort ();
  if (t == 1 && i != -1)
    abort ();
  if (t == 0 && l != -1)
    abort ();
}

void __attribute__((noinline,noclone))
foo (signed char *a, int t)
{
  signed char r = v;

  if (t == 2)
    s = (signed short) r;
  else if (t == 1)
    i = (signed int) r;
  else if (t == 0)
    l = (signed long) r;
  bar (t);
}

int main(void)
{
  foo (&v, 0);
  foo (&v, 1);
  foo (&v, 2);
  return 0;
}
