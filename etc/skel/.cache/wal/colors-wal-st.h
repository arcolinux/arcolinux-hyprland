const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12161e", /* black   */
  [1] = "#5E81AB", /* red     */
  [2] = "#7192B6", /* green   */
  [3] = "#7FA0C0", /* yellow  */
  [4] = "#99A6B4", /* blue    */
  [5] = "#80A1C0", /* magenta */
  [6] = "#B2BAC6", /* cyan    */
  [7] = "#e1e4e9", /* white   */

  /* 8 bright colors */
  [8]  = "#9d9fa3",  /* black   */
  [9]  = "#5E81AB",  /* red     */
  [10] = "#7192B6", /* green   */
  [11] = "#7FA0C0", /* yellow  */
  [12] = "#99A6B4", /* blue    */
  [13] = "#80A1C0", /* magenta */
  [14] = "#B2BAC6", /* cyan    */
  [15] = "#e1e4e9", /* white   */

  /* special colors */
  [256] = "#12161e", /* background */
  [257] = "#e1e4e9", /* foreground */
  [258] = "#e1e4e9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
