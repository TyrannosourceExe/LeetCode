CC     = g++
ASAN_FLAGS = -fsanitize=address -fno-omit-frame-pointer -Wno-format-security
CFLAGS := -Wall -Werror -std=c++11 -g3

ARCH := $(shell uname)
ifneq ($(ARCH),Darwin)
  LDFLAGS += -lpthread
endif

# default is to build with address sanitizer enabled
all: main

# the noasan version can be used with valgrind
all_noasan: main_noasan 

main: main.cc
	$(CC) -o $@ $(CFLAGS) $(ASAN_FLAGS) $^ $(LDFLAGS) $(ASAN_LIBS)



main_noasan: main_noasan.o
	$(CC) -o $@ $(CFLAGS) $^ $(LDFLAGS)

echoserver_noasan: echoserver_noasan.o
	$(CC) -o $@ $(CFLAGS)  $^ $(LDFLAGS)

%_noasan.o : %.cc
	$(CC) -c -o $@ $(CFLAGS) $<

%.o : %.cc
	$(CC) -c -o $@ $(CFLAGS) $(ASAN_FLAGS) $<

.PHONY: clean

clean:
	rm -fr *.o