/*
std::vector<std::vector<int>> multiplicity(std::vector<int> arr) {
	 std::vector<std::vector<int>> multiplicity;
	 
	 int count[10]={0},index=0;
	 for(int i = 0;i< arr.size();i++){
		  count[arr[i]]++;
		  if(count[arr[i]]==1)
				multiplicity[index++].push_back(arr[i]);
	 }
	
	 for(int i=0;i<multiplicity.size();i++){
		   multiplicity[i].push_back(count[multiplicity[i][0]]);
	 }
	
	return multiplicity;
	
}

*/

std::vector<std::vector<int>> multiplicity(std::vector<int> arr) {
	 std::vector<std::vector<int>> multiplicity;
	 
	 int count[10]={0},index=0;
	 for(int i = 0;i< arr.size();i++){
		  count[arr[i]]++;
		  if(count[arr[i]]==1)
				multiplicity[index++].push_back(arr[i]);//without duplicates push into the multiplicity vector
	 }
	
	 for(int i=0;i<multiplicity.size();i++){
		   multiplicity[i].push_back(count[multiplicity[i][0]]);//push the count value into the multiplicity vector
	 }
	
	return multiplicity;
	
}
