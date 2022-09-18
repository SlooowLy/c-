# include <iostream>
# include <string>

class test {
    protected:
        int x;
    public :
        test () 
        {
            std::cout << "test default constactor called\n";
        }
        test (std::string name_) {
            x = 10;
            std::cout << "test constructor called\n";
        }
        int get_x_1() {return x;}
};

class enh : public test {
    public :
        enh(std::string name_){
            std::cout << "eng constructor called \n";
        }
        int get_x(void) {return get_x_1();};
};

int main()
{
    enh c1("abdellah");

    // std::cout << c1.get_x();
}