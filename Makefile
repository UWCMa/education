TARGET = hello.exe
PREFIX = education_build/bin

.PHONY: all clean install uninstall

all:	$(TARGET)

clean:
	rm -rf $(PREFIX)/*

main.o:	main.cpp
	g++ -c -o $(PREFIX)/main.o main.cpp
$(TARGET):	main.o
	g++ -o $(PREFIX)/$(TARGET) $(PREFIX)/main.o
install:
	install $(TARGET) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(TARGET)