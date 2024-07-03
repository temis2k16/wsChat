FROM gcc:latest

RUN apt update && apt install cmake libboost1.81-all-dev -y; exit 0

# Workaround for problematic gfortran installation
RUN apt remove gfortran && apt autoremove

WORKDIR /src

COPY . .

RUN mkdir build && cd build && cmake .. && make

EXPOSE 8080

ENTRYPOINT [ "build/ChatServer", "0.0.0.0", "8080" ]