#include "hexReader.h"

uint32_t readFile(char* filePath){
	
	uint32_t buf = 0;
	int size;

	FILE* file = fopen(filePath, "r");

	fseek(file, 0, SEEK_END);
	size = ftell(file);

	if (size != 4){
		printf("File size must be 4 bytes");
		throw -1;
	}
	
	fseek(file, 0, SEEK_SET);
	fread(&buf, 1, sizeof(uint32_t), file);
	fclose(file);	
	return ntohl(buf);
}