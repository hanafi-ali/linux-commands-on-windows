#include <cstdlib>
using std::system;

int main() noexcept
{
    system("php artisan migrate:rollback --step=1"); // NOLINT
}
