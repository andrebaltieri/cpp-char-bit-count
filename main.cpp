#include <iostream>
#include <bitset>

using namespace std;

int main() {
    string heart = "💜";

    for (char i: heart) {
        bitset<8> x(i);
        cout << x << endl;
    }

    return 0;
}