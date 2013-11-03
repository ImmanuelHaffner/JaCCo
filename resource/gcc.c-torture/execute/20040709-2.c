

extern void abort (void);
extern void exit (int);

unsigned int
myrnd (void)
{
  static unsigned int s = 1388815473;
  s *= 1103515245;
  s += 12345;
  return (s / 65536) % 2048;
}
struct __attribute__((packed)) A { unsigned short i : 1, l : 1, j : 3, k : 11; }; struct A sA; struct A retmeA (struct A x) { return x; } unsigned int fn1A (unsigned int x) { struct A y = sA; y.k += x; y = retmeA (y); return y.k; } unsigned int fn2A (unsigned int x) { struct A y = sA; y.k += x; y.k %= 15; return y.k; } unsigned int retitA (void) { return sA.k; } unsigned int fn3A (unsigned int x) { sA.k += x; return retitA (); } void testA (void) { int i; unsigned int mask, v, a, r; struct A x; char *p = (char *) &sA; for (i = 0; i < sizeof (sA); ++i) *p++ = myrnd (); if (__builtin_classify_type (sA.l) == 8) sA.l = 5.25; sA.k = -1; mask = sA.k; v = myrnd (); a = myrnd (); sA.k = v; x = sA; r = fn1A (a); if (x.i != sA.i || x.j != sA.j || x.k != sA.k || x.l != sA.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sA.k = v; x = sA; r = fn2A (a); if (x.i != sA.i || x.j != sA.j || x.k != sA.k || x.l != sA.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sA.k = v; x = sA; r = fn3A (a); if (x.i != sA.i || x.j != sA.j || sA.k != r || x.l != sA.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) B { unsigned short i : 4, j : 1, k : 11; unsigned int l; }; struct B sB; struct B retmeB (struct B x) { return x; } unsigned int fn1B (unsigned int x) { struct B y = sB; y.k += x; y = retmeB (y); return y.k; } unsigned int fn2B (unsigned int x) { struct B y = sB; y.k += x; y.k %= 15; return y.k; } unsigned int retitB (void) { return sB.k; } unsigned int fn3B (unsigned int x) { sB.k += x; return retitB (); } void testB (void) { int i; unsigned int mask, v, a, r; struct B x; char *p = (char *) &sB; for (i = 0; i < sizeof (sB); ++i) *p++ = myrnd (); if (__builtin_classify_type (sB.l) == 8) sB.l = 5.25; sB.k = -1; mask = sB.k; v = myrnd (); a = myrnd (); sB.k = v; x = sB; r = fn1B (a); if (x.i != sB.i || x.j != sB.j || x.k != sB.k || x.l != sB.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sB.k = v; x = sB; r = fn2B (a); if (x.i != sB.i || x.j != sB.j || x.k != sB.k || x.l != sB.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sB.k = v; x = sB; r = fn3B (a); if (x.i != sB.i || x.j != sB.j || sB.k != r || x.l != sB.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) C { unsigned int l; unsigned short i : 4, j : 1, k : 11; }; struct C sC; struct C retmeC (struct C x) { return x; } unsigned int fn1C (unsigned int x) { struct C y = sC; y.k += x; y = retmeC (y); return y.k; } unsigned int fn2C (unsigned int x) { struct C y = sC; y.k += x; y.k %= 15; return y.k; } unsigned int retitC (void) { return sC.k; } unsigned int fn3C (unsigned int x) { sC.k += x; return retitC (); } void testC (void) { int i; unsigned int mask, v, a, r; struct C x; char *p = (char *) &sC; for (i = 0; i < sizeof (sC); ++i) *p++ = myrnd (); if (__builtin_classify_type (sC.l) == 8) sC.l = 5.25; sC.k = -1; mask = sC.k; v = myrnd (); a = myrnd (); sC.k = v; x = sC; r = fn1C (a); if (x.i != sC.i || x.j != sC.j || x.k != sC.k || x.l != sC.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sC.k = v; x = sC; r = fn2C (a); if (x.i != sC.i || x.j != sC.j || x.k != sC.k || x.l != sC.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sC.k = v; x = sC; r = fn3C (a); if (x.i != sC.i || x.j != sC.j || sC.k != r || x.l != sC.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) D { unsigned long long l : 6, i : 6, j : 23, k : 29; }; struct D sD; struct D retmeD (struct D x) { return x; } unsigned int fn1D (unsigned int x) { struct D y = sD; y.k += x; y = retmeD (y); return y.k; } unsigned int fn2D (unsigned int x) { struct D y = sD; y.k += x; y.k %= 15; return y.k; } unsigned int retitD (void) { return sD.k; } unsigned int fn3D (unsigned int x) { sD.k += x; return retitD (); } void testD (void) { int i; unsigned int mask, v, a, r; struct D x; char *p = (char *) &sD; for (i = 0; i < sizeof (sD); ++i) *p++ = myrnd (); if (__builtin_classify_type (sD.l) == 8) sD.l = 5.25; sD.k = -1; mask = sD.k; v = myrnd (); a = myrnd (); sD.k = v; x = sD; r = fn1D (a); if (x.i != sD.i || x.j != sD.j || x.k != sD.k || x.l != sD.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sD.k = v; x = sD; r = fn2D (a); if (x.i != sD.i || x.j != sD.j || x.k != sD.k || x.l != sD.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sD.k = v; x = sD; r = fn3D (a); if (x.i != sD.i || x.j != sD.j || sD.k != r || x.l != sD.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) E { unsigned long long l, i : 12, j : 23, k : 29; }; struct E sE; struct E retmeE (struct E x) { return x; } unsigned int fn1E (unsigned int x) { struct E y = sE; y.k += x; y = retmeE (y); return y.k; } unsigned int fn2E (unsigned int x) { struct E y = sE; y.k += x; y.k %= 15; return y.k; } unsigned int retitE (void) { return sE.k; } unsigned int fn3E (unsigned int x) { sE.k += x; return retitE (); } void testE (void) { int i; unsigned int mask, v, a, r; struct E x; char *p = (char *) &sE; for (i = 0; i < sizeof (sE); ++i) *p++ = myrnd (); if (__builtin_classify_type (sE.l) == 8) sE.l = 5.25; sE.k = -1; mask = sE.k; v = myrnd (); a = myrnd (); sE.k = v; x = sE; r = fn1E (a); if (x.i != sE.i || x.j != sE.j || x.k != sE.k || x.l != sE.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sE.k = v; x = sE; r = fn2E (a); if (x.i != sE.i || x.j != sE.j || x.k != sE.k || x.l != sE.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sE.k = v; x = sE; r = fn3E (a); if (x.i != sE.i || x.j != sE.j || sE.k != r || x.l != sE.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) F { unsigned long long i : 12, j : 23, k : 29, l; }; struct F sF; struct F retmeF (struct F x) { return x; } unsigned int fn1F (unsigned int x) { struct F y = sF; y.k += x; y = retmeF (y); return y.k; } unsigned int fn2F (unsigned int x) { struct F y = sF; y.k += x; y.k %= 15; return y.k; } unsigned int retitF (void) { return sF.k; } unsigned int fn3F (unsigned int x) { sF.k += x; return retitF (); } void testF (void) { int i; unsigned int mask, v, a, r; struct F x; char *p = (char *) &sF; for (i = 0; i < sizeof (sF); ++i) *p++ = myrnd (); if (__builtin_classify_type (sF.l) == 8) sF.l = 5.25; sF.k = -1; mask = sF.k; v = myrnd (); a = myrnd (); sF.k = v; x = sF; r = fn1F (a); if (x.i != sF.i || x.j != sF.j || x.k != sF.k || x.l != sF.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sF.k = v; x = sF; r = fn2F (a); if (x.i != sF.i || x.j != sF.j || x.k != sF.k || x.l != sF.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sF.k = v; x = sF; r = fn3F (a); if (x.i != sF.i || x.j != sF.j || sF.k != r || x.l != sF.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) G { unsigned short i : 1, j : 1, k : 6; unsigned long long l; }; struct G sG; struct G retmeG (struct G x) { return x; } unsigned int fn1G (unsigned int x) { struct G y = sG; y.k += x; y = retmeG (y); return y.k; } unsigned int fn2G (unsigned int x) { struct G y = sG; y.k += x; y.k %= 15; return y.k; } unsigned int retitG (void) { return sG.k; } unsigned int fn3G (unsigned int x) { sG.k += x; return retitG (); } void testG (void) { int i; unsigned int mask, v, a, r; struct G x; char *p = (char *) &sG; for (i = 0; i < sizeof (sG); ++i) *p++ = myrnd (); if (__builtin_classify_type (sG.l) == 8) sG.l = 5.25; sG.k = -1; mask = sG.k; v = myrnd (); a = myrnd (); sG.k = v; x = sG; r = fn1G (a); if (x.i != sG.i || x.j != sG.j || x.k != sG.k || x.l != sG.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sG.k = v; x = sG; r = fn2G (a); if (x.i != sG.i || x.j != sG.j || x.k != sG.k || x.l != sG.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sG.k = v; x = sG; r = fn3G (a); if (x.i != sG.i || x.j != sG.j || sG.k != r || x.l != sG.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) H { unsigned short i : 6, j : 2, k : 8; unsigned long long l; }; struct H sH; struct H retmeH (struct H x) { return x; } unsigned int fn1H (unsigned int x) { struct H y = sH; y.k += x; y = retmeH (y); return y.k; } unsigned int fn2H (unsigned int x) { struct H y = sH; y.k += x; y.k %= 15; return y.k; } unsigned int retitH (void) { return sH.k; } unsigned int fn3H (unsigned int x) { sH.k += x; return retitH (); } void testH (void) { int i; unsigned int mask, v, a, r; struct H x; char *p = (char *) &sH; for (i = 0; i < sizeof (sH); ++i) *p++ = myrnd (); if (__builtin_classify_type (sH.l) == 8) sH.l = 5.25; sH.k = -1; mask = sH.k; v = myrnd (); a = myrnd (); sH.k = v; x = sH; r = fn1H (a); if (x.i != sH.i || x.j != sH.j || x.k != sH.k || x.l != sH.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sH.k = v; x = sH; r = fn2H (a); if (x.i != sH.i || x.j != sH.j || x.k != sH.k || x.l != sH.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sH.k = v; x = sH; r = fn3H (a); if (x.i != sH.i || x.j != sH.j || sH.k != r || x.l != sH.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) I { unsigned short i : 1, j : 6, k : 1; unsigned long long l; }; struct I sI; struct I retmeI (struct I x) { return x; } unsigned int fn1I (unsigned int x) { struct I y = sI; y.k += x; y = retmeI (y); return y.k; } unsigned int fn2I (unsigned int x) { struct I y = sI; y.k += x; y.k %= 15; return y.k; } unsigned int retitI (void) { return sI.k; } unsigned int fn3I (unsigned int x) { sI.k += x; return retitI (); } void testI (void) { int i; unsigned int mask, v, a, r; struct I x; char *p = (char *) &sI; for (i = 0; i < sizeof (sI); ++i) *p++ = myrnd (); if (__builtin_classify_type (sI.l) == 8) sI.l = 5.25; sI.k = -1; mask = sI.k; v = myrnd (); a = myrnd (); sI.k = v; x = sI; r = fn1I (a); if (x.i != sI.i || x.j != sI.j || x.k != sI.k || x.l != sI.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sI.k = v; x = sI; r = fn2I (a); if (x.i != sI.i || x.j != sI.j || x.k != sI.k || x.l != sI.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sI.k = v; x = sI; r = fn3I (a); if (x.i != sI.i || x.j != sI.j || sI.k != r || x.l != sI.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) J { unsigned short i : 1, j : 8, k : 7; unsigned short l; }; struct J sJ; struct J retmeJ (struct J x) { return x; } unsigned int fn1J (unsigned int x) { struct J y = sJ; y.k += x; y = retmeJ (y); return y.k; } unsigned int fn2J (unsigned int x) { struct J y = sJ; y.k += x; y.k %= 15; return y.k; } unsigned int retitJ (void) { return sJ.k; } unsigned int fn3J (unsigned int x) { sJ.k += x; return retitJ (); } void testJ (void) { int i; unsigned int mask, v, a, r; struct J x; char *p = (char *) &sJ; for (i = 0; i < sizeof (sJ); ++i) *p++ = myrnd (); if (__builtin_classify_type (sJ.l) == 8) sJ.l = 5.25; sJ.k = -1; mask = sJ.k; v = myrnd (); a = myrnd (); sJ.k = v; x = sJ; r = fn1J (a); if (x.i != sJ.i || x.j != sJ.j || x.k != sJ.k || x.l != sJ.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sJ.k = v; x = sJ; r = fn2J (a); if (x.i != sJ.i || x.j != sJ.j || x.k != sJ.k || x.l != sJ.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sJ.k = v; x = sJ; r = fn3J (a); if (x.i != sJ.i || x.j != sJ.j || sJ.k != r || x.l != sJ.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) K { unsigned int k : 6, l : 1, j : 10, i : 15; }; struct K sK; struct K retmeK (struct K x) { return x; } unsigned int fn1K (unsigned int x) { struct K y = sK; y.k += x; y = retmeK (y); return y.k; } unsigned int fn2K (unsigned int x) { struct K y = sK; y.k += x; y.k %= 15; return y.k; } unsigned int retitK (void) { return sK.k; } unsigned int fn3K (unsigned int x) { sK.k += x; return retitK (); } void testK (void) { int i; unsigned int mask, v, a, r; struct K x; char *p = (char *) &sK; for (i = 0; i < sizeof (sK); ++i) *p++ = myrnd (); if (__builtin_classify_type (sK.l) == 8) sK.l = 5.25; sK.k = -1; mask = sK.k; v = myrnd (); a = myrnd (); sK.k = v; x = sK; r = fn1K (a); if (x.i != sK.i || x.j != sK.j || x.k != sK.k || x.l != sK.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sK.k = v; x = sK; r = fn2K (a); if (x.i != sK.i || x.j != sK.j || x.k != sK.k || x.l != sK.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sK.k = v; x = sK; r = fn3K (a); if (x.i != sK.i || x.j != sK.j || sK.k != r || x.l != sK.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) L { unsigned int k : 6, j : 11, i : 15; unsigned int l; }; struct L sL; struct L retmeL (struct L x) { return x; } unsigned int fn1L (unsigned int x) { struct L y = sL; y.k += x; y = retmeL (y); return y.k; } unsigned int fn2L (unsigned int x) { struct L y = sL; y.k += x; y.k %= 15; return y.k; } unsigned int retitL (void) { return sL.k; } unsigned int fn3L (unsigned int x) { sL.k += x; return retitL (); } void testL (void) { int i; unsigned int mask, v, a, r; struct L x; char *p = (char *) &sL; for (i = 0; i < sizeof (sL); ++i) *p++ = myrnd (); if (__builtin_classify_type (sL.l) == 8) sL.l = 5.25; sL.k = -1; mask = sL.k; v = myrnd (); a = myrnd (); sL.k = v; x = sL; r = fn1L (a); if (x.i != sL.i || x.j != sL.j || x.k != sL.k || x.l != sL.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sL.k = v; x = sL; r = fn2L (a); if (x.i != sL.i || x.j != sL.j || x.k != sL.k || x.l != sL.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sL.k = v; x = sL; r = fn3L (a); if (x.i != sL.i || x.j != sL.j || sL.k != r || x.l != sL.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) M { unsigned int l; unsigned short k : 6, j : 11, i : 15; }; struct M sM; struct M retmeM (struct M x) { return x; } unsigned int fn1M (unsigned int x) { struct M y = sM; y.k += x; y = retmeM (y); return y.k; } unsigned int fn2M (unsigned int x) { struct M y = sM; y.k += x; y.k %= 15; return y.k; } unsigned int retitM (void) { return sM.k; } unsigned int fn3M (unsigned int x) { sM.k += x; return retitM (); } void testM (void) { int i; unsigned int mask, v, a, r; struct M x; char *p = (char *) &sM; for (i = 0; i < sizeof (sM); ++i) *p++ = myrnd (); if (__builtin_classify_type (sM.l) == 8) sM.l = 5.25; sM.k = -1; mask = sM.k; v = myrnd (); a = myrnd (); sM.k = v; x = sM; r = fn1M (a); if (x.i != sM.i || x.j != sM.j || x.k != sM.k || x.l != sM.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sM.k = v; x = sM; r = fn2M (a); if (x.i != sM.i || x.j != sM.j || x.k != sM.k || x.l != sM.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sM.k = v; x = sM; r = fn3M (a); if (x.i != sM.i || x.j != sM.j || sM.k != r || x.l != sM.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) N { unsigned long long l : 6, k : 6, j : 23, i : 29; }; struct N sN; struct N retmeN (struct N x) { return x; } unsigned int fn1N (unsigned int x) { struct N y = sN; y.k += x; y = retmeN (y); return y.k; } unsigned int fn2N (unsigned int x) { struct N y = sN; y.k += x; y.k %= 15; return y.k; } unsigned int retitN (void) { return sN.k; } unsigned int fn3N (unsigned int x) { sN.k += x; return retitN (); } void testN (void) { int i; unsigned int mask, v, a, r; struct N x; char *p = (char *) &sN; for (i = 0; i < sizeof (sN); ++i) *p++ = myrnd (); if (__builtin_classify_type (sN.l) == 8) sN.l = 5.25; sN.k = -1; mask = sN.k; v = myrnd (); a = myrnd (); sN.k = v; x = sN; r = fn1N (a); if (x.i != sN.i || x.j != sN.j || x.k != sN.k || x.l != sN.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sN.k = v; x = sN; r = fn2N (a); if (x.i != sN.i || x.j != sN.j || x.k != sN.k || x.l != sN.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sN.k = v; x = sN; r = fn3N (a); if (x.i != sN.i || x.j != sN.j || sN.k != r || x.l != sN.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) O { unsigned long long l, k : 12, j : 23, i : 29; }; struct O sO; struct O retmeO (struct O x) { return x; } unsigned int fn1O (unsigned int x) { struct O y = sO; y.k += x; y = retmeO (y); return y.k; } unsigned int fn2O (unsigned int x) { struct O y = sO; y.k += x; y.k %= 15; return y.k; } unsigned int retitO (void) { return sO.k; } unsigned int fn3O (unsigned int x) { sO.k += x; return retitO (); } void testO (void) { int i; unsigned int mask, v, a, r; struct O x; char *p = (char *) &sO; for (i = 0; i < sizeof (sO); ++i) *p++ = myrnd (); if (__builtin_classify_type (sO.l) == 8) sO.l = 5.25; sO.k = -1; mask = sO.k; v = myrnd (); a = myrnd (); sO.k = v; x = sO; r = fn1O (a); if (x.i != sO.i || x.j != sO.j || x.k != sO.k || x.l != sO.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sO.k = v; x = sO; r = fn2O (a); if (x.i != sO.i || x.j != sO.j || x.k != sO.k || x.l != sO.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sO.k = v; x = sO; r = fn3O (a); if (x.i != sO.i || x.j != sO.j || sO.k != r || x.l != sO.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) P { unsigned long long k : 12, j : 23, i : 29, l; }; struct P sP; struct P retmeP (struct P x) { return x; } unsigned int fn1P (unsigned int x) { struct P y = sP; y.k += x; y = retmeP (y); return y.k; } unsigned int fn2P (unsigned int x) { struct P y = sP; y.k += x; y.k %= 15; return y.k; } unsigned int retitP (void) { return sP.k; } unsigned int fn3P (unsigned int x) { sP.k += x; return retitP (); } void testP (void) { int i; unsigned int mask, v, a, r; struct P x; char *p = (char *) &sP; for (i = 0; i < sizeof (sP); ++i) *p++ = myrnd (); if (__builtin_classify_type (sP.l) == 8) sP.l = 5.25; sP.k = -1; mask = sP.k; v = myrnd (); a = myrnd (); sP.k = v; x = sP; r = fn1P (a); if (x.i != sP.i || x.j != sP.j || x.k != sP.k || x.l != sP.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sP.k = v; x = sP; r = fn2P (a); if (x.i != sP.i || x.j != sP.j || x.k != sP.k || x.l != sP.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sP.k = v; x = sP; r = fn3P (a); if (x.i != sP.i || x.j != sP.j || sP.k != r || x.l != sP.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) Q { unsigned short k : 12, j : 1, i : 3; unsigned long long l; }; struct Q sQ; struct Q retmeQ (struct Q x) { return x; } unsigned int fn1Q (unsigned int x) { struct Q y = sQ; y.k += x; y = retmeQ (y); return y.k; } unsigned int fn2Q (unsigned int x) { struct Q y = sQ; y.k += x; y.k %= 15; return y.k; } unsigned int retitQ (void) { return sQ.k; } unsigned int fn3Q (unsigned int x) { sQ.k += x; return retitQ (); } void testQ (void) { int i; unsigned int mask, v, a, r; struct Q x; char *p = (char *) &sQ; for (i = 0; i < sizeof (sQ); ++i) *p++ = myrnd (); if (__builtin_classify_type (sQ.l) == 8) sQ.l = 5.25; sQ.k = -1; mask = sQ.k; v = myrnd (); a = myrnd (); sQ.k = v; x = sQ; r = fn1Q (a); if (x.i != sQ.i || x.j != sQ.j || x.k != sQ.k || x.l != sQ.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sQ.k = v; x = sQ; r = fn2Q (a); if (x.i != sQ.i || x.j != sQ.j || x.k != sQ.k || x.l != sQ.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sQ.k = v; x = sQ; r = fn3Q (a); if (x.i != sQ.i || x.j != sQ.j || sQ.k != r || x.l != sQ.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) R { unsigned short k : 2, j : 11, i : 3; unsigned long long l; }; struct R sR; struct R retmeR (struct R x) { return x; } unsigned int fn1R (unsigned int x) { struct R y = sR; y.k += x; y = retmeR (y); return y.k; } unsigned int fn2R (unsigned int x) { struct R y = sR; y.k += x; y.k %= 15; return y.k; } unsigned int retitR (void) { return sR.k; } unsigned int fn3R (unsigned int x) { sR.k += x; return retitR (); } void testR (void) { int i; unsigned int mask, v, a, r; struct R x; char *p = (char *) &sR; for (i = 0; i < sizeof (sR); ++i) *p++ = myrnd (); if (__builtin_classify_type (sR.l) == 8) sR.l = 5.25; sR.k = -1; mask = sR.k; v = myrnd (); a = myrnd (); sR.k = v; x = sR; r = fn1R (a); if (x.i != sR.i || x.j != sR.j || x.k != sR.k || x.l != sR.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sR.k = v; x = sR; r = fn2R (a); if (x.i != sR.i || x.j != sR.j || x.k != sR.k || x.l != sR.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sR.k = v; x = sR; r = fn3R (a); if (x.i != sR.i || x.j != sR.j || sR.k != r || x.l != sR.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) S { unsigned short k : 1, j : 6, i : 9; unsigned long long l; }; struct S sS; struct S retmeS (struct S x) { return x; } unsigned int fn1S (unsigned int x) { struct S y = sS; y.k += x; y = retmeS (y); return y.k; } unsigned int fn2S (unsigned int x) { struct S y = sS; y.k += x; y.k %= 15; return y.k; } unsigned int retitS (void) { return sS.k; } unsigned int fn3S (unsigned int x) { sS.k += x; return retitS (); } void testS (void) { int i; unsigned int mask, v, a, r; struct S x; char *p = (char *) &sS; for (i = 0; i < sizeof (sS); ++i) *p++ = myrnd (); if (__builtin_classify_type (sS.l) == 8) sS.l = 5.25; sS.k = -1; mask = sS.k; v = myrnd (); a = myrnd (); sS.k = v; x = sS; r = fn1S (a); if (x.i != sS.i || x.j != sS.j || x.k != sS.k || x.l != sS.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sS.k = v; x = sS; r = fn2S (a); if (x.i != sS.i || x.j != sS.j || x.k != sS.k || x.l != sS.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sS.k = v; x = sS; r = fn3S (a); if (x.i != sS.i || x.j != sS.j || sS.k != r || x.l != sS.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) T { unsigned short k : 1, j : 8, i : 7; unsigned short l; }; struct T sT; struct T retmeT (struct T x) { return x; } unsigned int fn1T (unsigned int x) { struct T y = sT; y.k += x; y = retmeT (y); return y.k; } unsigned int fn2T (unsigned int x) { struct T y = sT; y.k += x; y.k %= 15; return y.k; } unsigned int retitT (void) { return sT.k; } unsigned int fn3T (unsigned int x) { sT.k += x; return retitT (); } void testT (void) { int i; unsigned int mask, v, a, r; struct T x; char *p = (char *) &sT; for (i = 0; i < sizeof (sT); ++i) *p++ = myrnd (); if (__builtin_classify_type (sT.l) == 8) sT.l = 5.25; sT.k = -1; mask = sT.k; v = myrnd (); a = myrnd (); sT.k = v; x = sT; r = fn1T (a); if (x.i != sT.i || x.j != sT.j || x.k != sT.k || x.l != sT.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sT.k = v; x = sT; r = fn2T (a); if (x.i != sT.i || x.j != sT.j || x.k != sT.k || x.l != sT.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sT.k = v; x = sT; r = fn3T (a); if (x.i != sT.i || x.j != sT.j || sT.k != r || x.l != sT.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) U { unsigned short j : 6, k : 1, i : 9; unsigned long long l; }; struct U sU; struct U retmeU (struct U x) { return x; } unsigned int fn1U (unsigned int x) { struct U y = sU; y.k += x; y = retmeU (y); return y.k; } unsigned int fn2U (unsigned int x) { struct U y = sU; y.k += x; y.k %= 15; return y.k; } unsigned int retitU (void) { return sU.k; } unsigned int fn3U (unsigned int x) { sU.k += x; return retitU (); } void testU (void) { int i; unsigned int mask, v, a, r; struct U x; char *p = (char *) &sU; for (i = 0; i < sizeof (sU); ++i) *p++ = myrnd (); if (__builtin_classify_type (sU.l) == 8) sU.l = 5.25; sU.k = -1; mask = sU.k; v = myrnd (); a = myrnd (); sU.k = v; x = sU; r = fn1U (a); if (x.i != sU.i || x.j != sU.j || x.k != sU.k || x.l != sU.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sU.k = v; x = sU; r = fn2U (a); if (x.i != sU.i || x.j != sU.j || x.k != sU.k || x.l != sU.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sU.k = v; x = sU; r = fn3U (a); if (x.i != sU.i || x.j != sU.j || sU.k != r || x.l != sU.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) V { unsigned short j : 8, k : 1, i : 7; unsigned short l; }; struct V sV; struct V retmeV (struct V x) { return x; } unsigned int fn1V (unsigned int x) { struct V y = sV; y.k += x; y = retmeV (y); return y.k; } unsigned int fn2V (unsigned int x) { struct V y = sV; y.k += x; y.k %= 15; return y.k; } unsigned int retitV (void) { return sV.k; } unsigned int fn3V (unsigned int x) { sV.k += x; return retitV (); } void testV (void) { int i; unsigned int mask, v, a, r; struct V x; char *p = (char *) &sV; for (i = 0; i < sizeof (sV); ++i) *p++ = myrnd (); if (__builtin_classify_type (sV.l) == 8) sV.l = 5.25; sV.k = -1; mask = sV.k; v = myrnd (); a = myrnd (); sV.k = v; x = sV; r = fn1V (a); if (x.i != sV.i || x.j != sV.j || x.k != sV.k || x.l != sV.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sV.k = v; x = sV; r = fn2V (a); if (x.i != sV.i || x.j != sV.j || x.k != sV.k || x.l != sV.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sV.k = v; x = sV; r = fn3V (a); if (x.i != sV.i || x.j != sV.j || sV.k != r || x.l != sV.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) W { long double l; unsigned int k : 12, j : 13, i : 7; }; struct W sW; struct W retmeW (struct W x) { return x; } unsigned int fn1W (unsigned int x) { struct W y = sW; y.k += x; y = retmeW (y); return y.k; } unsigned int fn2W (unsigned int x) { struct W y = sW; y.k += x; y.k %= 15; return y.k; } unsigned int retitW (void) { return sW.k; } unsigned int fn3W (unsigned int x) { sW.k += x; return retitW (); } void testW (void) { int i; unsigned int mask, v, a, r; struct W x; char *p = (char *) &sW; for (i = 0; i < sizeof (sW); ++i) *p++ = myrnd (); if (__builtin_classify_type (sW.l) == 8) sW.l = 5.25; sW.k = -1; mask = sW.k; v = myrnd (); a = myrnd (); sW.k = v; x = sW; r = fn1W (a); if (x.i != sW.i || x.j != sW.j || x.k != sW.k || x.l != sW.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sW.k = v; x = sW; r = fn2W (a); if (x.i != sW.i || x.j != sW.j || x.k != sW.k || x.l != sW.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sW.k = v; x = sW; r = fn3W (a); if (x.i != sW.i || x.j != sW.j || sW.k != r || x.l != sW.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) X { unsigned int k : 12, j : 13, i : 7; long double l; }; struct X sX; struct X retmeX (struct X x) { return x; } unsigned int fn1X (unsigned int x) { struct X y = sX; y.k += x; y = retmeX (y); return y.k; } unsigned int fn2X (unsigned int x) { struct X y = sX; y.k += x; y.k %= 15; return y.k; } unsigned int retitX (void) { return sX.k; } unsigned int fn3X (unsigned int x) { sX.k += x; return retitX (); } void testX (void) { int i; unsigned int mask, v, a, r; struct X x; char *p = (char *) &sX; for (i = 0; i < sizeof (sX); ++i) *p++ = myrnd (); if (__builtin_classify_type (sX.l) == 8) sX.l = 5.25; sX.k = -1; mask = sX.k; v = myrnd (); a = myrnd (); sX.k = v; x = sX; r = fn1X (a); if (x.i != sX.i || x.j != sX.j || x.k != sX.k || x.l != sX.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sX.k = v; x = sX; r = fn2X (a); if (x.i != sX.i || x.j != sX.j || x.k != sX.k || x.l != sX.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sX.k = v; x = sX; r = fn3X (a); if (x.i != sX.i || x.j != sX.j || sX.k != r || x.l != sX.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) Y { unsigned int k : 12, j : 11, i : 9; long double l; }; struct Y sY; struct Y retmeY (struct Y x) { return x; } unsigned int fn1Y (unsigned int x) { struct Y y = sY; y.k += x; y = retmeY (y); return y.k; } unsigned int fn2Y (unsigned int x) { struct Y y = sY; y.k += x; y.k %= 15; return y.k; } unsigned int retitY (void) { return sY.k; } unsigned int fn3Y (unsigned int x) { sY.k += x; return retitY (); } void testY (void) { int i; unsigned int mask, v, a, r; struct Y x; char *p = (char *) &sY; for (i = 0; i < sizeof (sY); ++i) *p++ = myrnd (); if (__builtin_classify_type (sY.l) == 8) sY.l = 5.25; sY.k = -1; mask = sY.k; v = myrnd (); a = myrnd (); sY.k = v; x = sY; r = fn1Y (a); if (x.i != sY.i || x.j != sY.j || x.k != sY.k || x.l != sY.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sY.k = v; x = sY; r = fn2Y (a); if (x.i != sY.i || x.j != sY.j || x.k != sY.k || x.l != sY.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sY.k = v; x = sY; r = fn3Y (a); if (x.i != sY.i || x.j != sY.j || sY.k != r || x.l != sY.l || ((v + a) & mask) != r) abort (); }
struct __attribute__((packed)) Z { long double l; unsigned int j : 13, i : 7, k : 12; }; struct Z sZ; struct Z retmeZ (struct Z x) { return x; } unsigned int fn1Z (unsigned int x) { struct Z y = sZ; y.k += x; y = retmeZ (y); return y.k; } unsigned int fn2Z (unsigned int x) { struct Z y = sZ; y.k += x; y.k %= 15; return y.k; } unsigned int retitZ (void) { return sZ.k; } unsigned int fn3Z (unsigned int x) { sZ.k += x; return retitZ (); } void testZ (void) { int i; unsigned int mask, v, a, r; struct Z x; char *p = (char *) &sZ; for (i = 0; i < sizeof (sZ); ++i) *p++ = myrnd (); if (__builtin_classify_type (sZ.l) == 8) sZ.l = 5.25; sZ.k = -1; mask = sZ.k; v = myrnd (); a = myrnd (); sZ.k = v; x = sZ; r = fn1Z (a); if (x.i != sZ.i || x.j != sZ.j || x.k != sZ.k || x.l != sZ.l || ((v + a) & mask) != r) abort (); v = myrnd (); a = myrnd (); sZ.k = v; x = sZ; r = fn2Z (a); if (x.i != sZ.i || x.j != sZ.j || x.k != sZ.k || x.l != sZ.l || ((((v + a) & mask) % 15) & mask) != r) abort (); v = myrnd (); a = myrnd (); sZ.k = v; x = sZ; r = fn3Z (a); if (x.i != sZ.i || x.j != sZ.j || sZ.k != r || x.l != sZ.l || ((v + a) & mask) != r) abort (); }

int
main (void)
{
  testA ();
  testB ();
  testC ();
  testD ();
  testE ();
  testF ();
  testG ();
  testH ();
  testI ();
  testJ ();
  testK ();
  testL ();
  testM ();
  testN ();
  testO ();
  testP ();
  testQ ();
  testR ();
  testS ();
  testT ();
  testU ();
  testV ();
  testW ();
  testX ();
  testY ();
  testZ ();
  exit (0);
}
