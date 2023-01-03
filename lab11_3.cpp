#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int count=0;
    double sum=0;
    double total1=0,total2=0;
    double sd,mean;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += stod(textline);
        total1 += stod(textline)*stod(textline);
        count++;
    }
    mean=sum/count;
    total2=total1/count;
    sd=sqrt(total2-mean*mean);
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}

