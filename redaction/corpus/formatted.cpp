void texfile::prologue(bool deconstruct)
{
    if (inlinetex)
    {
        string prename = buildname(settings::outname(), "pre");
        std::ofstream *outpreamble = new std::ofstream(prename.c_str());
        texpreamble(*outpreamble, processData().TeXpreamble, false, false);
        outpreamble->close();
    }

    texdefines(*out, processData().TeXpreamble, false);
    double width = box.right - box.left;
    double height = box.top - box.bottom;
    if (!inlinetex)
    {
        if (settings::context(texengine))
        {
            *out << "\\definepapersize[asy][width=" << width << "bp,height="
                 << height << "bp]" << newl
                 << "\\setuppapersize[asy][asy]" << newl;
        }
        else if (pdf)
        {
            if (width > 0)
                *out << "\\pdfpagewidth=" << width << "bp" << newl;
            *out << "\\ifx\\pdfhorigin\\undefined" << newl
                 << "\\hoffset=-1in" << newl
                 << "\\voffset=-1in" << newl;
            if (height > 0)
                *out << "\\pdfpageheight=" << height << "bp"
                     << newl;
            *out << "\\else" << newl
                 << "\\pdfhorigin=0bp" << newl
                 << "\\pdfvorigin=0bp" << newl;
            if (height > 0)
                *out << "\\pdfpageheight=" << height << "bp" << newl;
            *out << "\\fi" << newl;
        }
    }

    // ...
    if (!deconstruct)
        beginpage();
}