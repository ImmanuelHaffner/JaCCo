


int g;
void f(void)
{
  __transaction_atomic {
    if (g == 0)
      __transaction_cancel;
  }
}
