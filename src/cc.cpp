#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::system;
using std::vector;

int main(int argc, char* argv[]) noexcept
{
    constexpr int minArgLimit = 3;

    if (argc < minArgLimit) {
        cout << "package and folder should be pass as argument\n";
        return EXIT_FAILURE;
    }

    const vector<string> argList(argv + 1, argv + argc);
    string command = string("composer create-project");

    for (const string& arg: argList) {
        command += string(" ") + arg;
    }

    system(command.data()); // NOLINT
}
