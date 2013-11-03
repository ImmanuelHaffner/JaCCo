typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

struct tiny
{
  short c;
};

f (int n, ...)
{
  struct tiny x;
  int i;

  va_list ap;
  __builtin_va_start(ap,n);
  for (i = 0; i < n; i++)
    {
      x = __builtin_va_arg(ap,struct tiny);
      if (x.c != i + 10)
 abort();
    }
  {
    long x = __builtin_va_arg(ap,long);
    if (x != 123)
      abort();
  }
  __builtin_va_end(ap);
}

main ()
{
  struct tiny x[3];
  x[0].c = 10;
  x[1].c = 11;
  x[2].c = 12;
  f (3, x[0], x[1], x[2], (long) 123);
  exit(0);
}
