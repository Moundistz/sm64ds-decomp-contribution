//cpp
struct BMD_File;
struct SharedFilePtr;

struct Model {
    static BMD_File *LoadFile(SharedFilePtr &);
};

struct ModelBase {
    void SetFile(BMD_File *, int, int);
};

extern int data_ov044_02111680;
extern "C" void func_ov044_02111214(char *t);

extern "C" int func_ov044_021112a0(char *c) {
    BMD_File *file = Model::LoadFile(*(SharedFilePtr *)&data_ov044_02111680);
    ((ModelBase *)(c + 0xd4))->SetFile(file, 1, -1);
    func_ov044_02111214(c);
    return 1;
}
