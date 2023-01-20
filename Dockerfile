FROM gcc:latest

COPY ./src /usr/src/Fibonacci

WORKDIR /usr/src/Fibonacci

RUN g++ -o Fibonacci fibonacci.cpp

CMD ["./Fibonacci"]