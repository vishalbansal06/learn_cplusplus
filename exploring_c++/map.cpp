#include <iostream>
#include <ranges>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> words;

    std::ranges::copy(std::ranges::istream_view<std::string>(std::cin),
        std::back_inserter(words));

//    std::ranges::copy(words, std::ostream_iterator<std::string>{std::cout});

    std::vector<int> count;
    count.resize(words.size());
    int i{0};
    for(auto word1:words)
    {
        for(auto word2: words)
        {
            if(word1 == word2)
                count[i]=count[i]+1;
        }
        i++;
    }
    i=0;
    std::cout<<'\n';
    for(auto word: words)
    {
        std::cout<<word<<":"<<count[i]<<'\n';
        i++;
    }
    return 0;
}