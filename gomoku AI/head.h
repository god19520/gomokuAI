#define boolean char
#define true 1
#define false 0

char chess[19][19];
int weight[19][19]={0};
int aweight[19][19]={0};
typedef enum{Black=49,White=48,None=0}Player;
int i,j;
int x,y;
int b=0, w=0;
int max=0;
int max1=0;
int quit=0;
Player myself;
Player enemy;
boolean found=false;
