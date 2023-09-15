if (style == StyleBorderStyle::Dotted) {
    // If only this side is dotted, other side draws the corner.
    //
    //  otherBorderWidth + borderWidth / 2.0
    // |<------->|
    // |         |
    // +------+--+--------
    // |##  ##| *|*  ###
    // |##  ##|**|**#####
    // |##  ##|**+**##+##
    // |##  ##|* P *#####
    // |##  ##| ***  ###
    // |##  ##+-----------
    // |##  ##|  ^
    // |##  ##|  |
    // |##  ##| first dot is not filled
    // |##  ##|
    //
    //      radius.width
    // |<----------------->|
    // |                   |
    // |             ___---+-------------
    // |         __--     #|#       ###
    // |       _-        ##|##     #####
    // |     /           ##+##     ##+##
    // |   /             # P #     #####
    // |  |               #|#       ###
    // | |             __--+-------------
    // ||            _-    ^
    // ||          /       |
    // |         /        first dot is filled
    // |        |
    // |       |
    // |      |
    // |      |
    // |      |
    // +------+
    // |##  ##|
    // |##  ##|
    // |##  ##|
    Float minimum = otherBorderWidth + borderWidth / 2.0f;
    if (isHorizontal) {
      // ...
    } else {
      // ...
    }
    return P;
  }
