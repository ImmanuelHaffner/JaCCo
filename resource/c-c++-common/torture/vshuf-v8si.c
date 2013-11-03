
typedef unsigned int V __attribute__((vector_size(32)));
typedef V VI;




struct S
{
  V in;
  VI mask;
  V out;
};

struct S tests[] = {
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0, 1, 2, 3, 4, 5, 6, 7 },
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x10, 0x21, 0x32, 0x43, 0x54, 0x65, 0x76, 0x87 },
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 7, 6, 5, 4, 3, 2, 1, 0 },
    { 0x81828384, 0x71727374, 0x61626364, 0x51525354, 0x41424344, 0x31323334, 0x21222324, 0x11121314 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 7, 0, 5, 3, 2, 4, 1, 6 },
    { 0x81828384, 0x11121314, 0x61626364, 0x41424344, 0x31323334, 0x51525354, 0x21222324, 0x71727374 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0, 2, 1, 3, 4, 6, 5, 7 },
    { 0x11121314, 0x31323334, 0x21222324, 0x41424344, 0x51525354, 0x71727374, 0x61626364, 0x81828384 },
  },
  {
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 3, 1, 2, 0, 7, 5, 6, 4 },
    { 0xc1c2c3c4, 0xa1a2a3a4, 0xb1b2b3b4, 0x91929394, 0x01020304, 0xe1e2e3e4, 0xf1f2f3f4, 0xd1d2d3d4 },
  },
  {
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0, 0, 0, 0 },
    { 0x91929394, 0x91929394, 0x91929394, 0x91929394, 0x91929394, 0x91929394, 0x91929394, 0x91929394 },
  },
  {
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 1, 6, 1, 6, 1, 6, 1, 6 },
    { 0xa1a2a3a4, 0xf1f2f3f4, 0xa1a2a3a4, 0xf1f2f3f4, 0xa1a2a3a4, 0xf1f2f3f4, 0xa1a2a3a4, 0xf1f2f3f4 },
  }
};

struct S2
{
  V in1, in2;
  VI mask;
  V out;
};

struct S2 tests2[] = {
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0, 1, 2, 3, 4, 5, 6, 7 },
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 8, 9, 10, 11, 12, 13, 14, 15 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0, 8, 1, 9, 2, 10, 3, 11 },
    { 0x11121314, 0x91929394, 0x21222324, 0xa1a2a3a4, 0x31323334, 0xb1b2b3b4, 0x41424344, 0xc1c2c3c4 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0, 15, 4, 11, 12, 3, 7, 8 },
    { 0x11121314, 0x01020304, 0x51525354, 0xc1c2c3c4, 0xd1d2d3d4, 0x41424344, 0x81828384, 0x91929394 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0x11121314, 0x11121314, 0x11121314, 0x11121314, 0x11121314, 0x11121314, 0x11121314, 0x11121314 },
  },
  {
    { 0x11121314, 0x21222324, 0x31323334, 0x41424344, 0x51525354, 0x61626364, 0x71727374, 0x81828384 },
    { 0x91929394, 0xa1a2a3a4, 0xb1b2b3b4, 0xc1c2c3c4, 0xd1d2d3d4, 0xe1e2e3e4, 0xf1f2f3f4, 0x01020304 },
    { 0x1e, 0x2e, 0x3e, 0x4e, 0x5e, 0x6e, 0x7e, 0x8e },
    { 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4, 0xf1f2f3f4 },
  },
};


extern void abort(void);

int main()
{

  int i;

  for (i = 0; i < sizeof(tests)/sizeof(tests[0]); ++i)
    {
      V r = __builtin_shuffle(tests[i].in, tests[i].mask);
      if (__builtin_memcmp(&r, &tests[i].out, sizeof(V)) != 0)
 abort();
    }

  for (i = 0; i < sizeof(tests2)/sizeof(tests2[0]); ++i)
    {
      V r = __builtin_shuffle(tests2[i].in1, tests2[i].in2, tests2[i].mask);
      if (__builtin_memcmp(&r, &tests2[i].out, sizeof(V)) != 0)
 abort();
    }


  return 0;
}
