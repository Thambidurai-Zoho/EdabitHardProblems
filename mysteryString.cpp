/*
Write a function that takes an integer n and turns it into the ouput. No further instructions.

Examples
mysteryFunc(521) ➞ "151211"

mysteryFunc(5211255) ➞ "1512211225"

mysteryFunc(513515) ➞ "151113151115"
Notes
The result has to do with counting something.
Check the Tests tab for some extra hints.
*/

std::string mysteryFunc(int n) {
	  std::string answer="";
	   std::string mystery = std::to_string(n);
	int count=1;
	for(int i=0;i < mystery.size(); i++){
     //if two numbers are consecutively occured we increase the count value
		 if(mystery[i]==mystery[i+1]){
			  count=count+1;
		 }
		else {
       //store the string with count into the answer string 
			 answer= answer + std::to_string(count)+mystery[i];
			count=1;
		}
	}
	return answer;
}
