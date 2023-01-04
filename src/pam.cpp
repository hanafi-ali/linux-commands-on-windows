#include <cstdlib>
using std::system;

int main() noexcept
{
    system("php artisan migrate --seed"); // NOLINT
}
