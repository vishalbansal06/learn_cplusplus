#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include <cassert>

int main()
{
    /*
    std::vector<int> vec1{10,20,30};
    std::vector<int> vec2{};
    std::ostream_iterator<int> ositer{std::cout, ","};
    vec2.resize(vec1.size());
    //std::ranges::copy(vec1, vec2.begin());
    //assert(vec1==vec2);
    //std::cout <<"Did program reach here.\n";
    std::ranges::copy(vec1, ositer);
    */
    /////////////////////////////////////////////////////////
    //Use ranges to take input from cin and store it in vector
    /*
    std::vector<int> vec3;
    std::ranges::unique_copy(std::ranges::istream_view<int>(std::cin), std::back_inserter(vec3));
    std::sort(vec3);
    std::ranges::unique_copy(vec3, std::ostream_iterator<int> {std::cout, ","});
    */
    ///////////////////////////////////////////////////////////
    int x{42};
    std::cout << "x   = " << x   << "\n";
    std::cout << "++x = " << ++x << "\n";
    std::cout << "x   = " << x   << "\n";
    std::cout << "x++ = " << x++ << "\n";
    std::cout << "x   = " << x   << "\n";
    //////////////////////////////////////////////////////////
    //reads integers into a vector, then reverses it and prints the results.
    /*
    std::vector<int> vec4{};
    std::ranges::copy(std::ranges::istream_view<int>(std::cin), back_inserter(vec4));
    auto left{vec4.begin()};
    auto right{vec4.end()};
    right--;
    while(left<right)
    {     
        std::iter_swap(left, right);
        ++left;
        --right;
    }
    std::ranges::copy(vec4, std::ostream_iterator<int>{std::cout, ","});    
    */
   //////////////////////////////////////////////////////////////
   /*
   bool y;
   std::cin>>y;
   std::cout<<"y is "<<y<<'\n';
   std::cout<<bool{true}<<std::boolalpha<<bool{true};
      if (true)        std::cout << "\n\n\ntrue\n";
    if (false)       std::cout << "false\n";
    if (42)          std::cout << "42\n";
    if (0)           std::cout << "0\n";
    if (42.4242)     std::cout << "42.4242\n";
   if (0.0)         std::cout << "0.0\n";
   if (-0.0)        std::cout << "-0.0\n";
   if (-1)          std::cout << "-1\n";
   if ('\0')        std::cout << "'\\0'\n";
   if ('\1')        std::cout << "'\\1'\n";
   if ("1")         std::cout << "\"1\"\n";
   if ("false")     std::cout << "\"false\"\n";
   if (std::cout)   std::cout << "std::cout\n";
   if (std::cin)    std::cout << "std::cin\n";
    */
   ///////////////////////////////////////////////////////////////////////
   /*
   std::vector<int> vec5;
   std::ranges::copy(std::ranges::istream_view<int>(std::cin), vec5);

   for(auto v:vec5)
   {
        if(v!=0)
        {
            std::cout<<"Vector has non-zero element";
            return;
        }
   }
    std::cout<<"Vector is all zeros";
    vec5.push_back(100);
    */
    //////////////////////////////////////////////////////////////////////////
   std::string a{"abc"}, b{"abc"};
   if (a != b) std::cout << "wrong: abc != abc\n";
   if (a < b)  std::cout << "wrong: abc < abc\n";
   if (a > b)  std::cout << "wrong: abc > abc\n";
   if (a == b) std::cout << "okay: abc == abc\n";
   if (a >= b) std::cout << "okay: abc >= abc\n";
   if (a <= b) std::cout << "okay: abc <= abc\n";
   a.push_back('d');
   if (a != b) std::cout << "okay: abcd != abc\n";
   if (a < b)  std::cout << "wrong: abcd < abc\n";
   if (a > b)  std::cout << "okay: abcd > abc\n";
   if (a == b) std::cout << "wrong: abcd == abc\n";
   if (a >= b) std::cout << "okay: abcd >= abc\n";
   if (a <= b) std::cout << "wrong: abcd <= abc\n";
   b.push_back('e');
   if (a != b and a<b ) std::cout << "okay: abcd != abce\n";
   if (a < b)  std::cout << "okay: abcd < abce\n";
   if (a > b)  std::cout << "wrong: abcd > abce\n";
   if (a == b) std::cout << "wrong: abcd == abce\n";
   if (a >= b) std::cout << "wrong: abcd >= abce\n";
   if (a <= b) std::cout << "okay: abcd <= abce\n";
   if("abce">"abcd")
    std::cout<<"This works\n";
    return 0;

}