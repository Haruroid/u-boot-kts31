#! /usr/local/bin/perl
use Time::localtime;
use IO::File;
   
   $pvera = 0;
   $psvt = 0;
   $i = 0;
   if($#ARGV == -1){
      printf("Please input vera file name\n");
      printf("parser_pcie.pl -vera veraFileName -svt svtFileName\n");
      exit;
   }
   while($i <= $#ARGV){
       printf("$i $ARGV[$i]\n");
       if($ARGV[$i] !~ /^-/){
          $i = $i + 1;
       }
       if($ARGV[$i] =~ /^-vera/){
          $pvera = $i+1;
       }
       if($ARGV[$i] =~ /^-svt/){
          $psvt = $i+1;
       }
       $i= $i+1;
   }
   $verafile = $ARGV[$pvera];
   $svtfile  = $ARGV[$psvt];

   print "verafile $verafile \n";
   print "svtfile  $svtfile \n";
   open(SINK, "< $verafile") or die "Couldn't open to read this file. $!";
   open(TUBE, "> $svtfile") or die "Couldn't open to read this file. $!";
   $define_macro_idx = 0;
   $intr = 0;
   $array_idx = 0;
   $inclass = 0;
   $infunc = 0;
   $nextline = 0;
   $gtline = 0;
   $fg = 0;
   LINE: while(<SINK>) {
        if($fg > 0) {
            $fg = $fg + 1;
        }
        $ppline = $pline;
        $pline  = $line;
        chomp;
        $line = $_;
#        if(($line =~ /#define PCIE_/) && ($pre_fg == 0)){
        $pre_fg = $fg;
        if(($line =~ /#define PCIE_/)){
            $fg = 1;
        }
        elsif(length $line == 1) {
            $fg = 0;
            $ww = 0;
            printf("WWZERO::$line\n");
        }
        $str = length $line;
        if(($pre_fg == 0) && ($fg == 1)){
            $ww = 1;
        }
        elsif($ww > 0) {
            $ww++;
        }
        #correct begin end ==> {  } problem at the same line
        printf("WW$str::$line \n");
        if(($ww > 0) && ($ww < 4)) {
             $line = "//".$line;
#            print TUBE $ppline;
#            print TUBE "\n";
#            print TUBE $pline;
#            print TUBE "\n";
            print TUBE $line;
            print TUBE "\n";
#             printf("FG $ww=>$line\n");
        }
        else {
            print TUBE $line;
            print TUBE "\n";
#             printf("$line\n");
        }
   }
   close(SINK);
   close(TUBE);
