package binary;

public class Finder {
    public static int find(String[] keys, String target) {
        int high = keys.length;
        int low = -1;
        while (high - low > 1) {
            int probe = (low + high) >>> 1;
            if (keys[probe].compareTo(target) > 0)
                high = probe;
            else
                low = probe;
        }
        if (low == -1 || keys[low].compareTo(target) != 0)
            return -1;
        else
            return low;
    }
 }