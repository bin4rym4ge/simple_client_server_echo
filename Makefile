default: client server
	g++ -o ./bin/main.o -c ./main.cpp
	g++ -o ./bin/cliSrv ./bin/main.o

client:
	g++ -o ./bin/cli.o -c ./cli.cpp
	g++ -o ./bin/cli ./bin/cli.o

server:
	g++ -o ./bin/srv.o -c ./srv.cpp
	g++ -o ./bin/srv ./bin/srv.o

install:
	cp ./bin/cliSrv ~/bin/
	chmod +x ~/bin/cliSrv
