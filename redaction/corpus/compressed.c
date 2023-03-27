
Panel_Layout layout(this, x, y, my_width);
layout.window_title(title);
 
layout.row();
if(layout.push_button("Auto Snap")) {
    do_auto_snap(this);
}
 
layout.row();
if(layout.push_button("Reset Orientation"))
{
    // ...
}
 
// ...
layout.complete(this);