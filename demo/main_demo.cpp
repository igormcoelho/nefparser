
#include<iostream>

#include<nvm3/OpCode.hpp>
#include<nvm3/OpCodeInfo.hpp>

using namespace std;
using namespace nvm3;

int main() {


   std::cout << OP_PUSHINT8 << "\t" << OpCodeInfoGlobal::oplist[OP_PUSHINT8].description << std::endl;
   std::cout << OP_PUSHA << "\t" << OpCodeInfoGlobal::oplist[OP_PUSHA].description << std::endl;
   std::cout << OP_CONVERT << "\t" << OpCodeInfoGlobal::oplist[OP_CONVERT].description << std::endl;


    return 0;
}