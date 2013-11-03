



typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

extern void abort (void);
extern void exit (int);

void bar (int c)
{
  static int d = '0';

  if (c != d++)
    abort ();
  if (c < '0' || c > '9')
    abort ();
}

void foo (int size, ...)
{
  struct
  {
    char x[size];
  } d;
  va_list ap;
  int i;

  __builtin_va_start(ap,size);
  d = __builtin_va_arg(ap,typeof (d));
  for (i = 0; i < size; i++)
    bar (d.x[i]);
  d = __builtin_va_arg(ap,typeof (d));
  for (i = 0; i < size; i++)
    bar (d.x[i]);
  __builtin_va_end(ap);
}

int main (void)
{
  int z = 5;
  struct { char a[z]; } x, y;

  x.a[0] = '0';
  x.a[1] = '1';
  x.a[2] = '2';
  x.a[3] = '3';
  x.a[4] = '4';
  y.a[0] = '5';
  y.a[1] = '6';
  y.a[2] = '7';
  y.a[3] = '8';
  y.a[4] = '9';
  foo (z, x, y);
  exit (0);
}
