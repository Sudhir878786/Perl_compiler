

#!/usr/bin/perl
use strict;
use warnings;

#TASK: Concatenate two given sequences, 
#find the length of the new sequence and
#print out the second codon of the sequence

#assign strings to variables
my $DNA = "GATTACACAT";
my $polyA = "AAAA";

#concatenate two strings
my $modifiedDNA = $DNA.$polyA;

#calculate the length of $modifiedDNA and
#print out the value of the variable and its length
my $DNAlength = length($modifiedDNA);
print "Modified DNA: $modifiedDNA has length $DNAlength\n";

#extract the second codon in $modifiedDNA
my $codon = substr($modifiedDNA,3,3);
print "Second codon is $codon\n";
