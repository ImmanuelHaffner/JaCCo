
extern void foo (void) __attribute__((noreturn));

void
g (void)
{
  void (*f) (void) = foo;
  f ();
  f ();
}
