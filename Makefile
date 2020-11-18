CC = g++

.PHONY: clean all
all : pts2bbf 

pts2bbf: pts2bbf.cpp
	$(CC) -o $@ $<


clean:
	rm -f pts2bbf
