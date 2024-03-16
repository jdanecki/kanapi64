#!/bin/bash
set -x

curl http://ifconfig.me
echo ""
curl https://ifconfig.me
echo ""
wget http://ifconfig.me
echo ""
wget https://ifconfig.me

