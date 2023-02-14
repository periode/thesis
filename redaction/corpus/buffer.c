no_more_data :
    // There should be enough bits still left in the data segment;
    // if so, just break out of the outer while loop.
    if (bits_left >= nbits) break;
/* Uh-oh.  Report corrupted data to user and stuff zeroes into
 * the data stream, so that we can produce some kind of image.
 * Note that this code will be repeated for each byte demanded
 * for the rest of the segment.  We use a nonvolatile flag to ensure
 * that only one warning message appears.
 */
if (!*(state->printed_eod_ptr))
{
    WARNMS(state->cinfo, JWRN_HIT_MARKER);
    *(state->printed_eod_ptr) = TRUE;
}
c = 0; // insert a zero byte into bit buffer
}
}

/* OK, load c into get_buffer */
get_buffer = (get_buffer << 8) | c;
bits_left += 8;
}

/* Unload the local registers */
state->next_input_byte = next_input_byte;
state->bytes_in_buffer = bytes_in_buffer;
state->get_buffer = get_buffer;
state->bits_left = bits_left;

return TRUE;
}