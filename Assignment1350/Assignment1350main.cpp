#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <math.h>
#include <ctype.h>

using namespace std;

int j = 6;

float standDev;
float Variance1;

int aCounter;
int cCounter;
int gCounter;
int tCounter;
int aaCounter;
int acCounter;
int agCounter;
int atCounter;
int caCounter;
int ccCounter;
int cgCounter;
int ctCounter;
int gaCounter;
int gcCounter;
int ggCounter;
int gtCounter;
int taCounter;
int tcCounter;
int tgCounter;
int ttCounter;

int sum = 0;
int sum_squared = 0;

float Counter;
float numOfLinesCounter;

int probOfA;
int probOfC;
int probOfG;
int probOfT;

double pi = 3.1415629;

int main(int argc, char **argv) {
  ofstream fout;
  string fileName;
  srand(time(NULL));
  string textLine;
  ifstream textfile;
  string fileQuestion;

  while(j < 7){
    cout << "Do you want to get some stats of your file? (['y'] for yes, ['n'] for no)" << endl;
    cin >> fileQuestion;

    if(fileQuestion == "y") {
      cout << "What is the name of the file you want to read? " << endl;
      cin >> fileName;
      textfile.open(fileName);
      fout.open("testoutput.txt", ios::app);//append mode
      //opens file

      //makes user files open
      if(textfile.is_open()){
        if(fout.is_open()){

            //"The value returned by getline is a reference to the stream object itself"
            while(getline(textfile,textLine)){
              //takes first line from text file and stores it in string textLine
              numOfLinesCounter++;
              sum+= textLine.size();
              sum_squared +=textLine.size() * textLine.size();

              for (int i = 0; i < textLine.size(); ++i){


                if(tolower(textLine.at(i)) == 'a'){
                  ++aCounter;
                  ++Counter;
                  if(i == textLine.size() - 1){
                    break;
                  }
                  else{

                    if(tolower(textLine.at(i+1)) == 'a'){
                      ++aaCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'c'){
                      ++acCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'g'){
                      ++agCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 't'){
                      ++atCounter;
                    }
                  }
                }
                if(tolower(textLine.at(i)) == 'c'){
                  ++cCounter;
                  ++Counter;
                  if(i == textLine.size() - 1){

                    break;
                  }
                  else{

                    if(tolower(textLine.at(i+1)) == 'a'){
                      ++caCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'c'){
                      ++ccCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'g'){
                      ++cgCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 't'){
                      ++ctCounter;
                    }
                  }
                }
                if(tolower(textLine.at(i)) == 'g'){
                  ++gCounter;
                  ++Counter;
                  if(i == textLine.size() - 1){

                    break;
                  }
                  else{

                    if(tolower(textLine.at(i+1)) == 'a'){
                      ++gaCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'c'){
                      ++gcCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'g'){
                      ++ggCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 't'){
                      ++gtCounter;
                    }
                  }
                }
                if(tolower(textLine.at(i)) == 't'){
                  ++tCounter;
                  ++Counter;
                  if(i == textLine.size() - 1){

                    break;
                  }
                  else{

                    if(tolower(textLine.at(i+1)) == 'a'){
                      ++taCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'c'){
                      ++tcCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 'g'){
                      ++tgCounter;
                    }
                    if(tolower(textLine.at(i+1)) == 't'){
                      ++ttCounter;
                    }
                  }
              }
            }
          }
          fout << "Matthew Olivo" << endl;
          fout << "2314084" << endl;
          fout << endl;


          fout << "Number of DNA strings: " << numOfLinesCounter << endl;
          fout << "Total sum of string length: " << sum << endl;
          cout << "Sum squared: " << sum_squared << endl;
          fout << "Mean DNA string length: " << sum / numOfLinesCounter << endl;
          cout << "Sum of a's: "<< aCounter << endl;
          cout << "Sum of c's: "<< cCounter << endl;
          cout << "Sum of g's: "<< gCounter << endl;
          cout << "Sum of t's: "<< tCounter << endl;

          Variance1 = sqrt(pow(sum/numOfLinesCounter, 2) * numOfLinesCounter - 2 * (sum/numOfLinesCounter) * sum +sum_squared)/numOfLinesCounter;
          fout << "The Variance is: "<<Variance1 << endl;

          standDev = sqrt(Variance1);
          fout << "The Standard Deviation is: " << standDev << endl;

          float probOfA = (aCounter / Counter);
          float probOfC = (cCounter / Counter);
          float probOfG = (gCounter / Counter);
          float probOfT = (tCounter / Counter);

          fout << "Probability of a: " << probOfA << endl;
          fout << "Probability of c: " << probOfC << endl;
          fout << "Probability of g: " << probOfG << endl;
          fout << "Probability of t: " << probOfT << endl;


          cout << aaCounter << " AA bigrams" << endl;
          cout << acCounter << " AC bigrams" << endl;
          cout << agCounter << " AG bigrams" << endl;
          cout << atCounter << " AT bigrams" << endl;
          cout << caCounter << " CA bigrams" << endl;
          cout << ccCounter << " CC bigrams" << endl;
          cout << cgCounter << " CG bigrams" << endl;
          cout << ctCounter << " CT bigrams" << endl;
          cout << gaCounter << " GA bigrams" << endl;
          cout << gcCounter << " GC bigrams" << endl;
          cout << ggCounter << " GG bigrams" << endl;
          cout << gtCounter << " GT bigrams" << endl;
          cout << taCounter << " TA bigrams" << endl;
          cout << tcCounter << " TC bigrams" << endl;
          cout << tgCounter << " TG bigrams" << endl;
          cout << ttCounter << " TT bigrams" << endl;



          float probOfAA = (aaCounter / (Counter));
          float probOfAC = (acCounter / (Counter));
          float probOfAG = (agCounter / (Counter));
          float probOfAT = (atCounter / (Counter));
          float probOfCA = (caCounter / (Counter));
          float probOfCC = (ccCounter / (Counter));
          float probOfCG = (cgCounter / (Counter));
          float probOfCT = (ctCounter / (Counter));
          float probOfGA = (gaCounter / (Counter));
          float probOfGC = (gcCounter / (Counter));
          float probOfGG = (ggCounter / (Counter));
          float probOfGT = (gtCounter / (Counter));
          float probOfTA = (taCounter / (Counter));
          float probOfTC = (tcCounter / (Counter));
          float probOfTG = (tgCounter / (Counter));
          float probOfTT = (ttCounter / (Counter));

          fout << "Probability of aa: " << probOfAA << endl;
          fout << "Probability of ac: " << probOfAC << endl;
          fout << "Probability of ag: " << probOfAG << endl;
          fout << "Probability of at: " << probOfAT << endl;
          fout << "Probability of ca: " << probOfCA << endl;
          fout << "Probability of cc: " << probOfCC << endl;
          fout << "Probability of cg: " << probOfCG << endl;
          fout << "Probability of ct: " << probOfCT << endl;
          fout << "Probability of ga: " << probOfGA << endl;
          fout << "Probability of gc: " << probOfGC << endl;
          fout << "Probability of gg: " << probOfGG << endl;
          fout << "Probability of gt: " << probOfGT << endl;
          fout << "Probability of ta: " << probOfTA << endl;
          fout << "Probability of tc: " << probOfTC << endl;
          fout << "Probability of tg: " << probOfTG << endl;
          fout << "Probability of tt: " << probOfTT << endl;

          fout << "END OF SUMMARY STATS ----------------------->" << endl;
          fout << endl;


          for (int w = 0; w < 1000; ++w){
            string emptStr = " ";
            double X = ((double)rand()/(double)RAND_MAX);
            double Y = ((double)rand()/(double)RAND_MAX);

            double randomVarA = X;
            double randomVarB = Y;

            double VarC = (sqrt((-2) * log(randomVarA)) * cos(2 * pi * randomVarB));

            double VarD = (VarC * VarC) + (Counter / numOfLinesCounter);

            for (int z = 0; z < VarD; ++z){

              double randomVarC = ((double)rand()/(double)RAND_MAX);

              if(randomVarC < probOfA){
                emptStr += 'a';
              }
              else if (randomVarC < probOfA + probOfC){
                emptStr += 'c';
              }
              else if (randomVarC < probOfA + probOfC + probOfG){
                emptStr += 'g';
              }
              else if(randomVarC < probOfA + probOfC + probOfG + probOfT){
                emptStr += 't';
              }
            }
            fout << emptStr << endl;
          }
        }
      }
      Counter = 0;
      aCounter = 0;
      cCounter = 0;
      gCounter = 0;
      tCounter = 0;

      aaCounter = 0;
      acCounter = 0;
      agCounter = 0;
      atCounter = 0;
      caCounter = 0;
      ccCounter = 0;
      cgCounter = 0;
      ctCounter = 0;
      gaCounter = 0;
      gcCounter = 0;
      ggCounter = 0;
      gtCounter = 0;
      taCounter = 0;
      tcCounter = 0;
      tgCounter = 0;
      ttCounter = 0;
      fout << "END OF NEW STRINGS ------------------------->" << endl;
      fout << endl;
      fout << endl;

      textfile.close();
      fout.close();
    }
    else if (fileQuestion == "n"){
      break;
    }
    else{
      cout << "Invalid input, try again." << endl;
    }


  }
  return 0;
}
