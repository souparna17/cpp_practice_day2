#include<iostream>
using namespace std;
 
class Player
{
private:
    int id;
public:  static int next_id;
public:
    int getID()
	{
		return id; 
	}
    Player() 
	{ 
		id = next_id++;
	}
};
int Player::next_id = 1;
 
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.next_id  << " ";
  cout << p2.next_id  << " ";
  cout << p3.next_id ;
}
