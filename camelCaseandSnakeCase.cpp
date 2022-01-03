/*
Create two functions toCamelCase() and toSnakeCase() that each take a single string and convert it into either camelCase or snake_case. If you're not sure what these terms mean, check the Resources tab above.

Examples
toCamelCase("hello_edabit") ➞ "helloEdabit"

toSnakeCase("helloEdabit") ➞ "hello_edabit"

toCamelCase("is_modal_open") ➞ "isModalOpen"

toSnakeCase("getColor") ➞ "get_color"
Notes
Test input will always be appropriately formatted as either camelCase or snake_case, depending on the function being called.


*/






std::string toSnakeCase(std::string str) {
	std::string snakeCase;
	  for(int i=0;i<str.length();i++){
			   if(str[i]>=65 && str[i]<=90){//if the letter is capital entered into the if loop conditin
					   snakeCase+='_';//adding '_' 
					   snakeCase+=str[i]+32;//convert capital to small after adding the small letter into the snakeCase string 
				 }
			   else snakeCase+=str[i];
		}
	return snakeCase;

}

std::string toCamelCase(std::string str) {
	  std::string camelCase;
	  for(int i=0;i<str.length();i++){
			  if(str[i]=='_'){
					i++;
					camelCase+=(str[i]-32);//convert small to capital and adding the capital letter into the camelCase string 
				}
			 else camelCase+=str[i];//adding the string letters into the camelCase string 
		}
	  return camelCase;
}
