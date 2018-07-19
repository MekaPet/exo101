#!/bin/sh
IP=cat | ifconfig | grep "inet " | cut -d ' ' -f 2
if !($IP)
then
echo "I am lost!"
fi