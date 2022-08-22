#include <iostream>
int factorail()
{
    int k = 0;
    std::cin >> k;
    if (k == 0)
        {
            return 1;
        }
    factorail();
            std::cout << k << " ";
   // std::cout << k << " ";
    return 0;
    }

int main()
{
    factorail();
    return 0;
}
