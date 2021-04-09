/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static int fuzzy  = 1;

static const char *fonts[] = {
    "Cascadia Code:size=12",
    "Noto Color Emoji:size=12"
};

static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
    /*                         fg         bg       */
    [SchemeNorm]          = { "#bbbbbb", "#222222" },
    [SchemeSel]           = { "#222222", "#ffdd00" },
    [SchemeSelHighlight]  = { "#2233FF", "#ffdd00" },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
    [SchemeOut]           = { "#000000", "#00ffff" },
};

static unsigned int lines          = 0;
static unsigned int lineheight     = 0;
static unsigned int min_lineheight = 8;

static const char worddelimiters[] = " ";
