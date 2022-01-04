/*
Create a function that creates a box based on dimension n.

Examples
makeBox(5) ➞ [
  "#####",
  "#   #",
  "#   #",
  "#   #",
  "#####"
]

makeBox(3) ➞ [
  "###",
  "# #",
  "###"
]

makeBox(2) ➞ [
  "##",
  "##"
]

makeBox(1) ➞ [
  "#"
]
Notes
N/A
*/


std::vector<std::string> makeBox(int n) {
		std::vector<std::string> makeBox;
	for(int i = 0 ; i < n ; i++){
		  std::string s;
		  for(int j = 0; j < n ; j++){
				  if(i==0||j==0||i==n-1||j==n-1){//first row ,first column, last row and last column only have a "#" . 
						  s+="#";
					}
				  else s+=" ";//else we give space for the string.
			}
		 makeBox.push_back(s);//push back the string into the vector of strings.
		 s="";
	}
	return makeBox;
}
