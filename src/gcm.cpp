#include <cstdlib>
#include <iostream>
#include <span>
#include <string>
using std::cout;
using std::span;
using std::string;
using std::system;

int main(int argc, char* argv[]) noexcept
{
    constexpr int minArgLimit = 2;

    if (argc < minArgLimit) {
        cout << "message should be pass as argument\n";
        return EXIT_FAILURE;
    }

    auto args = span(argv, static_cast<size_t>(argc));
    const string command = string("git commit -m \"") + args[1] + string("\"");
    system(command.data()); // NOLINT
}
