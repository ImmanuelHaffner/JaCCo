
















void * a[255];

f (m)
{
  int i;
  int sh = 0x100;
  i = m;
  do
    {
      a[sh >>= 1] = ((unsigned)i << 3) + (char*)a;
      i += 4;
    }
  while (i < 2147483647/2 + 1 + 4 * 4);
}

main ()
{
  a[0x10] = 0;
  a[0x08] = 0;
  f (2147483647/2 + 2147483647/4 + 2);
  if (a[0x10] || a[0x08])
    abort ();
  a[0x10] = 0;
  a[0x08] = 0;
  f (2147483647/2 + 1);
  if (! a[0x10] || a[0x08])
    abort ();
  exit (0);
}
