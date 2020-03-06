#include "gpioaregisters.hpp"
#include "gpiocregisters.hpp" //
#include "rccregisters.hpp"
#include "tim2registers.hpp"

extern "C" 
{
  int __low_level_init(void)
  {
    RCC::CR::HSION::On::Set();
    while ( !RCC::CR::HSIRDY::Enable::IsSet( ) )
     {      
     };
    
    RCC::CFGR::SW::Hse::Set();
    while ( !RCC::CFGR::SWS::Hse::IsSet( ))
    { 
    };
    
    RCC::CFGR::HPRE::Value1::Set();
    return 0;
  }
}
 
int main()
{
  return 0;
}