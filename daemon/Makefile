CC=gcc
SOURCEFILE=main.c
TARGETFILE=daemon
CFLAGS= -o2 -o3 -Wunused-result -lpthread

std:
	$(CC) -c -o networking networking.c
	${CC} -g -o ${TARGETFILE} networking $(SOURCEFILE) $(CFLAGS)

rmsrc:
	rm -f main.cpp
	rm -f common.h
