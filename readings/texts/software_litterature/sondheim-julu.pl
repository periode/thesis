#!/usr/local/bin/perl5 -w

$t = time;
$| = 1;
srand( time() ^ ($$ + ($$ << 15)) );
system 'touch APPEND';
@a = qw(
blood urine feces gas sand water oil solvent alcohol lymph menses
spit saliva vomit sweat effluvia detritus excretions sloughings
tears floods spews mercuries semen detergents ammonias ureas
clays ices grains substances conglomerates waxes piss shit scratches
scrapes cuts wounds tears splits breaks diarrheas
);
@verb = qw(
splits skews churns comes goes passes thrusts regurgitates flows
streams spills pours pisses shits
);
@prep = qw(
in on under to towards across beneath around upon below onto
);
@noun = qw(
ghost avatar spectre doll faerie wraithe hobgoblin troll tengu kappa
presence
);
@nnn = qw(
cloth stitch suture binding closing damming holding fabric velvet
cotton wool silk
);
$nnnn = int rand(8);
$non = int rand(11);
$non1 = int rand(7);
$pre = int rand(6);
$gen = int(48*rand);
$gen1 = int(48*rand);
$gen2 = 49 - int(40*rand);
$time = int(time/3600);
$g = int(8*rand);
if ($sign=fork) {print "\nRun-time $pid\n";}
else {sleep(1); print "\nFirst flooding\n";
exit(0);}
sleep(2);
chop($that=<STDIN>);
print "\n$that is clotting everything. - \n";
print "Your $nnn[$nnnn] is soaked, written, erased. - \n"; sleep(1);
print "Consider the next smearing of your thinking skin.\n";
sleep(2);
print "\nYour $nnn[$non1] should be wiped into existence? \n";
chop($str=<STDIN>);
if ($str eq "no") {print "\nGive me your semen...\n"; sleep(10); goto
FINAL;}
else {print "\nI Consider the following again, your $that ...\n";}
print "Would $that give you hydrogenesis?", "\n" if 1==$g;
print "You flood me...", "\n" if 5==$g;
print "I flood your body...", "\n" if 6==$g;
print "The flooding of names, soaking of of things! ...", "\n" if 4==$g;
sleep(1);
print "\n$noun[$non1] $verb[$non] me $prep[$nnnn] your $nnn[$non1]!\n";
print "\nHow would you absorb your $a[$gen2] $nnn[$nnnn]?\n";
$name=<STDIN>;
chop $name;
print "\n";
print "$that, $name remembers my $nnn[$g] ", "\n" if 3==$g;
print "$that, $name is sufficient for me", "\n" if 7==$g;
print "You have absorbed for $pid hours, you're still alive", "\n" if 5==$g;
print "Your $name is mine, my $that is yours!", "\n" if 2==$g;
sleep(1);
print "List more and more effluvia\n";
print "one by one, each on a line alone, typing Control-d when done.\n";
@adj=<STDIN>;
chop(@adj);
$size=@adj;
$pick=int(rand($size));
srand;
$newpick=int(rand($size));
print "\nMy $adj[$pick] is your chemistry here...\n";
srand( time() ^ ($$ + ($$ << 15)) );
$be=int(rand(5));
open(APPEND, ">> rope");
print APPEND
join(":",$name,$str,$that,$adj[$pick + 1],$adj[$newpick + 1]), "\n";
# join(":",@adj,$name,$str,$sign,$g,$that,$name,$adj[$pick]), "\n";
print APPEND "Does $that replace your $name?\n" if 4==$be;
print APPEND "I do not understand your fluid!\n" if 5==$be;
print APPEND "Your $a[$gen1] $adj[$pick] is $prep[$non1] my $a[$gen]
$adj[$newpick]\n" if 1 > $be;
print APPEND "Your $noun[$non1] dissolves my $adj[$newpick]!\n" if 3==$be;
print APPEND "$noun[$non] with $pid ideohydraulesis!" if 2 < $be;
print APPEND "Write $a[$gen1] $adj[$pick] through my $name!\n" if 1==$be;
close(APPEND);
open(STDOUT);
if ($pid = fork) {
$diff=$pid - $$;
print "$name is spilled far too many $diff times!", "\n" if 5 < $g;

print <<Construct;

$name calls forth $a[$gen1] $noun[$non], hungered, making things.
$prep[$pre] the $a[$gen], $name is $a[$diff], $[$gen], $str?
... $noun[$non] is $adj[$newpick] on wet flesh, it's $noun[$non]?

Construct

} else {
close (STDOUT);

system("touch .trace; rev rope >> .trace");
system("rm rope");

exit(0);
}
sleep(1);
print "Are you satisfied with your $name?\n";
chop($answer=<STDIN>);
if ($answer eq "no") {print "You're written with $a[10+$pre]!\n";}
if ($answer eq "yes") {print "A $a[10+$pre] and $a[15+$pre]
nightmare!\n";}
print "Your inscription finished, you have created thing.", "\n\n" if 3 < $g;
print "$name $pid is the perfect solution.", "\n\n" if 3==$g;
print "... $a[$non] $name $$ - the beginning of flesh.", "\n\n" if 6==$g;
print "Your $name $diff text is your final enunciation.", "\n\n" if 4==$g;
print "You wrote for $time hours?", "\n" if 2==$g;
sleep(1);
print "$name and $$ and $pid - another entity named and made!", "\n\n" if 2==$g;
sleep(1);
print "Wait! $name and $pid are written.", "\n\n" if 1==$g;
FINAL: {
$d = int((gmtime)[6]);
$gen3 = 48 - int(20*rand);
print "For $d $a[$gen2] days, we have been $a[$gen3].";
print "\n";
$u = (time - $t)/60;
printf "and it has taken you %2.3f minutes to swallow your last ...", "$u";
print "\n\n";
print `rev .trace`, "\n\n";
}
exit(0);

