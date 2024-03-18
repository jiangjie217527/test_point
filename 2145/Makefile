ifdef SYSTEMROOT
RM = del
else ifeq ($(shell uname),Linux)
EM = rm -f
endif


SRC = date_gen.cpp
EXE = gen
SOL = solu
STD = std.cpp
RBS = a.out a.exe

# arg1 output file
# 2 N
# 3 Cmax
# 4 Cmin
# 5 Tmax
all:${EXE}
	./${EXE} 1.in 1000 30000000 20000000 2000 0
	./${EXE} 2.in 1000 30000000 20000000 20000 0
	./${EXE} 3.in 1000 30000000 20000000 200000 0
	./${EXE} 4.in 1000 30000000 20000000 2000000 0
	./${EXE} 5.in 1000 30000000 20000000 10000000 0
	./${EXE} 6.in 10000 30000000 20000000 2000 0
	./${EXE} 7.in 20000 30000000 20000000 200000 100000
	./${EXE} 8.in 30000 30000000 20000000 10000000 0
	./${EXE} 9.in 50000 30000000 20000000 1000 0
	./${EXE} 10.in 50000 30000000 20000000 10000000 1000000

${EXE}:
	g++ ./${SRC} -o ${EXE}

sol:${SOL}
	./${SOL} 1
	./${SOL} 2
	./${SOL} 3
	./${SOL} 4
	./${SOL} 5
	./${SOL} 6
	./${SOL} 7
	./${SOL} 8
	./${SOL} 9
	./${SOL} 10

${SOL}:
	g++ ./${STD} -o ${SOL} -D _OUTPUT_

clean:
	${RM} ${EXE} ${SOL} ${RBS}
