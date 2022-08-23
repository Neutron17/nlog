CC = cc

PNAME = libnlog

SRC  = $(shell find src -name "*.c")
OBJ  = $(SRC:.c=.o)
BIN = build
PREFIX = /usr
instDir = $(PREFIX)/include/nlog

all: build

# run tests
run:
	$(MAKE) -C tests

build: $(OBJ)
	$(CC) -fPIC -rdynamic -shared -Lstatic -o $(BIN)/$(PNAME).so $(OBJ)

install: build $(instDir)
	cp $(BIN)/$(PNAME).so $(PREFIX)/lib/
	cp src/*.h $(instDir)

clean:
	rm $(BIN)/* $(OBJ)

%.o: %.c
	$(CC) -Wall -fPIC -o $@ -c $< $(CCFLAGS)

$(instDir):
	mkdir $(instDir)

