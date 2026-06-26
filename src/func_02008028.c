// NONMATCHING: register allocation (div=3). Logic verified correct vs ROM; not
// byte-matchable from C at mwccarm 1.2/sp2p3 (see notes/matching-style.md).
// Counts as decompiled, not matched.
typedef struct { char pad[0x90]; int field_90; } Camera;

extern void func_02009414(void);
extern struct Actor *func_0200e55c(unsigned int ownerID);
extern void Math_Function_0203b0fc(void *dest, int src, int constVal, int mask);

int func_02008028(Camera *self)
{
    int saved = self->field_90;

    func_02009414();

    struct Actor *act = func_0200e55c(0x13);
    int src = saved + *(int *)((char *)act + 0x60);

    Math_Function_0203b0fc(&saved, src, 0x11e, 0x7fffffff);

    self->field_90 = saved;
    return 1;
}
