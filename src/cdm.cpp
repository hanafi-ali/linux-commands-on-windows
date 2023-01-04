#include <cstdlib>
using std::system;

int main() noexcept
{
    system("composer dump-autoload -o"); // NOLINT
}
