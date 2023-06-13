#include"monster.h"

class Thanos {
private:
	string name;
  int stones;
	int hp; //extra hp;
public:

	/* constructor and destructor */
Thanos(int =0,int=100000);
~Thanos();
	void snap_finger(monster[],int); 
	void print();
/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
Thanos::Thanos(int a,int b){
  stones=a;
  hp = b;
}
void Thanos::operator++(){
  stones++;
}

void Thanos::snap_finger(monster m[], int n){
  if(stones<6) cout<<"Not enough stones"<<endl;
  else{
    int i;
    for(i=0;i<n;i+=2){
      m[i].shp(0);
      cout << "Thanos snapped, monster eliminated!" << endl;
    }
    
  }
}
Thanos::~Thanos(){
   cout<<name<<" is destroyed"<<endl;
}
