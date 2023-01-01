#include <iostream>
using namespace std;
class Test
{
    public:
    int a;
    int *p;
    Test (int x)
    {
        a = x;
        p = new int[a];
    }
    Test (Test & t)
    {
        a = t.a;
        p = t.p;
    }
};
int main()
{
    Test t (5);
    t.p[0] = 1;
    Test t2 (t);
    cout << "t: " << t.a << " " << t.p[0] << endl;
    cout << "t2: " << t2.a << " " << t2.p[0] << endl;
}