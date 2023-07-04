#include <iostream>
int main()
{
    int m=1;
    int m2{0};
    int A{0};
    int B{0};
    int N{0};
    std::cin>>N>>A>>B;
    m2=2*N*A*B*m;
    std::cout<<m2<<std::endl;
    return 0;
}