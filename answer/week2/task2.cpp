#include <iostream>
#include <string>

int HexToDecimal(char c)
{
    if (('0' <= c) && (c <= '9'))
    {
        return (c - '0');
    }
    else if (('a' <= c) && (c <= 'f'))
    {
        return (10 + (c - 'a'));
    }
    else
    {
        return (10 + (c - 'A'));
    }
}

int main()
{
    std::string s;

    std::cin >> s;

    for (size_t i = 0; i < s.length(); ++i)
    {
        const char c = s[i];

        if (c == '%')
        {
            const int hex0 = HexToDecimal(s[i + 1]);
            
            const int hex1 = HexToDecimal(s[i + 2]);

            std::cout << static_cast<char>(hex0 * 16 + hex1);

            i += 2;
        }
        else
        {
            std::cout << c;
        }
    }

    std::cout << '\n';
}