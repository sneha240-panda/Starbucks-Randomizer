#include "Drink.h"

string Drink::getTemp(){
  if(is_hot == true){
   return "Hot"; 
  }
  
  else if(is_hot == false){
   return "Iced"; 
  }
}
