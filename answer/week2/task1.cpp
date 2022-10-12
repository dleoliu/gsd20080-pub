#include <iostream>

int main()
{
    std::cout << "東京スカイツリーの高さは何 m でしょう？\n";

    int answer;

    std::cout << "あなたの答え：";
    std::cin >> answer;

    if (answer < 634)
    {
        std::cout << "もっと高いです。\n";
    }
    else if (answer == 634)
    {
        std::cout << "正解です。\n";
    }
    else
    {
        std::cout << "もっと低いです。\n";
    }
}