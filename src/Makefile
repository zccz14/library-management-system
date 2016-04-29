# Compiler
Compiler=gcc -std=c99

# Determine compilation arguments
SYSTEM=$(shell uname)
ifeq ($(SYSTEM), Darwin)
	INCLUDE=-I/usr/local/mysql/include
	LIBS=-L/usr/local/mysql/lib -lmysqlclient
else
	INCLUDE=-I/usr/include/mysql
	LIBS=-L/usr/lib -lmysqlclient 
endif

OUTPUT=-o app


all:
	$(Compiler) main.c function.c \
		$(LIBS) \
		$(INCLUDE) \
		$(OUTPUT)


