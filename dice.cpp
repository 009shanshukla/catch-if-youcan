void GAME::throwdice()
{
                if(p==1)
				{
				 printf("throw your dice player 1\n");
                  val=1+rand()%6;
                  if(val!=6)
                  p++;
                  return;
				}
               if(p==2)
				{
				 printf("throw your dice player 2\n");
                  val=1+rand()%6;
                 if(val!=6)
                 p++;
                 return;
				}
              if(p==3)
				{
				 printf("throw your dice player 3\n");
                  val=1+rand()%6;
                  if(val!=6)
                  p++;
                  return;
                 
				}
              if(p==4)
				{
				 printf("throw your dice player 4\n");
                  val=1+rand()%6;
                 
                 p=1;
                 return;
				} 
}
