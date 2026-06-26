//cpp
// NONMATCHING: register allocation (div=3). Logic verified correct vs ROM; not
// byte-matchable from C at mwccarm 1.2/sp2p3 (see notes/matching-style.md).
// Counts as decompiled, not matched.
class BCA_File {};
class ModelAnim {
public:
    void SetAnim(BCA_File *file, int a, int fix12, unsigned int b);
};

extern int data_ov085_02130488;

extern "C" void func_ov085_021294f0(char *c) {
    BCA_File *file = (BCA_File *)(((int *)&data_ov085_02130488)[1]);
    ((ModelAnim *)(c + 0x108))->SetAnim(file, 0x1000, 0, 0);
}
