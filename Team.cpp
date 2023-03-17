#include <iostream>
using namespace std;
int main()
{
    int p,rez=0;
    cin >> p;
    bool petya, vasya, tonya;
    do {
        cin >> petya >> vasya >> tonya;
        if (petya && vasya || petya && tonya || vasya && tonya || petya&&vasya&&tonya) {
            rez++;
        }
        p--;
    } while (p);
    cout << rez;
    return 0;
}
