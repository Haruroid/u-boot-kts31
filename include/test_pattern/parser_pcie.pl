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
   @array = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   @define_macro = {FIN,FIN,FIN,FIN,FIN,FIN,FIN,FIN,FIN};
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
        if($line =~ /_reg_addr /){
            $fg = 1;
        }
        #correct begin end ==> {  } problem at the same line
        #printf("WW::$line\n");
        if($fg == 2) {
            print TUBE $ppline;
            print TUBE "\n";
            print TUBE $pline;
            print TUBE "\n";
            print TUBE $line;
            print TUBE "\n";
         #  printf("$ppline\n");
         #  printf("$pline\n");
         #  printf("$line\n");
            $fg = 0;
        }
   }
   close(SINK);
   close(TUBE);
