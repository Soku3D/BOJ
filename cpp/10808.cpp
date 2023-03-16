#include <iostream>
#include <string>

const int COUNT = 26;
int main()
{
    std::string str;
    std::cin >> str;
    
    int ac[COUNT] {0,};
    for (size_t istr = 0; istr < str.size(); istr++)
    {
        ac[str[istr] - 'a']++;
    }
    for (int i = 0; i < COUNT; i++)
    {
        std::cout << ac[i] << ' ';
    }
    return 0;
}