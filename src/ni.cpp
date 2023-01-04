#include <cstdlib>
#include <string>
#include <vector>
using std::string;
using std::system;
using std::vector;

int main(int argc, char* argv[]) noexcept
{
    constexpr int minArgLimit = 2;

    if (argc < minArgLimit) {
        system("npm install"); // NOLINT
        return EXIT_SUCCESS;
    }

    const vector<string> argList(argv + 1, argv + argc);
    string command = string("npm install");

    for (const string& arg: argList) {
        command += string(" ") + arg;
    }

    system(command.data()); // NOLINT
}
