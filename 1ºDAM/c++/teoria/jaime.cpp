#include <iostream>

using namespace std;

class Gozer
{
    public:
	Jaime();
	~Jaime();
};

Jaime::Jaime()
{
    cout << "Jaime salvaje apareció." << endl;
}

Jaime::~Jaime()
{
    cout << "Jaime cambió el codigo, Jaime destruye..." << endl;
}

int main()
{
    Jaime objeto;
};
