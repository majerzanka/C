
#include <iostream>
#include <string>

using namespace std;

string szyfr(int k , string napis)
{
     if(k > 26)
        k %= 26;

    for(int i=0; i<napis.length(); i++)
	{
		napis[i]+=k;
		if(napis[i]>'Z')
            napis[i]-=26;

	}
	return napis;
	//std::cout << napis << endl;



}


int main() {

/* przechodze nie przez plik

    file fp;
    string tekst = fp.open()
    string nieszyfr[1500];
    string szyfr[1500];


    int i_szyfr = 0;
    int i_nieszyfr = 0;

    int i = 0;
    while(1)
        if(!tekst[i++] % 2)
            nieszyfr[i_nieszyfr++] += tekst;
        else
            szyfr[i_szyfr++] += tekst;

    */


    string nieszyfr_str[2] = {"ZAWISLAK" ,"KRASZEWSKI"};
    string szyfr_str[2] = {"EFBNXQFP" , "XENFMRJFXV"};

    //int k = 107;
    string napis = "INTERPRETOWANIE";
    string nowy_napis;

    for(size_t i = 0; i < 2;i++)
        for(size_t k = 0; k < 26 ; k++)
        {
            if(i)
            {
                nowy_napis = szyfr(k,nieszyfr_str[i]);
                if(nowy_napis == szyfr_str[i])
                    cout << "Napis prawidlowy ma indeks" << i << endl;

            }

        }

}
