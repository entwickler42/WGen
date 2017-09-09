#include <vcl.h>
#include <fstream>
#pragma hdrstop

using namespace std;

const unsigned int s_year = 79;
const unsigned int e_year = 80;

#pragma argsused
//---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
    char buf[64];
    ofstream* out = new ofstream("dates.txt",ios::out);

    for(unsigned int year=s_year; year<=e_year; year++)
        for(unsigned int month=1; month<=12; month++)
            for(unsigned int day=1; day<=31; day++)
            {
                sprintf(buf,"%.2i%.2i%i\n",day,month,year);
                out->write(buf,strlen(buf));
            }

    out->close();   delete out;
    return 0;
}

 