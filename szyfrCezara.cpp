
#include <iostream>
#include <string>

using namespace std;

void szyfr(int k , string napis)
{
     if(k > 26)
        k %= 26;

    for(int i=0; i<napis.length(); i++)
	{
		napis[i]+=k;
		if(napis[i]>'Z')
            napis[i]-=26;

	}
	std::cout << napis << endl;



}


int main() {

    int k = 107;
    string napis = "INTERPRETOWANIE";

    szyfr(k , napis);

}
