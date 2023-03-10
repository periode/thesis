 * Part 1 -- Initial checks
 *
 *      * . called by
 *      |   MAC clients
 *      v                     . . No
 *  +--------+  +-----------+ .   +-------------------+  +====================+
 *  | mac_tx |->| device    |-*-->| mac_protect_check |->v Is this the simple v
 *  +--------+  | quiesced? |     +-------------------+  v case? See [1]      v
 *              +-----------+            |               +====================+
 *                  * . Yes              * failed                 |
 *                  v                    | frames                 |
 *             +--------------+          |                +-------+---------+
 *             | freemsgchain |<---------+          Yes . *            No . *
 *             +--------------+                           v                 v
 *                                                  +-----------+     +--------+
 *                                                  |   goto    |     |  goto  |
 *                                                  |  Part 2   |     | SRS TX |
 *                                                  | Entry [A] |     |  func  |
 *                                                  +-----------+     +--------+
 *                                                        |                 |
 *                                                        |                 v
 *                                                        |           +--------+
 *                                                        +---------->| return |
 *                                                                    | cookie |
 *                                                                    +--------+