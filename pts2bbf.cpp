#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

// using namespace std;   // fixes https://github.com/newspaperman/bbframe-tools/issues/4

std::istream* inbuf;
std::ostream* outbuf;
int size;

int main(int argc, char** argv) {
	inbuf = &std::cin;
	outbuf = &std::cout;
	size=200;
	char* packets= new char[size*188];
	while(1) {
		inbuf->read(packets,size * 188);
		if(inbuf->fail()) break;
		unsigned char *p;
		for(int i=0; i<size*188;i+=188) {
			int pid=(unsigned char)(packets[i+1]);
			pid&=0x01F;
			pid<<=8;
			pid|=(unsigned char)(packets[i+2]);
			
			if(pid!=0x010e && pid!=0x0118) {
				continue;

			}
			if((packets[i+8]&0xff)==0xb8) { //START INDICATOR
				outbuf->write(&packets[i+8],(unsigned char) packets[i+7]);
			} else {
				outbuf->write(&packets[i+9],(unsigned char) packets[i+7] -1);
			}
		}
	}
	return 0;
}
