//cpp
extern "C" int func_ov100_02143ae0(char *c);

struct BCA_File;
struct ModelAnim {
    void SetAnim(BCA_File *, int, int, unsigned int);
};

extern int data_ov100_021486ac;

extern "C" int func_ov100_02143ae0(char *c) {
    unsigned int flags = 0;
    BCA_File *file = (BCA_File *)(((int *)&data_ov100_021486ac)[1]);
    ((ModelAnim *)(c + 0x30c))->SetAnim(file, 0, 0x1000, flags);
    return 1;
}
