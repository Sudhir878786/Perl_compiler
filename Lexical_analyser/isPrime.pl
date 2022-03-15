#!/usr/bin/perl
#ex4_3.plx
use strict;
use warnings;
print "upto what number you want to calculate primes?", "\n";
my $n = <STDIN>;
my $count=2;
my $j=2;
my $zero_remainder_found = 0;
my $remainder = $n % $j;
for (my $count=2; $count<=$n; $count++) {
    $zero_remainder_found = 0;
    for (my $j=2; $j<$count;$j++) {
        $remainder = $count % $j;
        if ($remainder == 0) {
            $zero_remainder_found = 1;
            last;
        }
    }
    if (!$zero_remainder_found) {
        print "$count is a prime number \n";
       
    }       
}
