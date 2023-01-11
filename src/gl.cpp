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
        system("git log --oneline -1"); // NOLINT
        return EXIT_SUCCESS;
    }

    const vector<string> argList(argv + 1, argv + argc);
    string command = string("git log --oneline");

    for (const string& arg: argList) {
        command += string(" ") + arg;
    }

    system(command.data()); // NOLINT
}
