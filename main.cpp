#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include"global.h"
//#include"move.cpp"
#include"util.cpp"
//#include"fullutil.cpp"
#include"p1.cpp"
#include"dice.cpp"
using namespace std;
int main()
{
 GAME g;
 g.p=1;
 g.val=1;
 g.count1=g.count2=g.count3=g.count4=g.temp=0; 
 cout<<"enter Y or y to start game\n";
    while(1)
	{
	 g.init();
	 char x;
		x=getchar();
		system("CLS");
		if(x== 'y' || x=='Y')
		{
  
			while(1)
			{
				g.print_map();
				g.throwdice(); 
				cout<<"dice = "<<g.val<<endl;
				cout<<"enter the token num\n";
				cin>>g.num;
                if(g.num==1)
                g.player1();
                else if(g.num==2)
                g.player2();
                else if(g.num==3)
                g.player3();
                else if(g.num==4)
                g.player4();
				//g.move();
     
				//cout<<"next player "<<g.p<<endl<<" node dir "<<g.mp[g.x1][g.y1].d<<endl;
				//cout<<"token "<<g.num<<" will reach "<<g.x1<<" , "<<g.y1<<endl;
                system("CLS");
             
            }
     	}
	}
 
 return 0;
}
