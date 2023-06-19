#include <QCoreApplication>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>

int nextprime(int value);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int val=1;
       char input;

       do
       {

           val=nextprime(val);
           printf("%d\t",val);

           printf("Next Prime number? Y or N ");
           scanf(" %c",&input);

       }
       while(input != 'N' && input != 'n');


    return a.exec();
}

int nextprime(int value)
{
    value++;

    int i=2;
    while(i<value)
    {
        if(value%i==0)
        {
           value++;
           i=2;
           continue;
        }
        else
        {
        i++;
        }
    }

    return value;
}
