static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static const int vertpad = 5;
static const int sidepad = 5;

static unsigned int border_width = 2;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus:size=12"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = "RUN";

static const char *colors[SchemeLast][2] = {
				 /*    fg        bg    */
	[SchemeNorm]           = { "#ffffff", "#000000" },
	[SchemeUnsel]          = { "#444444", "#000000" },
	[SchemeOut]            = { "#cc0000", "#000000" },
	[SchemeNormHighlight]  = { "#cccc00", "#000000" },
	[SchemeUnselHighlight] = { "#333300", "#000000" },
	[SchemeBorder]         = { "#000000", "#ffffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Character to use when censoring text input in password mode */
static const char censor_char = '*';
