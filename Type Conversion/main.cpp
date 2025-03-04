#include <iostream>

int main(){
    // type conversion = conversion of a value  of one data type to another
    // implicit = automatic 
    // explicit = precede value with new data type (int)

    //implicit cast
   // double x = (int)3.14;

   //std::cout << x;

   //2nd example
  // char y = 100;
   //std::cout << y;

   //explicit cast
   //std::cout << (char) 100;

   //application
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;

   std::cout << score << "%";
    

    return 0;
}