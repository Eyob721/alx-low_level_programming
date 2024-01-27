#!/bin/bash
wget -P /tmp/ https://github.com/eyob721/alx-low_level_programming/raw/main/0x18-dynamic_libraries/giga_millions/libpapi.so
export LD_PRELOAD='/tmp/libpapi.so'
