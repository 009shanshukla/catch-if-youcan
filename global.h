#define SIZE2 23
#define SIZE1 29
struct node
{
 int v;
 char d;
 //int arr[16];
};
class GAME
{
     public:
     node mp[SIZE1][SIZE2];
     int p,val,tok,count1,count2,count3,count4,temp,num;
     void init();
	 void print_map();
     void throwdice();
     //void move();
     //void movdir();
     //void set();
     //void win();
     //void war();
     void player1();
     void player2();
     void player3();
     void player4();
     
     
	 
};
