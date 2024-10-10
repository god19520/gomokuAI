using namespace std;
#include <iostream>
#include <cstring>
#include <string>
#include "name.h"
 
Name *setName(const char *name)
{
    Name *somebody = new Name;
    bool found=false;
    int Cpst=0;
    int Spst=0;

    for(int i=0;i<sizeof(name);i++){
        if(name[i]==','){
            found=true;
            Cpst=i;
        }
        if(name[i]==' ')
            Spst=i;
    }

    if(found==true){
        strncpy(somebody->lastname,name,Cpst);
        strncpy(somebody->firstname,name+(Cpst+2),sizeof(name)-(Cpst+2));
    }
    else{
        strncpy(somebody->firstname,name,Spst);
        strncpy(somebody->lastname,name+(Spst+1),sizeof(name)-(Spst+1));
    }

    return somebody;
    delete [] somebody;
}
