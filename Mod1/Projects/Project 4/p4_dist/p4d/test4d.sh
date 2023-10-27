#!/bin/bash
./p4d -1 > neg_4dt.out 2> neg4dt.err
./p4d 0 > zero_4dt.out 2> zero4dt.err
./p4d 4 > small_even_4dt.out 2> small_even_4dt.err
./p4d 3 > small_odd_4dt.out 2> small_odd_4dt.err
./p4d 16 > large_even_4dt.out 2> large_even_4dt.err
./p4d 17 > large_odd_4dt.out 2> large_odd_4dt.err
./p4d 81 > too_big_4dt.out 2> too_big_4dt.err
./p4d 100 > way_too_big_4dt.out 2> way_too_big_4dt.err
