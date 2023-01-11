#include <cstdlib>
using std::system;

int main() noexcept
{
    system("git reset --hard HEAD~1"); // NOLINT
}
