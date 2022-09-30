#!/bin/bash

# script that creates a static library

gcc -c *c
ar rc liball.a *.o
