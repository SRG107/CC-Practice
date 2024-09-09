
float area(int);

int main(int argc, char* argv[])
{
 int a=4;
 float ar = area(a);
 printf("%f\n",ar);
 printf("%s\n",argv[0]);
 printf("%s\n",atoi(argv[1]));
 printf("%s\n",atoi(argv[2]));
 return 0;
}

float area(int r)
{
 return (3.14*r*r);
}
