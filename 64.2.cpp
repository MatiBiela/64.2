#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
        string t[21];
        int rekurencyjne;
        char c;
       
        public:
                file();
                ~file();
            //    void loop(); 
                bool recursion();

};


file::file()
{
        inFile.open("dane_obrazki.txt"); 
        if (!inFile.good())
        {
                cerr << "Blad - pliku nie da sie otworzyc!\n";
                exit(1);
        }
}
bool file::recursion() {
	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++) {
			inFile >> c;
			if(t[i][j] == t[i][j+10] && t[j][i] == t[j][i+10])
			return true;
		}
	}
}

file::~file()
{
        inFile.close();
}
//void file::loop()
//{
     //   string data; //lub np. int jeœli czytamy liczby
 //       while (!inFile.eof()) //string po stringu (do spacji/nowej linii) wczyta ca³y plik
   //     {
       //         inFile >> data;
//
  //      }
//}


int main() {
	int rekurencyjne;
	file f;
	if(f.recursion() == true) {
		rekurencyjne ++;
	}
	cout << "Liczba obrazkow rekurencyjnych: " << rekurencyjne << endl;
	f.recursion();
	
	
	
	
	return 0;
}
