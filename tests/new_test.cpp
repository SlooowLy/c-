# include <string>
# include <iostream>

int main()
{
    std::string *test = new std::string[100];
    std::string *test2 = NULL;

    if (!test)
        puts("test khawi");
    if (!test2)
        puts("test2 khawi");
}