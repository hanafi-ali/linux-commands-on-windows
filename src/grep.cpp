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
    }
}

int main(int argc, char* argv[]) noexcept
{
    constexpr int minArgLimit = 2;

    if (argc < minArgLimit) {
        cout << "search-text and filepath should be pass as argument\n";
        return EXIT_FAILURE;
    }

    vector<string> argList(argv + 1, argv + argc);
    formatArgs(argList);
    string command = string("findstr");

    for (const string& arg: argList) {
        command += string(" ") + arg;
    }

    system(command.data()); // NOLINT
}
