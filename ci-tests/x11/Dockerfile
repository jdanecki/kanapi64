FROM kanapi/kanapi-cli
MAINTAINER Jacek Danecki <jacek.m.danecki@gmail.com>
COPY kanapi /kanapi_build/kanapi
ENV CI="true"
RUN mkdir -p ${HOME}/ci_src; cd /kanapi_build/kanapi/kanapi_system/kanapi-x11 ; ./install x11 verbose
CMD ["/bin/bash"]
