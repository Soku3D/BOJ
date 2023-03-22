#include <iostream>
#include <string>

const int SIZE = 10;
int ac[SIZE]{ 0, };
void fc(std::string&& mul_str)
{
    for (size_t istr = 0; istr < mul_str.size(); istr++)
    {
        ac[mul_str[istr] - '0']++;
    }
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << ac[i]<<'\n';
    }
}
int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    fc(std::to_string(A*B*C));
    return 0;
}