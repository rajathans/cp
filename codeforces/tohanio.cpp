#include <iostream.h>
#include <conio.h>

void move(const int n,const int fromTower,const int toTower,constint spare Tower)
 {
    if(n>0)
    {
       move((n-1),fromTower,spareTower,toTower);
       cout<<fromTower<<toTower<<"\n";
       move((n-1),spareTower,toTower,fromTower);
    }
 }

 int main( )
 {
    clrscr( );

    cout<<"\n\t **************   TOWERS OF HANOI   **************\n"<<endl;
    cout<<"\t The Mystery of Towers of Hanoi is as follows : \n"<<endl;

    move(4,1,3,2);

    cout<<"\n\t *************************************************";

    getch( );
    return 0;
 }