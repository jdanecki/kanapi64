export PS1='\h:\w\$ '
#alias xterm='xterm -fa fixed -fs 9 -sl 100000'
#alias uxterm='uxterm -fa fixed -fs 9'
ARCH=`busybox uname -m`
. /kanapi_0.8/${ARCH}/packages/bash-completion-2.4/etc/profile.d/bash_completion.sh
export PATH=/kanapi_0.8/${ARCH}/home/bin:/kanapi_0.8/${ARCH}/bin:/kanapi_packages/bin
