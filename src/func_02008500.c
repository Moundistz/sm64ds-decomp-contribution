// NONMATCHING: register allocation (div=4). Logic verified correct vs ROM; not
// byte-matchable from C at mwccarm 1.2/sp2p3 (see notes/matching-style.md).
// Counts as decompiled, not matched.
extern short ReadUnalignedShort(unsigned char *p);

struct Actor;

int func_02008500(struct Actor *actor, const char *data) {
    int v4 = (int)ReadUnalignedShort((unsigned char *)data + 4) << 12;
    int v5 = (int)ReadUnalignedShort((unsigned char *)data + 2) << 12;
    int v0 = (int)ReadUnalignedShort((unsigned char *)data) << 12;
    *(int *)((char *)actor + 0x80) = v0;
    *(int *)((char *)actor + 0x84) = v5;
    *(int *)((char *)actor + 0x88) = v4;
    return 1;
}
