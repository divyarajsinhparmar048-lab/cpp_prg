#include <iostream>

class FirstClass
{
    static int cnt;

public:
    int other_var;
    static void set_cnt(int i)
    {
        // other_var = 0;
        cnt = i;
    }
    static void print_cnt();
};
void FirstClass::print_cnt()
{
    std::cout << cnt << std::endl;
}
int FirstClass::cnt = 10;

int main()
{
    FirstClass fc;
    fc.print_cnt();
    FirstClass::set_cnt(0);
    fc.print_cnt();
    fc.set_cnt(100);
    FirstClass::print_cnt();
    return 0;
}