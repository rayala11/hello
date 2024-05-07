#include <iostream>
// why are vectors more useful than Arrays?
#include <vector>

using namespace std;
// Fixed in size, always initialize arrays
// first element is at index 0, last element is at index size-1
// No bounds check, make sure you do not go overbound, will cause issues
//iteration is often used in the process, looping

// element_type array_name [constant number of elements] {initialization list} .... how to decalare an array

/*
int test_scores [5] {100, 95, 99};  the remaining 2 scores will be set at 0!!

int high_school_per_level [] {3,5}; size automatically calculated no size given

const int days_in_year {365};
double hi_temperatures [days_in_year];

*/

/* How to access arrays?

int test_scores [5] {100,99,98,97}

cin >> test_scores[0]
cout << test_scores[0]

test_scores[0] = 90, assignment statement
*/

int main() {

   /*char vowels [] {'a','e','i','o','u'};

   cout << vowels[0] << " is the first element of the array" << endl;
   cout << vowels[4] << " is the last element of the array " << endl;

   cout << "I am going to change the first element to R " << endl;
   vowels[0] = 'R';

   cout << vowels[0] << " is the updated version of array " << endl;
   */

  int test_scores [5];

  cout << "Enter 5 test scores " << endl;

  cin >> test_scores[0];
  cin >> test_scores[1];
  cin >> test_scores[2];
  cin >> test_scores[3];
  cin >> test_scores[4];

  cout << "Display enter numbers " << endl;

  cout << "notice when you outpit test_scores " << test_scores << endl;
}
