#include <iostream>
using namespace std;

struct girl
{
private:
	int realAge = 28;
public:
	int getAge(){ return 20; }
};

int main(void)
{
	cout << "This is a test." << endl;
	cout << "What do you think of me?" << endl;
	system("pause");
	return 0;
}
