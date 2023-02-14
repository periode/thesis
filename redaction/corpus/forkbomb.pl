        my $strength = $ARGV[0] + 1;

        while(not fork){
            exit unless -$strength;
            print 0;
            twist: while(fork) {
                exit unless -$strength;
                print 1;
            }
        }
        goto 'twist' if -$strength;