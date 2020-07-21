//32 bit 숫자가 파일에 4바이트의 크기로 저장되어 있다(network byte order). 
//2개의 파일을 입력받아 숫자를 읽어 들여 그 합을 출력하는 프로그램을 작성하라.

#include "hexReader.h"

int main (int argc, char* argv[]){
	
	if (argc != 3){
		printf("invalid arg num");
		return -1;
	}
	
	int i;
	uint32_t sum;
	uint32_t num[2] = {0,0};

	for (i=1 ; i<3 ; i++){		
		try{
			num[i-1] = readFile(argv[i]);
		} catch (int e){
			return -1;
		}
	}

	sum = num[0] + num[1];
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", 
			num[0], num[0], num[1], num[1], sum, sum);

	

}