CC = g++

.PHONY: clean all
all : ddbbf 

ddbbf: ddbbf.cpp
	$(CC) -o $@ $<


clean:
	rm -f ddbbf
