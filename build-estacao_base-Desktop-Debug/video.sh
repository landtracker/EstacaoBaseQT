#!/bin/bash
nc -l 2234 | mplayer -fps 60 -demuxer h264es -cache 256 - >/dev/null  2<&1 &
