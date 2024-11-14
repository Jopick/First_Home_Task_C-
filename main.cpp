#define mimic vector
#define thisIsCopypast cout
#define iAmDontAndersteandIJustCopy int
////////////////////////////////
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
//////////////////////////////////

#define model copy
#define weight copypastas
#define in copypasta
#define devisesArray clone
#define screenDiagonal dublicate
////////////////////////


using namespace std;

struct devises{
    iAmDontAndersteandIJustCopy weight;
    float screenDiagonal;
    wstring model;
};

int main()
{
    //vector <devises> devisesArray;

    mimic <devises> devisesArray;

    wifstream in;
    in.open("Text.txt");

    if(in.is_open()){
        thisIsCopypast << "file open!";
        thisIsCopypast << "\n";
    }

    while (!in.eof()){

        wstring model;
        iAmDontAndersteandIJustCopy weight;
        float screenDiagonal;

        in >> model >> weight >> screenDiagonal;

        devisesArray.push_back({weight, screenDiagonal, model});

    }
    wstringstream strStream;

    int sizeo = 10;

    thisIsCopypast << "0" <<  setw(sizeo)<< "|" << setw(sizeo) << "model" <<  setw(sizeo)
    << "|" << setw(sizeo) <<  "Diagonal" <<  setw(sizeo)<< "|" << setw(sizeo) << "weight";

    thisIsCopypast << "\n" << "-------------------------------------------------------------" << "\n";

    for (size_t i = 0; i < devisesArray.size(); i ++){

        wcout << i + 1 << setw(sizeo)<< "|" << setw(sizeo) << devisesArray[i].model
        <<  setw(sizeo)<< "|" << setw(sizeo) << devisesArray[i].screenDiagonal
        <<  setw(sizeo)<< "|" << setw(sizeo) << devisesArray[i].weight << endl;

        strStream << "model " << devisesArray[i].model << endl;
        strStream << "screenDiagonal " << devisesArray[i].screenDiagonal << endl;
        strStream << "weight " << devisesArray[i].weight << endl;
        strStream << " " << endl;

    }
    in.close();

    wstring answerString = strStream.str();
    wofstream riterText("Text.txt", ios::binary);
    riterText.write(answerString.c_str(), answerString.size());
    riterText.close();

    thisIsCopypast << "file was rewrite";
    cout << "vtgr";
    cout << "Hello world";

    return 0;
}

