#include <cstdlib>
#include <numeric>
#include <string>
#include <vector>
using std::accumulate;
using std::string;
using std::system;
using std::vector;

int main(int argc, char* argv[]) noexcept
{
    const vector<string> argList(argv + 1, argv + argc);
    const string args = accumulate(argList.begin(), argList.end(), string(""));
    string command;

    if (args.find('l') != string::npos) {
        command += " /q";
    } else {
        command += " /w";
    }

    if (args.find('a') != string::npos) {
        command += " /a";
    }

    system(command.data()); // NOLINT
}
