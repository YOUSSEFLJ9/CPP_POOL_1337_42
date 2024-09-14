#include <iostream>

std::string to_uper(std:: string s)
{
    int i = 0;
    int len = s.length();
    while(i < len)
    {
        s[i] =  std::toupper(s[i]);
        i++;
    }
    return (s);
}
int main(int ac, char **av)
{
    std:: string s1;
    int i = 1;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
            return (0);
    }    
    while (ac > i)
    {
        s1 = av[i];
        std ::cout << to_uper(s1);
        i++;
    }

}