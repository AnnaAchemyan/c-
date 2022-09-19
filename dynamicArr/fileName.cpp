#include <sstream>
#include <string>
using namespace std;

string fileName( string str, int &num) {

    std::ostringstream os;
    os << str << num << ".txt";
    std::string s = os.str();
    ++num;
    return s;

}