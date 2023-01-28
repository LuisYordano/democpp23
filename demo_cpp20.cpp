#include<iostream>
#include<vector>

int main()
{
    std::cout << "\n Developers C++ 20 ->  ";
    std::vector<int> v{5, 5, 5};
    for (const auto& e : v)
    {
        std::cout << e;
    }   
    std::cout << "\n\n";     
}