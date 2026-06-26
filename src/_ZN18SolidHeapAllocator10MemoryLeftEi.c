// NONMATCHING: register allocation (div=7). Logic verified correct vs ROM; not
// byte-matchable from C at mwccarm 1.2/sp2p3 (see notes/matching-style.md).
// Counts as decompiled, not matched.

typedef unsigned int u32;
extern int _ZN4cstd3absEi(int x);
int _ZN18SolidHeapAllocator10MemoryLeftEi(void *c, int align)
{
  u32 a = (u32) _ZN4cstd3absEi(align);
  u32 mask = a - 1;
  int *fb = (int *) (((char *) c) + 0x24);
  u32 aligned = (mask + ((u32) ((int *) (((char *) c) + 0x24))[0])) & (~mask);
  u32 end = (u32) fb[1];
  if (aligned > end)
  {
    return 0;
  }
  return end - aligned;
}
