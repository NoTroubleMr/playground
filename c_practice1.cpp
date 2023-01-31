#include <iostream> //Input/Output stream, preprocessed information, including cout
#include <cmath>
#include <vector>
#include <string>
#include <fstream> 
#include <cstdlib>
#include <ctime>

using namespace std;

#include <vector>
#include <cmath>

int positive_sum (const std::vector<int> arr){
  int sum = 0;
  for (int num : arr){
    sum += abs(num);
   }
  return sum;
}

int main(){
	int sum = positive_sum({1,2,3,4,5});
		int sum2 = positive_sum({1,-2,3,4,5}) << sum << " " << sum2 <<  endl;
		return  0;
}



