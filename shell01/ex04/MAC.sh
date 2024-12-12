#!/bin/sh
ifconfig -a | grep -E '([0-9a-z]{2}:){5}[0-9a-z]{2}' | awk '{print $2}'
