CC=g++
binaries=bagexam bagtest bagbsttestmalcolm btmtest
all: clean $(binaries)

bagtest: bagtest.cpp
	$(CC) bagtest.cpp -g -o bagtest

bagexam: bagexam.cpp
	$(CC) bagexam.cpp -g -o bagexam
    
BagBst: bagbstMalcolmTest.cpp
	$(CC) bagbstMalcolmTest.cpp -g -o bagbsttestmalcolm
BinTree: bintreeMalcolmTest.cpp
	$(CC) bintreeMalcolmTest.cpp -g -o btmtest

.PHONY: clean

clean:
	rm -f $(binaries) *.o

