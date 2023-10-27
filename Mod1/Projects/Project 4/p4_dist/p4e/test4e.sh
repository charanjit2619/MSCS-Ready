#!/bin/bash
./p4e -1 > neg_4et.out 2> neg4et.err
./p4e 0 > zero_4et.out 2> zero4et.err
./p4e 4 > small_even_4et.out 2> small_even_4et.err
./p4e 3 > small_oddt.out 2> small_odd_4et.err
./p4e 16 > large_even_4et.out 2> large_even_4et.err
./p4e 17 > large_odd_4et.out 2> large_odd_4et.err
./p4e 81 > too_big_4et.out 2> too_big_4et.err
./p4e 100 > way_too_big_4et.out 2> way_too_big_4et.err
