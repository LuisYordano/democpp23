import std;

int main()
{
    std::cout << "\n Developers C++ 23 ->  ";
    std::vector<int> v{6, 6, 6};
    for (const auto& e : v)
    {
        std::cout << e;
    }   
    std::cout << "\n\n";     
}