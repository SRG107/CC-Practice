#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
 char name[20];
 int reg;
};

int main()
{
 struct student s1;
 struct student s2;
 struct student *ptr = &s1;

 s1.reg = 111;
 strcpy(s1.name,"Ram");
 s2.reg = 112;
 strcpy(s2.name,"Sham");

 printf("S1 -> Reg = %d\n",s1.reg);
 printf("S1 -> Name = %s\n",s1.name);
 printf("S2 -> Reg = %d\n",s2.reg);
 printf("S2 -> Name = %s\n",s2.name);
 
 printf("addr S2 -> Name = %p\n",&(s2.name));
 printf("addr S2 -> Reg = %p\n",&(s2.reg));
 printf("addr S2  = %p\n",&s2);
 printf("addr S1  = %p\n",&s1);

 printf("*ptr = %s\n",*ptr);
 printf("ptr->reg  = %d\n",ptr->reg);
 printf("ptr->name  = %s\n",ptr->name);
 printf("(*ptr).name = %s\n",(*ptr).name);
return 0;
}
