/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Foreground[SIZE_STRING];
} PrimaryBlock;

typedef struct {
    char Text[SIZE_STRING];
    unsigned int Background;
    unsigned int ReversedBackground;
} CursorBlock;

typedef struct{
    char Black[SIZE_STRING];
    char Red[SIZE_STRING];
    char Green[SIZE_STRING];
    char Yellow[SIZE_STRING];
    char Blue[SIZE_STRING];
    char Magenta[SIZE_STRING];
    char Cyan[SIZE_STRING];
    char White[SIZE_STRING];
} ColorsBlock;

typedef struct {
    PrimaryBlock Primary;
    CursorBlock Cursor;
    ColorsBlock Normal;
    ColorsBlock Bright;
} ColorScheme;


/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme DoomOne = {
    .Primary = {
        .Background = "#21242b",
        .Foreground = "#bbc2cf"
    },
    .Cursor = {
        .Text = "#000000",
        .Background= 33,
        .ReversedBackground = 33
    },
    .Normal = {
        .Black = "#21242b",
        .Red = "#ff6c6b",
        .Green = "#98be65",
        .Yellow = "#ECBE7B",
        .Blue = "#51afef",
        .Magenta = "#c678dd",
        .Cyan = "#46D9FF",
        .White = "#bbc2cf"
    },
    .Bright = {
        .Black = "gray50",
        .Red = "#ff6c6b",
        .Green = "#98be65",
        .Yellow = "#ECBE7B",
        .Blue = "#51afef",
        .Magenta = "#c678dd",
        .Cyan = "#46D9FF",
        .White = "#bbc2cf"
    }
};

const ColorScheme Ayu = {
    .Primary = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6"
    },
    .Cursor = {
        .Text = "#0A0B11",
        .Background = 220,
        .ReversedBackground = 220
    },
    .Normal = {
        .Black = "#0A0B11",
        .Red = "#FF0000",
        .Green = "#00FF00",
        .Yellow = "#FFFF00",
        .Blue = "#36A3D9",
        .Magenta = "#FF00FF",
        .Cyan = "#00FFFF",
        .White = "#F3F3F6"
    },
    .Bright = {
        .Black = "gray50",
        .Red = "red",
        .Green = "green",
        .Yellow = "yellow",
        .Blue = "#36A3D9",
        .Magenta = "magenta",
        .Cyan = "cyan",
        .White = "white"
    }
};

const ColorScheme Gruvbox = {
    .Primary = {
        .Background = "#282828",
        .Foreground = "#a89984"
    },
    .Cursor = {
        .Text = "#0A0B11",
        .Background = 15,
        .ReversedBackground = 257
    },
    .Normal = {
        .Black = "#282828",
        .Red = "#cc241d",
        .Green = "#98971a",
        .Yellow = "#d79921",
        .Blue = "#458588",
        .Magenta = "#b16286",
        .Cyan = "#689d6a",
        .White = "#a89984"
    },
    .Bright = {
        .Black = "#928374",
        .Red = "#fb4934",
        .Green = "#b8bb26",
        .Yellow = "#fabd2f",
        .Blue = "#83a598",
        .Magenta = "#d3869b",
        .Cyan = "#8ec07c",
        .White = "#ebdbb2"
    }
};
/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = DoomOne;

