FROM kanapi/kanapi-bbs
MAINTAINER Jacek Danecki <jacek.m.danecki@gmail.com>
COPY kanapi /kanapi_build/kanapi
ENV CI="true"
RUN mkdir -p ${HOME}/ci_src; cd /kanapi_build/kanapi/kanapi_system/kanapi-cli; ./install cli-lib verbose
CMD ["/bin/bash"]
