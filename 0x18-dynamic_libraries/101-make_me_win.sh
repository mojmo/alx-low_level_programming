#!/bin/bash
wget -P /tmp/ https://github.com/mojmo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
