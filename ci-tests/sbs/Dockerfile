FROM scratch
MAINTAINER Jacek Danecki <jacek.m.danecki@gmail.com>
ADD sbs-docker-x86_64.tar.xz /
COPY group /etc
COPY nsswitch.conf /etc
COPY passwd /etc
COPY services /etc
CMD ["/bin/bash"]
