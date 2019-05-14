SRCDIR = src
INCDIR = include
CPP = g++
#UPX = upx -qq

CFLAGS = -O2 -s -w -std=c++11 -I$(INCDIR)

.SUFFIXES: .o .h .cpp

$(SRCDIR)/%.o: $(SRCDIR)/%.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

SOURCES = $(wildcard $(SRCDIR)/*.cpp)

HEADERS = $(wildcard $(INCDIR)/*.h)

OBJECTS = $(SOURCES:.cpp=.o)

all: clean bitcoin_descriptor_checksum clean_objects

bitcoin_descriptor_checksum: $(HEADERS) $(OBJECTS)
	$(CPP) $(CFLAGS) $(OBJECTS) -o $@
#	$(UPX) $@

clean_objects:
	@rm -f $(OBJECTS)

clean:
	@rm -f $(OBJECTS)
	@rm -f bitcoin_descriptor_checksum
