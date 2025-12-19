#!/bin/bash

mkdir build
cd build
cmake -DCMAKE_TLS_CAINFO=/kanapi_0.12/packages/openssl-3.6.0/ssl/cert.pem ..
