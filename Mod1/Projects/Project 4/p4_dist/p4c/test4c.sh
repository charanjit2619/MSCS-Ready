#!/bin/bash
./p4c -1 > neg_4ct.out 2> neg4ct.err
./p4c 0 > zero_4ct.out 2> zero4ct.err
./p4c 4 > small_even_4ct.out 2> small_even_4ct.err
./p4c 3 > small_odd_4ct.out 2> small_odd_4ct.err
./p4c 16 > large_even_4ct.out 2> large_even_4ct.err
./p4c 17 > large_odd_4ct.out 2> large_odd_4ct.err
./p4c 81 > too_big_4ct.out 2> too_big_4ct.err
./p4c 100 > way_too_big_4ct.out 2> way_too_big_4ct.err
