





int main(void)
{
  int ii,array[10], y = 0, y_int = 0, array2[10];
  double x, yy, array3[10], array4[10];
  double max_value = 0.000, min_value = 0.000, add_value, mul_value = 1.00;
  int max_index = 0, min_index = 0;
  for (ii = 0; ii < 10; ii++)
    {
      array[ii] = 1+ii;
      array2[ii]= 2;
    }

  for (ii = 0; ii < 10; ii++)
    {
      if (ii%2 && ii)
 array3[ii] = (double)(1.0000/(double)ii);
      else
 array3[ii] = (double) ii + 0.10;
      array4[ii] = (double) (1.00000/ (double)(ii+1));
    }


  x = __sec_reduce_max (array3[:] * array4[:]);
  y = __sec_reduce_max_ind ( array3[:] * array4[:]);


  max_value = array3[0] * array4[0];
  for (ii = 0; ii < 10; ii++)
    if (array3[ii] * array4[ii] > max_value) {
      max_value = array3[ii] * array4[ii];
      max_index = ii;
    }
  if (x != max_value)
    return 1;

  if (y != max_index)
    return 2;

  x = __sec_reduce_min (array3[:] * array4[:]);
  y = __sec_reduce_min_ind ( array3[:] * array4[:]);
  min_value = array3[0] * array4[0];
  for (ii = 0; ii < 10; ii++)
    if (array3[ii] * array4[ii] < min_value) {
      min_value = array3[ii] * array4[ii];
      min_index = ii;
    }

  if (x != min_value)
    return 3;
  if (y != min_index)
    return 4;

  x = __sec_reduce_add (array3[:] * array4[:]);
  yy = __sec_reduce_mul ( array3[:] * array4[:]);
  add_value = 0.0000;
  mul_value = 1.0000;
  for (ii = 0; ii < 10; ii++)
    {
      add_value += (array3[ii] * array4[ii]);
      mul_value *= (array3[ii] * array4[ii]);
    }

  if (x != add_value)
    return 5;
  if (yy != mul_value)
    return 6;

  for (ii = 0; ii < 10; ii++)
    {
      if (ii%2 && ii)
 array3[ii] = (double)(1.0000/(double)ii);
      else
 array3[ii] = (double) ii + 0.00;
      array4[ii] = (double) (1.00000/ (double)(ii+1));
    }
  y_int = __sec_reduce_any_zero (array3[:] * array4[:]);
  y = __sec_reduce_all_zero ( array3[:] * array4[:]);

  if (y_int != 1)
    return 7;

  if (y != 0)
    return 8;







  return 0;
}
