#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::system;
using std::vector;

inline void formatArgs(vector<string>& argList) noexcept
{
    if (argList[0] == string("-i")) {
        argList[0] = "/i";
        argList[1] = string("\"") + argList[1] + string("\"");
    } else {
        argList[0] = string("\"") + argList[0] + string("\"");
    }
}

int main(int argc, char* argv[]) noexcept
{
    constexpr int minArgLimit = 3;

    if (argc < minArgLimit) {
        cout << "search-text and filepath should be pass as argument\n";
        return EXIT_FAILURE;
    }

    vector<string> argList(argv + 1, argv + argc);
    formatArgs(argList);
    string command = string("find");

    for (const string& arg: argList) {
        command += string(" ") + arg;
    }

    system(command.data()); // NOLINT
}
