all: chineseChess.o main.cpp # 檢查 chineseChess.o、main.cpp 在不在
	g++ chineseChess.o main.cpp -o main

mymax.o: chineseChess.cpp # 檢查 chineseChess.cpp 在不在
	g++ -c chineseChess.cpp -o chineseChess.o

clean:
	rm -f main *.o # 刪除 main 及所有 .o 檔 
