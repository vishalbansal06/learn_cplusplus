#include <iostream>
#include <fstream>
#include <ranges>
#include <iterator>
#include <algorithm>
#include <cerrno>

int main()
{
    std::ifstream in{"list0102.cpp"};
    if(not in)
    {
        std::cerr<< "file.cpp"<< std::generic_category().message(errno)<<'\n';
    }
    else
    {

        std::ofstream out("scratch.txt");
        std::ranges::copy(std::ranges::istream_view<int>(in),
            std::ostream_iterator <int>{std::cout});

        if(out)
        {
            std::ranges::copy(std::ranges::istream_view<int>(in), std::ostream_iterator<int>{out});
        }
        if(not out)
            std::cerr << "error in writing file"<< std::generic_category().message(errno)<<'\n';

        out.close();
        in.close();
    }
    return 0;
}