extern void abort (void);
extern void exit (int);
typedef long unsigned int uintptr_t;
int
main (void)
{
  int a = 0;
  int *p;
  uintptr_t b;
  b = (uintptr_t)(p = &(int []){0, 1, 2}[1]);
  if (*p != 1 || *(int *)b != 1)
    abort ();
  exit (0);
}
