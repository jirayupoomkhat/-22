all: hello

hello:	main.o hello.o  //การสร้างไฟล์
	g++ main.o hello.o -o hello  //แปลงไฟล์
main.o:	main.cpp  //การสร้างไฟล์
	g++ -c main.cpp   //แปลงไฟล์
hello.o:	hello.cpp  //การสร้างไฟล์
	g++ -c hello.cpp  //แปลงไฟล์
clean:
	rm -rf *o hello //ล้างไฟล์ที่สร้างขึั้น