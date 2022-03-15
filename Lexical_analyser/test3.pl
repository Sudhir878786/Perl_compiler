#!/usr/bin/perl
use strict;
use warnings;

#initialize an array
my @bases = ("A","C","G","T");

#print two elements of the array
print $bases[0],$bases[2],"\n";

#print the whole array
print @bases,"\n"; #try with double quotes

#print the number of elements in the array
print scalar(@bases),"\n";
