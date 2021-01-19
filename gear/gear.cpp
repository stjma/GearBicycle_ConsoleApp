// gear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{


   // Gear ratio = chainring / cog
	int chainringMin = 40;
	int chainringMax = 50;
	
	int cogMin = 10;
	int coMax = 20;

	

	/*
	cout << "Chainring min";
	cin >> chainringMin;

	cout << "Chainring Max";
	cin >> chainringMax;

	cout << "cog Min";
	cin >> cogMin;

	cout << "cog max";
	cin >> coMax;
	*/

	int chainringCount = ((chainringMax - chainringMin) + 1);
	int cogCount = ((cogMin - coMax) + 1);


	
	//All chainring number
	vector<int> chainringArrays;
	for (int i = chainringMin; i <= chainringMax; i++)
	{
		//cout << i << " ";
		chainringArrays.push_back(i);
	}
	//for (int i = 0; i < (int)chainringArrays.size(); i++)
		//cout << chainringArrays.at(i) << endl;

	//All cog numbers
	vector<int> cogArrays;
	for (int i = cogMin; i <= coMax; i++)
	{
		cogArrays.push_back(i);
		//cout << i << " ";
	}

	
	
	

	//for (int i = 0; i < (int)cogArrays.size(); i++)
		//cout << cogArrays.at(i) << endl;
	
	
	vector<vector<double>> gearRatioResult;
	for (int i = 0; i < cogArrays.size(); i++)
	{
		
		vector<double> gearRatioPartial;
		for (int ii = 0; ii < chainringArrays.size(); ii++)
		{
			double ratio = (double)chainringArrays[ii] / (double)cogArrays[i];
			//cout << ratio << "\n";
			gearRatioPartial.push_back(ratio);
		}
		gearRatioResult.push_back(gearRatioPartial);
	}



	for (int i = 0; i < cogArrays.size(); i++)
	{

		
		for (int ii = 0; ii < chainringArrays.size(); ii++)
		{
			//cout << "ii " << (double)chainringArrays[ii] << " " << "i " << cogArrays[i] << "\n";
			cout << gearRatioResult[i][ii] << "\n";
		}
		
	}
	

   // Inch = Ratio / Wheel diameter (Inch)

   // meters =  ratio * wheel circumference(meters)

   // speed = Wheel ciconference * gear ratio * cadence

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file





