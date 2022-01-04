/*
Write a function that returns true if two arrays, when combined, form a consecutive sequence. A consecutive sequence is a sequence without any gaps in the integers, e.g. 1, 2, 3, 4, 5 is a consecutive sequence, but 1, 2, 4, 5 is not.

Examples
consecutiveCombo([7, 4, 5, 1], [2, 3, 6]) ➞ true

consecutiveCombo([1, 4, 6, 5], [2, 7, 8, 9]) ➞ false

consecutiveCombo([1, 4, 5, 6], [2, 3, 7, 8, 10]) ➞ false

consecutiveCombo([44, 46], [45]) ➞ true
Notes
The input arrays will have unique values.
The input arrays can be in any order.
*/

using namespace std;
bool consecutiveCombo(vector<int> a1, vector<int> a2) {
	  vector<int> a3;
    merge(a1.begin(),a1.end(),a2.begin(),a2.end(),a3.begin());//merge the two vectors into the third vector
	  sort(a3.begin(),a3.end());//sort the third vector
	
	  for(int i = 0; i < a3.size()-1; i++){
			  if(a3[i]+1 != a3[i+1]){//check the numbers are consecutive are or not
					return false;//if not consecutive return false
				}
		}
  return true;//if the combo of numbers are consecutive return true
}
