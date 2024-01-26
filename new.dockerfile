# Docker

```jsx
Docker needs the wsl update use wsl —update or manually update using the windows docs 
```

by installing root certificates in the system and restarting

image is like os jo ki container naam ki machine pe run karta hai 

```jsx
docker run -it ubuntu    // docker command for running a container which has ubuntu image in it
```

-it means don’t disconnect the terminal from the container running

commands are docker container ls  //list of running containers

```jsx
docker container ls -a //list of all containers if stopped also
```

```jsx
docker start <name of container>
```

```jsx
docker stop <name of container>
```

```jsx
docker exec <name of the container>  //executes the docker also if closed
```

```jsx
docker exec -it <name> bash (<command>)  //executes and permanently connects the docker container to the terminal
```

ctrl +D will help you exit 

```jsx
docker image ls      //gives list of images present
```

we can use any image like node , postgres etc from the github of images called as docker hub

lets understand how the images are executed or run

they can run by using exposing the PORT outside the container like is the image is running on the

[localhost:8000](http://localhost:8000) so we cannot acess it on the local machine until the port is exposed

```docker
docker run -it -p 8000:1025 node
```

means it andar ka jo port haina 1025 usko meri machine ke 8000 pe run kardo , image ka naam hai node.  

```docker
docker run -it -p 8000:8000 -e key=value -e key=value node 
 
//-e used to pass the environment variable with key having a value 

```

```docker
//Dockerization of our own node.js server
FROM ubuntu  

RUN apt-get update    
RUN apt-get install -y curl
RUN curl -sL https://deb.nodesource.com/setup_18.x | bash -
RUN apt-get upgrade -y
RUN apt-get install -y nodejs

COPY package.json package.json
COPY package-lock.json package-lock.json
COPY main.js main.js

RUN npm install

ENTRYPOINT [ "node", "main.js" ]
```

```docker
docker build -t mynodejs . 
```

in production level we need to run many images at the same time example : postgres , redis , mail hog  so if you want to run them at very same time the DOCKER COMPOSE would be used .

```docker
//docker-compose.yml

version: "3.8"

services:
  postgres:
    image: postgres # hub.docker.com
    ports:
      - "5432:5432"
    environment:
      POSTGRES_USER: postgres
      POSTGRES_DB: review
      POSTGRES_PASSWORD: password

  redis:
    image: redis
    ports:
      - "6379:6379"
```

```docker
docker compose up // would run all the docker images
```

```docker
docker compose down // would shut down all the docker images runnning
```

```docker
docker compose up -d // would run all the docker images in the background also d is for detached mode
```

```docker
docker run --it --network=none nodejs  //means node js image it not give internnet access 

```

```docker
docker run --it --network=bridge nodejs  //means node js image it is give internnet access but via a bridge between the host and the image
```

```docker
docker run --it --network=host nodejs  //means the host and the image are on the same network
```

```docker
docker network create -d bridge kartjs  // create -d is create driver bridge name kartjs
```

when you create your own network with —name  and then you connect the images to that network

so now those two can communicate with each other on that network 

you can use ping (image name)

to get the network’s internet usage packages.

```docker
docker network inspect (name of network) // you can see the information of the contaniners attached to it

```

volumes in docker: 

docking volume in docker container 

```docker
docker run -it -v (address of the folder of the volume):(location of container folder) ubuntu (name of container)
```

we can make our own volumes more you can read on docker hub

the layers code of docker file is being read as line by line and being cached into it 

but if you lets say change 4th line of the code then the below lines are re-executed in the same order again and gets cached again.
