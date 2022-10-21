#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <stack>
#include <queue>
#include "maxqueue.h"


using namespace std;

int main(int argc, char *argv[]){


     MaxQueue queue;

     for(int i = 1; i < argc; i++){
         if (argv[i][0] == '.'){
             cout << queue.front() << endl;
             queue.pop();
         } else {
             queue.push(atoi(argv[i]));
         }
     }

     return 0;
}