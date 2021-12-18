
#include <iostream>
int main()
{
    int n,number=0;
    std::cout << "Podaj swoja liczbe:" << std::endl;
    std:: cin >> n;
    for (int i = n - 1; i > 0; i--) {
        if (i % 5 == 0 && i % 3 != 0) {
            number++;
            std::cout << i << std::endl;
        }
    }
    std::cout<<std::endl;
    std::cout << "liczb podzielnych przez 5 i nie podzielnych przez 3 mniejszych od twojej liczby jest:" << number;

}
