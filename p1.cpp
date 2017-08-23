void GAME::player1()
{
  for(int i=0;i<SIZE1;i++)
  {
   for(int j=0;j<SIZE2;j++)
   {
           if(mp[i][j].v==num && num==1)
           {
                int b=j;
                int a=i;
                mp[i][j].v=0;
                while(val)
                {
                      if(mp[a][b].d=='u')
                      a-=2;
                      if(mp[a][b].d=='d')
                      a+=2;
                      if(mp[a][b].d=='l')
                      b-=2;
                      if(mp[a][b].d=='r')
                      b+=2;
                    if(mp[a][b].v==0)  
                    {mp[a][b].v=num;
                    print_map();
                     mp[a][b].v=0;}
					for(int i=0;i<100000000;i++)
					{
				    }
                    system("cls");
                      val--;
                }
                
              if(mp[a][b].v==2)
              mp[11][3].v=2;
              else if(mp[a][b].v==3)
              mp[3][13].v=3;
              else if(mp[a][b].v==4)
              mp[15][19].v=4;
              
              mp[a][b].v=num;
              
          return;
           }
   }
  }  
}
void GAME::player2()
{
  for(int i=0;i<SIZE1;i++)
  {
   for(int j=0;j<SIZE2;j++)
   {
     if(mp[i][j].v==num && num==2)
     {
                int b=j;
                int a=i;
                mp[i][j].v=0;
       while(val)
                {
                      if(mp[a][b].d=='u')
                      a-=2;
                      if(mp[a][b].d=='d')
                      a+=2;
                      if(mp[a][b].d=='l')
                      b-=2;
                      if(mp[a][b].d=='r')
                      b+=2;
                      if(mp[a][b].v==0)
                      {mp[a][b].v=num;
                         print_map();
                          mp[a][b].v=0;}
					for(int i=0;i<100000000;i++)
					{
				    }
                    system("cls");

                      val--;
                }
             if(mp[a][b].v==1)
              mp[9][27].v=1;
              else if(mp[a][b].v==3)
              mp[3][13].v=3;
              else if(mp[a][b].v==4)
              mp[15][19].v=4;

              mp[a][b].v=num;
       return;
     }
   }
  }  
}
void GAME::player3()
{
  for(int i=0;i<SIZE1;i++)
  {
   for(int j=0;j<SIZE2;j++)
   {
     if(mp[i][j].v==num && num==3)
     {
                int b=j;
                int a=i;
                mp[i][j].v=0;
       while(val)
                {
                      if(mp[a][b].d=='u')
                      a-=2;
                      if(mp[a][b].d=='d')
                      a+=2;
                      if(mp[a][b].d=='l')
                      b-=2;
                      if(mp[a][b].d=='r')
                      b+=2;
                      if(mp[a][b].v==0)
                     { mp[a][b].v=num;
                         print_map();
                          mp[a][b].v=0;}
					for(int i=0;i<100000000;i++)
					{
				    }
                    system("cls");
                      val--;
                }
               if(mp[a][b].v==1)
              mp[9][27].v=1;
              else if(mp[a][b].v==2)
              mp[11][3].v=2;
              else if(mp[a][b].v==4)
              mp[15][19].v=4;
               
              mp[a][b].v=num;
       return;
     }
   }
  }
}
void GAME::player4()
{
  for(int i=0;i<SIZE1;i++)
  {
   for(int j=0;j<SIZE2;j++)
   {
     if(mp[i][j].v==num && num==4)
     {
                int b=j;
                int a=i;
                mp[i][j].v=0;
       while(val)
                {
                      if(mp[a][b].d=='u')
                      a-=2;
                      if(mp[a][b].d=='d')
                      a+=2;
                      if(mp[a][b].d=='l')
                      b-=2;
                      if(mp[a][b].d=='r')
                      b+=2;
                      if(mp[a][b].v==0)
                      {
                      mp[a][b].v=num;
                        print_map();
                        mp[a][b].v=0;}
					for(int i=0;i<100000000;i++)
					{
				    }
                    system("cls");

                      val--;
                }
             if(mp[a][b].v==1)
              mp[14][7].v=1;
              else if(mp[a][b].v==2)
              mp[11][3].v=2;
              else if(mp[a][b].v==3)
              mp[3][13].v=3;
    
              mp[a][b].v=num;
       return;
     }
   }
  }  
}  

