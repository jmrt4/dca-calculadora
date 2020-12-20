OBJ = calculadora

all:
	g++ -std=c++11 -o ${OBJ} ${OBJ}.cc
run: ${OBJ}
	./${OBJ}
clean:
	rm ${OBJ}