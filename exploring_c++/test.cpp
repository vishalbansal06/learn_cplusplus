#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>
int main()
{
    /*int x;
    while (std::cin>>x)
    {
        if(x&1)
            std::cout<<"Odd ";
        else
            std::cout<<"Even ";
    }
    std::cout<< "Bits per bool:" << std::numeric_limits<bool>::digits <<'\n';
    */
///////////////////////////////////////
    /*
    std::string str{};
    int sides{3};
    std::cout<<"shape is ("<<str<<"), sides are "<<sides<<'\n';
    */
///////////////////////////////////////
    /*
    int x,y;
    std::cout<<"Enter no.\n";
    std::cin>>x;
    std::cout<<"Enter another no. \n";
    std::cin>>y;
    int z{x+y};
    std::cout<< "z is "<<z<<'\n';
    */

   int x{};
   std::vector<int> vec{};
   while(std::cin>>x)
   {
       vec.push_back(x);
   }

   std::ranges::sort(vec);

   for(auto v:vec)
   {
       std::cout<<v<<'\n';
   }
}