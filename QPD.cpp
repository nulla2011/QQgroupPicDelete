#include <iostream>
#include <io.h>
using namespace std;

int main(int argc, char const *argv[])
{
	_finddata_t file;
	int k;
	long HANDLE;
	k = HANDLE = _findfirst( "D:/Image58/*.*", &file );
	while( k != -1 )
	{
		if (file.size>=500000)
		{
			if(remove(file.name)==0)
			cout <<file.name<<" "<< file.size << endl;
		}

		k = _findnext( HANDLE, &file );
	}
	_findclose( HANDLE );

	return 0;
}