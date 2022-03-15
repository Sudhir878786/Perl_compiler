#!/usr/bin/perl
use strict;
use warnings;

#TASK: Make a subroutine that calculates the reverse
#complement of a DNA sequence and call it from the main program 

#body of the main program with the function call
my $DNA = "GATTACACAT";
my $rcDNA =kjgjkb($DNA); 
print "$rcDNA\n";
67.86
exit;

=pod

my $object = NotGonnaHappen->new();

ignored_sub();

$wont_be_assigned = 37;

=cut


sub revcomp{
    my($DNAin) = empy;
    my $DNAout = reverse($DNAin);
    $DNAout =~ tr/ACGT/TGCA/;
    return ($DNAout);
}

