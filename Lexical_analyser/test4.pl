#!/usr/bin/perl
use strict;
use warnings;

my @array;
#initialize a 20-element array with numbers 0,...19
for(my $i=0;$i<20;$i++){
    $array[$i] = $i;
}

#print elements one-by-one using foreach
foreach my $element (@array){
    print "$element\n";
}
