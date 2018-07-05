#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int x,z,a,b;
    cout << "Introduceti numarul de km parcursi de Fat-Frumos ziua:";
    cin>>a;
    cout << "Introduceti numarul de km pe care Fat-Frumos ii parcurge inapoi noaptea:";
    cin>>b;
    cout<<"Introduceti km la care se afla Ileana-Cosanzeana:";
    cin>>x;
    z=1;
    x=x-a;
    while(x>0)
    {
     x=x+b;
     z=z+1;
     x=x-a;
    }
    system("cls");
    cout<<"Acum cititi textul:"<<endl<<endl;
    cout<<"-O,dragul meu!Ai venit sa ma salvezi!"<<endl;
    Sleep(150);
    cout<<"-Nu a luat mult,doar "<<z<<" zile."<<endl;
    Sleep(150);
    if(z<=20)
    {
        cout<<"-Nu a fost mult."<<endl;
    }
    else
    {
        cout<<"-Aproape am murit!Te misti ca un melc!Nu ma mai casatoresc cu tine!"<<endl<<"-Si pacat ca am platit luna de miere!"<<endl<<endl;
    }
    return 0;
}
