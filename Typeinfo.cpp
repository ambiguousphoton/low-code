#include <typeinfo>
#include <iostream>
#include <string>
int main() {
    auto str = "jai shree ram";
    std::cout << str << " \n";
    std::cout <<  typeid(str).name() << "\n";
    std::cin << str ;
    if (str == "int"){int x = 0L;};
    else if(str == "str"){string x = ""};
    else if(str == "flt"){float x = 0.0f;};
    else if(str == "chr"){char x = ''};
    
    auto inp[5];
    inp[0]= x;
    
  //  std::cin >> inp ;
  //  std::cout << typeid(inp).name() ;
    
    return 0;
}
