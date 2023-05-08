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
      if (radius.width < minimum) {
        *aIsUnfilled = true;
        P.x += signs[0] * minimum;
      } else {
        P.x += signs[0] * radius.width;
      }
      P.y += signs[1] * borderWidth / 2.0f;
    } else {
      P.x += signs[0] * borderWidth / 2.0f;
      if (radius.height < minimum) {
        *aIsUnfilled = true;
        P.y += signs[1] * minimum;
      } else {
        P.y += signs[1] * radius.height;
      }
    }
    return P;
  }