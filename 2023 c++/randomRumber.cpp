#include <iostream>
#include <cstdlib> 
#include <ctime> 
  
int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); 
  
    for (int count=1; count <= 100; ++count)
    {
        std::cout << std::rand() << "\t";
  
        // display 5 random numbers per row
        if (count % 5 == 0)
            std::cout << "\n";
     }
  return 0;
}