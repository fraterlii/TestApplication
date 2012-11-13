#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
#include <vector>


namespace arrayStuff {
	std::string x;

	std::string drugs[]={"DRUGS","POT","MARIJUANA","DOSE","DOPE","WEED","GANJA","MUSHROOM","LSD","COCAINE","COKE","HEROIN","$$$$"};
	std::string weapons[]={"GUNS","RIFLE","RIFLES","WEAPONS","KNIFE","KNIVES","GUN","REVOLVERS","REVOLVER","SWORD","SWORDS","PISTOLS","###"};
	std::string kidnap[]={"KIDNAP","SNATCH","/////////","@@@@","!!!!!","####","$$$$$$$","%%%%%%","^^^^^","&&&&&&","*****","((((((",")))))))"};
	std::string murder[]={"MURDER","KILL","KILLED","SLAY","SNUFF","EXTERMINATION","ASSASSINATION","ELIMINATION","ELIMINATE","@@@@@@@@","#########","$%%%%%%%%%%%%","........."};
	std::string robbery[]={"BLACKMAIL","BANDITRY","PIRACY","STEALING","STOLE","THEFT","SHOPLIFTING","BURGLARY","^^^^^^^^^","&&&&&&&&&&&","**********","!!!!!!!!!!!",")))))))))"};
	std::string pressingIssue[]={"HEMP","PISTOL","ABDUCT","ASSASSIN","ROBBED"};
	std::string alice_kw_Array[] = {"DRUGS","GUNS", "KIDNAP", "ROBBERY" , "MURDER"};
	int alice_kw_ArrayLength = sizeof(alice_kw_Array) / sizeof(std::string);

	std::string noMatchResponsesArray[] = {"Wanna run that by me again?", "Please be more direct.\n       Get to the point already...", "Is this some kind of mind game?", "What?", "I don't see what you're getting at..."};
	int noMatchResponsesArrayLength = sizeof(noMatchResponsesArray) / sizeof(std::string);

		public class ResponseNode
{
public:
	// ResponseNode local data declarations
	std::string response;
	int outputCount;

	// ResponseNode local member functions
	std::string responseOutput(){
		// returns response and increments outputCount by 1

		outputCount = outputCount +1;
		return response;
	}

	void manualConstructor(std::string constructorString, int constructorInt){
		// use this to initialize the ResponseNode objects

		response = constructorString;
		outputCount = constructorInt;
	}

	// class constructor
	ResponseNode() {};
};

	// namespace data declarations									//how we guide the conversation is something to think about, and how he gets caught. 
	ResponseNode alice_RNArray[30][5];

	void build_alice_RNArray() {
		// Initializes each value within the alice_RNArray variable

		// DRUGS0
		alice_RNArray[0][0].manualConstructor("What drugs?", 0);
		alice_RNArray[0][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[0][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNS0
		alice_RNArray[1][0].manualConstructor("What guns?", 0);
		alice_RNArray[1][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[1][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAP0
		alice_RNArray[2][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[2][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[2][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERY0
		alice_RNArray[3][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[3][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[3][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDER0
		alice_RNArray[4][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[4][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[4][2].manualConstructor("What?, me a murdered, no way.", 0);
		
		// DRUGS1
		alice_RNArray[5][0].manualConstructor("What drugs?", 0);
		alice_RNArray[5][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[5][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNS1
		alice_RNArray[6][0].manualConstructor("What guns?", 0);
		alice_RNArray[6][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[6][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAP1
		alice_RNArray[7][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[7][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[7][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERY1
		alice_RNArray[8][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[8][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[8][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDER1
		alice_RNArray[9][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[9][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[9][2].manualConstructor("What?, me a murdered, no way.", 0);

		// DRUGS2
		alice_RNArray[10][0].manualConstructor("What drugs?", 0);
		alice_RNArray[10][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[10][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNS2
		alice_RNArray[11][0].manualConstructor("What guns?", 0);
		alice_RNArray[11][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[11][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAP2
		alice_RNArray[12][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[12][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[12][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERY2
		alice_RNArray[13][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[13][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[13][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDER2
		alice_RNArray[14][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[14][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[14][2].manualConstructor("What?, me a murdered, no way.", 0);

		// DRUGS3
		alice_RNArray[15][0].manualConstructor("What drugs?", 0);
		alice_RNArray[15][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[15][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNS3
		alice_RNArray[16][0].manualConstructor("What guns?", 0);
		alice_RNArray[16][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[16][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAP3
		alice_RNArray[17][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[17][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[17][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERY3
		alice_RNArray[18][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[18][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[18][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDER3
		alice_RNArray[19][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[19][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[19][2].manualConstructor("What?, me a murdered, no way.", 0);

		// DRUGS4
		alice_RNArray[20][0].manualConstructor("What drugs?", 0);
		alice_RNArray[20][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[20][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNS4
		alice_RNArray[21][0].manualConstructor("What guns?", 0);
		alice_RNArray[21][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[21][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAP4
		alice_RNArray[22][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[22][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[22][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERY4
		alice_RNArray[23][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[23][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[23][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDER4
		alice_RNArray[24][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[24][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[24][2].manualConstructor("What?, me a murdered, no way.", 0);

		// DRUGSPressIssue
		alice_RNArray[25][0].manualConstructor("What drugs?", 0);
		alice_RNArray[25][1].manualConstructor("I don't do drugs.", 0);
		alice_RNArray[25][2].manualConstructor("What exactly are you accusing me of?", 0);

		// GUNSPressIssue
		alice_RNArray[26][0].manualConstructor("What guns?", 0);
		alice_RNArray[26][1].manualConstructor("I don't own any guns.", 0);
		alice_RNArray[26][2].manualConstructor("What exactly are you accusing me of?", 0);
		
		// KIDNAPPressIssue
		alice_RNArray[27][0].manualConstructor("WHAT?!...\n       A KIDNAPPING?!\n       Clay said that kid was his nephew!", 0);
		alice_RNArray[27][1].manualConstructor("How could you even...\n       I would NEVER do something like that!", 0);
		alice_RNArray[27][2].manualConstructor("Who do you think I am?\n       What do you think you're accusing me of officer?", 0);
		
		// ROBBERYPressIssue
		alice_RNArray[28][0].manualConstructor("I was not involved in that Bank robbery on 1st National Bank.", 0);
		alice_RNArray[28][1].manualConstructor("I am a working class citizen of this country, i don't rob people.", 0);
		alice_RNArray[28][2].manualConstructor("What?, me a robber, no way.", 0);
		

		//MURDERPressIssue
		alice_RNArray[29][0].manualConstructor("Don't accuse me of Murder.", 0);
		alice_RNArray[29][1].manualConstructor("I am a good man, I don't kill people.", 0);
		alice_RNArray[29][2].manualConstructor("What?, me a murdered, no way.", 0);


	

	}

	//calculates the similarities in words and return the integer value.
	size_t uiLevenshteinDistance(const std::string &s1, const std::string &s2)
	{
		const size_t m(s1.size());
		const size_t n(s2.size());
 
		if( m==0 ) return n;
		if( n==0 ) return m;
 		size_t *costs = new size_t[n + 1];
 
		for( size_t k=0; k<=n; k++ ) costs[k] = k;
 
		size_t i = 0;
		for ( std::string::const_iterator it1 = s1.begin(); it1 != s1.end(); ++it1, ++i )
		{
			costs[0] = i+1;
			size_t corner = i;
 
			size_t j = 0;
			for ( std::string::const_iterator it2 = s2.begin(); it2 != s2.end(); ++it2, ++j )
			{
				size_t upper = costs[j+1];
				if( *it1 == *it2 )
				{
					costs[j+1] = corner;
				}
				else
				{
					size_t t(upper<corner?upper:corner);
					costs[j+1] = (costs[j]<t?costs[j]:t)+1;
				}
 
				corner = upper;
			}
		}
 
		size_t result = costs[n];
		delete [] costs;
 
		return result;
	}


	int compareKeywords(std::string buf) {
		// checks the string parameter (user input) against the string values in alice_kw_Array[]
		// if a match is found, the index of the match is returned
		// otherwise, a value of -1 is returned

		
			if (buf == "HINT" || buf == "QUIT") {
				return -5;
			}
			
			for (int i=0; i < 13; i++){
			/*if (buf == alice_kw_Array[i]){
				return i;
			}*/
			if(uiLevenshteinDistance(drugs[i],buf)<2){			//if the uiLenevnshteinDistance is less than 2 means if the words are not similar within range of 1, its not gonna work.
				return 0;
			}
			else if(uiLevenshteinDistance(weapons[i],buf)<2){
				return 1;
			}
			else if(uiLevenshteinDistance(kidnap[i],buf)<2){
				return 2;
			}
			else if (uiLevenshteinDistance(robbery[i],buf)<2){
				return 3;
			}
			else if (uiLevenshteinDistance(murder[i],buf)<2){
				return 4;
			}
			
		}
		return -1;
	}
	
	std::string input2UPPER(std::string s){
		// gets user input and standardizes it in preparation for subsequent keyword comparison

		for(int i; i< s.length(); i++){
			if( int(s.at(i)) <= int('z') && int(s.at(i)) >= int('a')){
				s.at(i) = char(int(s.at(i)) + int('A') - int('a'));
			}
			else if (!(int(s.at(i)) <= int('Z') && int(s.at(i)) >= int('A'))){
				s.at(i) = ' ';
			}
		}
		return s;
	}

	//void showCasePoints() {
	//	// outputs the available Keywords stored in alice_kw_Array[] 

	//	cout << "Case Points: ";
	//	for(int i=0; i < 4; i++){
	//		cout << alice_kw_Array[i];
	//		if(i<4-1) cout << ", ";
	//	}
	//	cout << endl;
	//}

	//bool running(std::string buf){
	//	// returns the boolean value that controls the lifespan of our game loop

	//	if (buf == "QUIT") {
	//	cout << "\n\n\nDo you want to continue? (y or n): ";
	//	return (input2UPPER() != "N");
	//	}
	//	else if (buf == "HINT") {
	//		showCasePoints();
	//		return true;
	//	}
	//	else {
	//		return true;
	//	}
	//}

	//void show_AliceExposition() {
	//	// displays introductory, expository information that will be used to question the chatbot
	//	// hints at case points without explicitly naming them

	//	cout << "Suspect Name, Age, Sex, D.O.B.:  " << "\n\n  Alice Kremieux\n  23, Female\n  Feb. 3rd, 1989\n" << endl;
	//	cout << "Suspect was found unconscious in driver's seat of vehicle." << endl;
	//	cout << "Police had been notified of strange activity in parking lot of Taco Bell." << endl;
	//	cout << "Her boyfriend, Clay Alders, was hyperventilating from apparent drug overdose." << endl;
	//	cout << "Bath salts were found scattered throughout the vehicle." << endl;
	//	cout << "Two revolver-style pistols were identified in the trunk." << endl;
	//	cout << "A young boy, approximately five years of age, was found crying in the backseat." << endl;
	//	cout << "Neither Alice nor Clay are legal guardians of the boy." << endl;
	//	cout << "Possible kidnapping." << endl;
	//	

	//	cout << "\nMove on to questioning...";
	//	cin.get();
	//	cout << "\n\n";
	//}


//	void main()
//{
//	// main() data declarations


std::string buf;
std::string keywords;
std::string mainresponse;
int kwIndex;


//	show_AliceExposition();
//	
//
//	do {
//		int hit = 0;
//		keywords = getKeywords();
//		stringstream ss(keywords);
//		vector<string> tokens;
//		ofstream outputFile;
//		outputFile.open("datafile.txt");
//		mainresponse = "";
//
//
//		while(ss>>buf){
//			tokens.push_back(buf);
//			outputFile<<buf+"\n";
//			kwIndex = compareKeywords(buf);
//			if (kwIndex >= 0){
//				hit++;
//				mainresponse = alice_RNArray[kwIndex][rand() % 5].responseOutput();
//			}
//			
//		} outputFile.close();
//		if (hit == 0) mainresponse = noMatchResponsesArray[rand() % 5];
//		else if (hit > 1) mainresponse = "One thing at a time, please.";
//		cout << "Alice: " << mainresponse << endl << endl;
//
//	}while (running(buf));
//	
//}

	/// <summary>
	/// Summary for Form1
	/// </summary>
}