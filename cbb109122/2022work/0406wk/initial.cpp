using namespace std;
#include <iostream>
#include <cstring>
#include <string>
#include "initial.h"

char *initial(Name *n){
    char *name = new char;
    char *ftemp = new char;


    strcpy(name,n->lastname);
    strcat(name,", ");
    strcpy(ftemp,n->firstname);

    for(int i=0;i<sizeof(ftemp);i++){
        if(ftemp[i]>='A' && ftemp[i]<='Z'){
            ftemp[i+1]='.';
        }
        if(ftemp[i]>='a' && ftemp[i]<='z'){
            ftemp[i]='\0';
        }
    }
    strcat(name,ftemp);

    delete [] ftemp;
    return name;
    delete [] name;
}
