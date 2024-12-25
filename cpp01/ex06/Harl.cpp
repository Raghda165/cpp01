#include "Harl.hpp"
void Harl::debug( void )
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"<<std::endl;
}
void Harl::info( void )
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years  you started working here since last month."<<std::endl;
}
void Harl::error(void)
{
    std::cout <<" This is unacceptable! I want to speak to the manager now."<<std::endl;
}
int get_level(const std::string level)
{
    if(level.compare("DEBUG")==0)
        return(1);
    if(level.compare("INFO")==0)
        return(2);
     if(level.compare("WARNING")==0)
        return(3);
     if(level.compare("ERROR")==0)
        return(4);
    return(5);

}
 void Harl:: complain( std::string level )
 {
    switch (get_level(level))
    {
        case 1:
            std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"<<std::endl;
            break;
        case 2:
             std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
            break;
        case 3:
             std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years  you started working here since last month."<<std::endl;
            break;
        case 4:
            std::cout <<" This is unacceptable! I want to speak to the manager now."<<std::endl;
            break;
        default:
            break;

    }
 }