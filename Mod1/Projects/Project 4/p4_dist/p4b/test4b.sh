#!/bin/bash
./p4b -1 > neg_4bt.out 2> neg4bt.err
./p4b 0 > zero_4bt.out 2> zero4bt.err
./p4b 4 > small_even_4bt.out 2> small_even_4bt.err
./p4b 3 > small_odd_4bt.out 2> small_odd_4bt.err
./p4b 16 > large_even_4bt.out 2> large_even_4bt.err
./p4b 17 > large_odd_4bt.out 2> large_odd_4bt.err
./p4b 81 > too_big_4bt.out 2> too_big_4bt.err
./p4b 100 > way_too_big_4bt.out 2> way_too_big_4bt.err
