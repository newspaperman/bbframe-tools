CC = g++

.PHONY: clean all
all : pts2bbf bbfudpdecap

bbfudpdecap: bbfudpdecap.cpp
	$(CC) -o $@ $<

pts2bbf: pts2bbf.cpp
	$(CC) -o $@ $<


clean:
	rm -f pts2bbf bbfudpdecap
