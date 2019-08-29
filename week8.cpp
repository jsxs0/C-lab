#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int x=1;
	private:
		int y;//=2;
	protected:
		int z=3;
};
class B : private A
{
	public:
	void get()
	{
		cout<<x<<z;
	}	//<<y;
		//cout<<z;
		int a;
		/*void get()
		{
			cin>>x>>z>>a;
			return 0;
		}*/
};
int main()
{
	B wq;
	wq.get();
	return 0;
}
