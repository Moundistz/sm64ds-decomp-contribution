//cpp
class Actor {
public:
    static Actor *FindWithID(unsigned int id);
};

extern "C" void func_ov026_02112280(char *c) {
    unsigned int id = *(unsigned int *)(c + 0x134);
    if (id == 0) return;
    if (Actor::FindWithID(id) == 0) return;
}
