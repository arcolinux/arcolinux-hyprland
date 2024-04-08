static const char norm_fg[] = "#e1e4e9";
static const char norm_bg[] = "#12161e";
static const char norm_border[] = "#9d9fa3";

static const char sel_fg[] = "#e1e4e9";
static const char sel_bg[] = "#7192B6";
static const char sel_border[] = "#e1e4e9";

static const char urg_fg[] = "#e1e4e9";
static const char urg_bg[] = "#5E81AB";
static const char urg_border[] = "#5E81AB";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
