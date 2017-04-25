/* See LICENSE file for copyright and license details. */


/* appearance */
#define BOTTOM_BAR_HEIGHT 15

static const char font[]            = "Monaco-9";

/* term colors */
static const char normbordercolor[] = "#2D2D2D";
static const char normbgcolor[]     = "#000000";
static const char normfgcolor[]     = "#00CC00";
static const char selbordercolor[]  = "#00FF11";
static const char selbgcolor[]      = "#202020";
static const char selfgcolor[]      = "#66FF00";

static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const Bool showbar           = True;     /* False means no bar */
static const Bool topbar            = True;     /* False means bottom bar */
static const int dzenbar = 1; /* Monitor on which dzen bar exists - -1 means no bar */

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "VM1", "VM2", "VM3", "IRC", "XMPP", "STUFF", "MAIL", "MISC", "WEB3", "WEB2", "WEB1" };

static const Rule rules[] = {
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            True,        -1 },
};

/* layout(s) */
static const float mfact      = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster      = 1;    /* number of clients in master area */
static const Bool resizehints = False; /* True means respect size hints in tiled resizals */

#include "grid.c"
#include "fibonacci.c"
#include "bstack.c"
#include "bstackhoriz.c"
#include "gaplessgrid.c"

static const Layout layouts[] = {
    /* symbol     arrange function */
    { "[]=",    tile },    /* first entry is default */
    { "><>",    NULL },    /* no layout function means floating behavior */
    { "[M]",    monocle },
    { "===",    bstackhoriz },
    { "TTT",    bstack },
    { "(@)",    spiral },
    { "[\\]",   dwindle },
    { "HHH",    grid },
    { "###",    gaplessgrid },
};

/* key definitions */
#define MODALT Mod1Mask
#define MODKEY Mod4Mask

#define TAGKEYS(KEY,TAG) \
    { MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
    { MODKEY|MODALT,                KEY,      toggleview,     {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
    { MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-fn", font, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbgcolor, "-sf", selfgcolor, NULL };
static const char *upvol[] = { "amixer", "-c", "0", "set", "Master", "5+", NULL};
static const char *downvol[] = { "amixer", "-c", "0", "set", "Master", "5-", NULL};
static const char *togglevol[] = { "amixer", "set", "Master", "toggle", NULL};
static const char *screensaver[] = { "xscreensaver-command", "--lock", NULL};
static const char *screenshot[] = { "scrot",  NULL};
static const char *esxkmap[] = { "setxkbmap", "es", NULL};
static const char *usxkmap[] = { "setxkbmap", "us", NULL};
static const char *dexkmap[] = { "setxkbmap", "de", NULL};

/* shortkeys */
static const char *termcmd[] = {"urxvt", NULL};

static Key keys[] = {
    /* modifier                     key        function         argument */
    { MODKEY|ShiftMask,             XK_p,       spawn,           {.v = esxkmap } },
    { MODKEY|ShiftMask,             XK_u,       spawn,           {.v = usxkmap } },
    { MODKEY|ShiftMask,             XK_j,       spawn,           {.v = dexkmap } },
    { MODKEY|ShiftMask,             XK_s,       spawn,           {.v = screenshot } },
    { MODKEY|ShiftMask,             XK_l,       spawn,           {.v = screensaver } },
    { MODKEY,                       XK_F3,      spawn,           {.v = upvol } },
    { MODKEY,                       XK_F2,      spawn,           {.v = downvol } },
    { MODKEY,                       XK_F1,      spawn,           {.v = togglevol } },
    { MODKEY|ShiftMask,             XK_Return,  spawn,           {.v = termcmd } },
    { MODKEY|MODALT,                XK_b,       togglebar,       {0} },
    { MODKEY,                       XK_p,       spawn,           {.v = dmenucmd } },
    { MODKEY,                       XK_j,       focusstack,      {.i = +1 } },
    { MODKEY,                       XK_k,       focusstack,      {.i = -1 } },
    { MODALT,                       XK_Tab,     focusstack,      {.i = -1 } },
//    { MODKEY,                       XK_i,       incnmaster,      {.i = +1 } },
//    { MODKEY,                       XK_d,       incnmaster,      {.i = -1 } },
    { MODKEY,                       XK_h,       setmfact,        {.f = -0.05} }, { MODKEY,                       XK_l,       setmfact,        {.f = +0.05} },
    { MODKEY,                       XK_Return,  zoom,            {0} },
    { MODKEY,                       XK_Tab,     view,            {0} },
    { MODKEY,                       XK_c,       killclient,      {0} },
    { MODKEY|MODALT,                XK_t,       setlayout,       {.v = &layouts[0]} }, //tile
    { MODKEY|MODALT,                XK_f,       setlayout,       {.v = &layouts[1]} }, //NULL
    { MODKEY|MODALT,                XK_space,   setlayout,       {.v = &layouts[2]} }, //monocle
    { MODKEY|MODALT,                XK_h,       setlayout,       {.v = &layouts[3]} }, //bstackhoriz
    //{ MODKEY|MODALT,                XK_b,       setlayout,       {.v = &layouts[4]} }, //bstack
    { MODKEY|MODALT,                XK_s,       setlayout,       {.v = &layouts[5]} }, //spiral
    { MODKEY|MODALT,                XK_w,       setlayout,       {.v = &layouts[6]} }, //dwindle
    { MODKEY|MODALT,                XK_g,       setlayout,       {.v = &layouts[7]} }, //grid
    { MODKEY|MODALT,                XK_a,       setlayout,       {.v = &layouts[8]} }, //gaplessgrid
//    { MODKEY,                       XK_space,   setlayout,       {0} },
//    { MODKEY|ShiftMask,             XK_space,   togglefloating,  {0} },
    { MODKEY,                       XK_0,       view,            {.ui = ~0 } },
    { MODKEY|ShiftMask,             XK_0,       tag,             {.ui = ~0 } },
    { MODKEY,                       XK_comma,   focusmon,        {.i = -1 } },
    { MODKEY,                       XK_period,  focusmon,        {.i = +1 } },
    { MODKEY|ShiftMask,             XK_comma,   tagmon,          {.i = -1 } },
    { MODKEY|ShiftMask,             XK_period,  tagmon,          {.i = +1 } },
    // first terms
    TAGKEYS(                        XK_1,                        0)
    TAGKEYS(                        XK_2,                        1)
    TAGKEYS(                        XK_3,                        2)
    TAGKEYS(                        XK_4,                        3)
    TAGKEYS(                        XK_5,                        4)
    TAGKEYS(                        XK_6,                        5)
    // second terms
    TAGKEYS(                        XK_a,                        6)
    TAGKEYS(                        XK_s,                        7)
    TAGKEYS(                        XK_d,                        8)
    // VM
    TAGKEYS(                        XK_b,                        9)
    TAGKEYS(                        XK_n,                       10)
    TAGKEYS(                        XK_m,                       11)
    // IRC
    TAGKEYS(                        XK_q,                       12)
    // XMP
    TAGKEYS(                        XK_w,                       13)
    // STUFF
    TAGKEYS(                        XK_e,                       14)
    // MAIL
    TAGKEYS(                        XK_r,                       15)
    // MISC
    TAGKEYS(                        XK_z,                       16)
    // WEB
    TAGKEYS(                        XK_7,                       17)
    TAGKEYS(                        XK_8,                       18)
    TAGKEYS(                        XK_9,                       19)
    { MODKEY|ShiftMask,             XK_slash,       quit,            {0} },
};

/* button definitions */
/* click can be ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

