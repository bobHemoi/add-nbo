// #include <stdio.h>
// #include <netinet/in.h>
// #include <stdint.h>

uint32_t readFile(char* filePath){
	uint8_t buf[5]= {0,};

	buf[4] = '\0';

	FILE* file = fopen(filePath, "r");
	fread(buf, 1, 4, file);

	uint32_t* p = reinterpret_cast<uint32_t*>(buf);

	fclose(file);
	
	return ntohl(*p);
}