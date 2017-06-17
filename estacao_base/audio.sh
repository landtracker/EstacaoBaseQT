#!/bin/bash
#netcat -k -l -p 7777 | aplay > /dev/null 2>&1 &
nc -l 7777 | aplay > /dev/null 2>&1 &