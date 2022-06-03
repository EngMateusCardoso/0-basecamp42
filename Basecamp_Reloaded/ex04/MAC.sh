#!/bin/sh
ifconfig -a | grep ether | sed 's/^.*ether //' | sed 's/  txqueue.* //' | sed 's/(.*//'