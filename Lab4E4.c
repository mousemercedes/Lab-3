//
//
//
//
//
//
//

int main()
{
	char str1[5] = {r,a,i,n,\0};
	char str2[8] = {r,a,i,n,b,o,w,/0};
	str2 = str_copy(str1,str2);
	return 0;
}

// what is the return? 
char* str_copy(char arr1[], char arr2[]) 
{
	arr2 = arr1;
	return arr2;
}
