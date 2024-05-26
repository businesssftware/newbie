#include <iostream>
#include <string>
#include <ctime>
using namespace std;
template <typename A , typename K>
auto overiding (A x , K t )
{
    cout << (x > t) ? x : t ;
}

enum Pair {option1 = 4,option2 , opt3 = 555 };//no assign value to opt2 , then default zero

struct S{
    std::string s ;
    int alpha;
};

int factorial (int num )
{
    int ans = num;
    for (int i = 1 ; i <= num ; i ++ )
    {
        return ans *= factorial(num - 1);
    }
}
void ss (S s )
{
    s.s = "hello " ;
    std::cout << s.s << std::endl;
    std::cout << s.alpha ; 
    std::cout << &s ;// p b val , so diff address 
}
class Blueprint{
    public ://public accesible
/*all attribute of blueprint have*/std::string construct_name ="default attribute" ;
        int xy;
        string name ;
        void construct ()
        {
            std::cout << "Construct is in the working ..__..__\n" ;
        }
//constructor = special method that auto call when object is instantiated 
    Blueprint(std::string business , double cost ,int z ){//constructor name same with clas name
        this->name = business;//businees assign qu name inthis classs 
        this->xy = cost;
        xy = z;//parameter var not same with the of class
        //std::cout << "auto call out this fc() : " << cost  << endl; 
    }
};
class Constructor : public Blueprint {
    public :
    Constructor(std::string business, double cost ,int z) : Blueprint(business,cost, z) {}

    void self()
    {
        cout << "inherit blueprint class things but this is self method " << endl;
    }
};
class Custom
{
private:
    int cash = 0 ;

public:
    string lambo ;
    Custom()
    {
        
    }
    Custom(string lambo){
        this->lambo = lambo ;
    }
    Custom(string lambo , string merz){//constructor overloading
        this->lambo = lambo ;
    }
    ~Custom();

    Custom custom(int cash2)
    {
        setcash(cash);
    }
    int getcash()
    {
        return cash;//attribute readable
    }
    void setcash(int cash1)
    {
        if (cash1 > 0 )
        {
              this->cash = cash1 ; //attribute writable

        }
        else if (cash1 <0 )
        {
            this->cash = -9;
        }
        
    }

};

Custom::Custom(/* args */)
{

}

Custom::~Custom()
{

}

int main()
{
    cout << "factorial of 5 : " ;
    cout << factorial (5) << endl;

    S s; 
    s.alpha = 4;
    std::cout << &s << '\n \t' ;
    ss(s);

    Pair pair1 = option1 ; //4
    std::cout << '\t' << pair1 <<endl ;

    Blueprint B1 = {"default"  , 4300000,6};
    B1 .construct_name = "Bricker";
    std::cout << B1.construct_name << endl;
    B1.construct();

    Blueprint b1("default" ,7583000,7);
    cout << b1.name;

    // std::string name = "jian";
    // std::cout << &name ;//hex , (address )
    // //u also can see the address gap they use how many bits 
    // - '0' is same -48 , due to ascii , 
    //nullptr = pointer that point to no things
   // int *nullp = nullptr;
   // std:: cout << *nullp ; // * now is dereference 
   //nullp = &var;
   // method : if [index] == content ; then access new thing
  // bec inherit , i can use
    Constructor inherit("def",555555,55);
    inherit.construct();
    inherit.self();
    return 0 ;
}