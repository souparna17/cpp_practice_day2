#include<iostream>
using namespace std;
/*sample(sample &t)
{
	id=t.id;
}*/
class date
{
	int dd,mm,yy;
	public:
		date(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		void show()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		date(date &dn)
		{
			this->dd=dn.dd;
			this->mm=dn.mm;
			this->yy=dn.yy;
		}
};
int main()
{
	date d(26,3,24);
	date d1(d);
	d.show();
	d1.show();
}
