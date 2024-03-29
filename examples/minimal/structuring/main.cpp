#include "../../../include/mint/mint.h"

int main() {

    //Declare and intialize Mint
    Mint m;

    //Title
    m.title("Testing Operators");

    //Test unit - int
    m.minititle("int");

    m.equal(0, 0, "=");
    m.assert(0 != 1, "!=");
    m.assert(0 < 1, "<");
    m.assert(1 > 0, ">");
    m.assert(0 >= 0, ">=");
    m.assert(0 <= 0, "<=");

    //Test unit - double
    m.minititle("double");

    m.equal(0.0, 0.0, "=");
    m.assert(0.0 != 1.0, "!=");
    m.assert(0.0 < 1.0, "<");
    m.assert(1.0 > 0.0, ">");
    m.assert(0.0 >= 0.0, ">=");
    m.assert(0.0 <= 0.0, "<=");

    //Test unit - char
    m.minititle("char");

    m.equal('a', 'a', "=");
    m.assert('a' != 'b', "!=");
    m.assert('a' < 'b', "<");
    m.assert('b' > 'a', ">");
    m.assert('a' >= 'a', ">=");
    m.assert('a' <= 'a', "<=");

    //Finish tests, and return exit code
    return m.end();
}
