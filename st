#!/bin/bash

seq 1 $1 | shuf | tr '\n' ' ' | xargs ./push_swap
