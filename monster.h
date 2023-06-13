#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
void shp(int x);
void operator++();
void operator--();
void operator+=(int); // += hp
bool not_dead() {return hp>0; };
void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data


monster(string, int=0,int=0);
monster();
//Alt+126
~monster();

};



void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<" potion:   "<<potion<<endl;
  
}
void monster::Attack(monster & b){// x.Attack(y)
     cout<<"ATTACK!!!!!"<<endl;
     if(this->hp>0){
         // Some action?
     }
  else cout<<"I am dead"<<endl;
  
}

monster::~monster(){
cout<<name<<" is destroyed"<<endl;
  //indicate which monster is gone
}
monster::monster(string n, int a,int b){
  name=n;
  hp=a;
 potion=b;

  /* Ask for input */
}
 monster::monster(){ 
   cout<<"Name:";
   cin>>name;
   cout<<"HP:";
  cin>>hp;
   cout<<"Potion:";
  cin>>potion;
 }
void monster::shp(int x){
  hp=x;
}

  







#endif
