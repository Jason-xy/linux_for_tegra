#!/bin/bash

script_dir=$(dirname "$(readlink -f "$0")")
echo "The directory of this script is: $script_dir"

cd kernel/kernel-5.10
make clean