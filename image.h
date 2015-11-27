#include <avr/pgmspace.h>

typedef struct RGB_struct {
  byte r;
  byte g;
  byte b;
} RGB;

// Copypaste image from kepakkoconverter.py below.

const int PALETTE_SIZE = 256;
const RGB PALETTE[PALETTE_SIZE] PROGMEM = {{238, 191, 65},
{239, 190, 65},
{238, 190, 65},
{232, 191, 65},
{231, 191, 65},
{225, 192, 65},
{225, 192, 64},
{224, 192, 65},
{218, 193, 65},
{218, 193, 64},
{217, 193, 65},
{211, 194, 65},
{211, 193, 65},
{205, 195, 64},
{205, 194, 64},
{202, 195, 65},
{202, 195, 64},
{201, 195, 64},
{254, 188, 65},
{251, 189, 65},
{250, 189, 65},
{255, 184, 64},
{246, 189, 65},
{245, 189, 66},
{245, 189, 65},
{255, 183, 64},
{255, 176, 64},
{254, 176, 64},
{255, 175, 64},
{255, 167, 63},
{255, 167, 62},
{254, 167, 63},
{255, 166, 63},
{197, 196, 65},
{197, 196, 64},
{193, 196, 64},
{192, 196, 64},
{186, 196, 64},
{185, 197, 64},
{178, 198, 65},
{178, 198, 64},
{178, 198, 63},
{171, 199, 63},
{170, 199, 63},
{170, 198, 63},
{163, 200, 64},
{163, 200, 63},
{163, 199, 63},
{156, 201, 63},
{156, 201, 62},
{156, 200, 63},
{155, 201, 62},
{149, 202, 63},
{149, 201, 63},
{148, 202, 63},
{144, 202, 63},
{144, 202, 62},
{144, 202, 61},
{141, 203, 67},
{140, 203, 67},
{140, 203, 66},
{130, 206, 91},
{130, 205, 91},
{125, 207, 106},
{124, 207, 106},
{124, 207, 105},
{136, 204, 79},
{136, 204, 78},
{136, 203, 78},
{138, 204, 72},
{95, 214, 159},
{91, 215, 165},
{91, 214, 165},
{87, 216, 171},
{87, 216, 170},
{89, 215, 168},
{84, 216, 175},
{81, 217, 181},
{81, 217, 180},
{81, 217, 179},
{81, 216, 180},
{74, 218, 190},
{73, 218, 191},
{65, 220, 203},
{65, 220, 202},
{59, 221, 211},
{54, 222, 216},
{52, 222, 217},
{42, 225, 228},
{42, 224, 228},
{31, 226, 238},
{29, 226, 239},
{15, 228, 248},
{13, 228, 248},
{11, 218, 253},
{11, 214, 254},
{1, 229, 254},
{0, 229, 254},
{2, 226, 255},
{1, 226, 255},
{2, 225, 255},
{5, 221, 254},
{4, 221, 254},
{123, 207, 106},
{117, 209, 120},
{117, 208, 120},
{117, 208, 119},
{116, 208, 120},
{109, 211, 134},
{110, 210, 134},
{109, 210, 134},
{103, 212, 146},
{102, 212, 146},
{96, 213, 157},
{34, 177, 255},
{34, 177, 254},
{36, 173, 254},
{35, 173, 254},
{35, 172, 254},
{37, 168, 255},
{36, 168, 255},
{38, 163, 255},
{19, 207, 254},
{17, 208, 254},
{22, 201, 254},
{22, 200, 254},
{26, 194, 254},
{26, 193, 255},
{25, 194, 254},
{30, 187, 254},
{29, 187, 254},
{29, 186, 254},
{33, 181, 255},
{32, 181, 255},
{32, 181, 254},
{33, 177, 255},
{255, 157, 61},
{255, 151, 60},
{255, 146, 60},
{255, 137, 59},
{255, 135, 59},
{255, 128, 58},
{255, 123, 57},
{255, 122, 57},
{255, 117, 57},
{255, 117, 56},
{255, 109, 56},
{255, 109, 55},
{255, 109, 54},
{255, 100, 54},
{253, 91, 210},
{253, 90, 210},
{253, 87, 194},
{253, 86, 194},
{254, 83, 180},
{253, 83, 180},
{254, 82, 178},
{254, 80, 168},
{255, 78, 160},
{254, 78, 160},
{254, 78, 159},
{255, 97, 54},
{255, 89, 53},
{255, 88, 53},
{255, 88, 52},
{255, 78, 52},
{255, 76, 149},
{254, 76, 149},
{254, 75, 149},
{255, 73, 134},
{254, 73, 135},
{255, 72, 135},
{255, 70, 117},
{255, 69, 118},
{255, 69, 117},
{254, 69, 117},
{255, 66, 98},
{255, 76, 52},
{255, 67, 51},
{255, 67, 50},
{255, 65, 92},
{255, 62, 79},
{255, 62, 78},
{255, 60, 60},
{255, 59, 60},
{255, 59, 51},
{255, 58, 51},
{255, 58, 50},
{255, 57, 49},
{255, 57, 48},
{255, 53, 49},
{255, 53, 48},
{255, 52, 48},
{250, 103, 254},
{250, 102, 255},
{250, 102, 254},
{252, 101, 250},
{251, 101, 250},
{252, 99, 246},
{252, 98, 238},
{252, 98, 237},
{252, 95, 226},
{252, 94, 225},
{252, 90, 210},
{249, 102, 255},
{242, 104, 254},
{242, 103, 254},
{241, 103, 254},
{230, 104, 255},
{229, 104, 254},
{216, 105, 254},
{201, 106, 255},
{187, 107, 254},
{186, 107, 254},
{174, 109, 255},
{174, 108, 255},
{164, 110, 254},
{164, 109, 255},
{164, 109, 254},
{163, 109, 254},
{155, 110, 254},
{155, 109, 254},
{143, 111, 255},
{138, 112, 254},
{126, 113, 255},
{126, 113, 254},
{126, 112, 255},
{108, 114, 255},
{107, 114, 255},
{89, 116, 255},
{88, 116, 255},
{88, 116, 254},
{71, 117, 255},
{70, 118, 255},
{70, 117, 255},
{49, 126, 255},
{49, 126, 254},
{50, 122, 255},
{49, 122, 255},
{55, 119, 255},
{55, 118, 255},
{51, 120, 255},
{39, 161, 255},
{42, 155, 254},
{41, 155, 255},
{40, 155, 255},
{42, 150, 255},
{44, 147, 255},
{43, 147, 255},
{42, 147, 255},
{45, 140, 255},
{45, 140, 254},
{44, 140, 254},
{47, 133, 255},
{46, 133, 255},
{48, 128, 254}};
const int IMAGE_HEIGHT = 60;
const int IMAGE_WIDTH = 102;
const int IMAGE_SIZE = 6120;
const byte PIXELS[IMAGE_SIZE] PROGMEM = {189,
183,
182,
176,
172,
170,
167,
159,
157,
155,
153,
151,
202,
199,
196,
194,
207,
209,
210,
211,
213,
215,
218,
220,
222,
226,
228,
230,
234,
239,
238,
236,
253,
250,
248,
244,
242,
120,
117,
114,
133,
130,
127,
125,
122,
95,
101,
98,
97,
92,
91,
89,
86,
83,
82,
78,
73,
71,
113,
111,
110,
105,
64,
61,
67,
59,
55,
53,
49,
46,
43,
40,
38,
36,
33,
16,
13,
11,
8,
5,
3,
2,
24,
19,
18,
25,
26,
29,
136,
138,
140,
141,
142,
145,
147,
161,
163,
165,
178,
187,
190,
192,
189,
183,
181,
176,
174,
169,
167,
159,
157,
154,
152,
150,
202,
200,
196,
194,
206,
209,
210,
211,
213,
215,
218,
220,
222,
224,
228,
230,
234,
240,
238,
235,
253,
251,
248,
244,
242,
119,
117,
114,
133,
129,
127,
124,
122,
95,
102,
98,
97,
92,
90,
89,
86,
83,
81,
78,
74,
72,
113,
111,
110,
105,
64,
61,
67,
59,
55,
53,
49,
45,
43,
40,
38,
36,
33,
16,
13,
11,
8,
5,
3,
2,
24,
19,
18,
21,
27,
29,
136,
138,
139,
141,
143,
145,
148,
161,
163,
165,
178,
186,
190,
192,
189,
184,
181,
176,
173,
170,
166,
159,
157,
154,
153,
151,
202,
200,
197,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
231,
234,
240,
237,
235,
254,
251,
248,
244,
242,
120,
117,
114,
133,
130,
127,
125,
122,
95,
102,
98,
96,
93,
91,
89,
86,
83,
81,
78,
74,
72,
113,
111,
110,
106,
64,
61,
67,
59,
55,
53,
49,
46,
42,
40,
38,
36,
33,
16,
13,
12,
8,
5,
3,
2,
24,
20,
18,
21,
27,
32,
136,
138,
140,
141,
143,
144,
147,
149,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
159,
157,
154,
152,
151,
202,
199,
196,
195,
206,
208,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
250,
248,
244,
242,
120,
116,
114,
133,
130,
127,
124,
122,
95,
102,
99,
96,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
107,
65,
61,
67,
59,
56,
53,
48,
46,
43,
40,
38,
36,
33,
16,
14,
12,
8,
5,
3,
1,
24,
20,
18,
25,
27,
32,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
169,
167,
160,
157,
154,
153,
150,
202,
200,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
225,
228,
230,
234,
239,
238,
236,
253,
252,
248,
244,
242,
120,
117,
115,
134,
131,
127,
125,
123,
95,
102,
99,
97,
92,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
108,
107,
64,
62,
67,
58,
56,
53,
48,
46,
44,
41,
37,
36,
33,
17,
14,
12,
8,
5,
3,
1,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
142,
145,
147,
149,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
155,
153,
151,
202,
200,
196,
195,
206,
209,
210,
211,
213,
214,
218,
220,
222,
225,
228,
229,
234,
239,
238,
236,
253,
251,
248,
244,
242,
120,
117,
115,
133,
130,
127,
124,
123,
95,
102,
98,
96,
93,
91,
89,
86,
83,
81,
80,
73,
71,
113,
112,
110,
107,
64,
62,
67,
59,
56,
52,
49,
46,
42,
40,
38,
35,
34,
16,
13,
12,
8,
5,
3,
0,
23,
20,
18,
21,
27,
29,
136,
138,
140,
141,
143,
145,
147,
161,
163,
177,
178,
186,
190,
192,
189,
184,
182,
176,
174,
170,
167,
160,
157,
155,
153,
151,
202,
200,
196,
195,
207,
209,
210,
211,
212,
214,
219,
220,
222,
225,
228,
229,
232,
239,
238,
236,
253,
251,
248,
244,
242,
119,
118,
114,
133,
130,
126,
125,
123,
95,
102,
99,
96,
93,
91,
89,
86,
83,
81,
80,
73,
71,
113,
112,
110,
105,
64,
62,
67,
59,
56,
52,
49,
46,
42,
40,
38,
35,
33,
16,
13,
12,
8,
5,
3,
2,
23,
20,
18,
25,
28,
29,
136,
138,
139,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
155,
153,
151,
202,
200,
197,
194,
206,
208,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
254,
251,
247,
244,
121,
120,
118,
115,
134,
129,
127,
124,
123,
95,
101,
98,
96,
92,
91,
89,
86,
83,
81,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
52,
48,
46,
42,
40,
38,
35,
33,
16,
13,
11,
8,
5,
3,
0,
24,
20,
18,
25,
27,
30,
136,
138,
139,
141,
142,
144,
147,
149,
163,
165,
178,
185,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
154,
152,
151,
202,
199,
196,
195,
206,
208,
210,
211,
212,
214,
219,
220,
222,
224,
228,
230,
234,
239,
237,
236,
254,
250,
247,
244,
242,
119,
117,
114,
133,
129,
127,
125,
123,
95,
101,
98,
96,
92,
91,
88,
86,
83,
81,
78,
73,
71,
113,
112,
109,
105,
64,
62,
67,
59,
55,
53,
49,
46,
43,
40,
38,
35,
33,
16,
13,
11,
8,
5,
3,
0,
24,
20,
18,
21,
26,
30,
136,
138,
139,
141,
142,
144,
147,
161,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
171,
167,
160,
157,
154,
152,
150,
202,
199,
196,
195,
206,
208,
210,
211,
213,
215,
219,
220,
222,
225,
228,
229,
234,
240,
238,
236,
253,
250,
247,
244,
242,
119,
117,
114,
133,
130,
127,
124,
123,
95,
101,
98,
97,
92,
91,
89,
86,
83,
82,
78,
73,
71,
113,
111,
109,
106,
64,
62,
67,
59,
55,
53,
49,
47,
42,
40,
37,
35,
33,
16,
14,
12,
8,
5,
3,
2,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
142,
144,
147,
149,
163,
177,
179,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
154,
152,
150,
202,
199,
196,
195,
207,
209,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
232,
240,
237,
236,
253,
251,
248,
244,
121,
120,
116,
114,
133,
130,
127,
124,
123,
95,
101,
98,
96,
93,
90,
89,
86,
83,
82,
78,
73,
72,
113,
112,
108,
104,
64,
61,
67,
59,
56,
53,
49,
47,
42,
40,
37,
35,
33,
16,
13,
12,
8,
5,
3,
2,
24,
20,
18,
25,
28,
30,
136,
138,
139,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
154,
152,
150,
202,
199,
196,
195,
205,
209,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
248,
244,
242,
120,
117,
114,
133,
130,
127,
124,
123,
95,
102,
99,
96,
93,
90,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
106,
64,
61,
67,
59,
55,
54,
49,
47,
43,
40,
38,
35,
33,
15,
13,
12,
8,
6,
3,
2,
24,
19,
18,
21,
26,
31,
136,
138,
139,
141,
143,
144,
147,
149,
163,
177,
178,
185,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
154,
153,
151,
202,
199,
196,
195,
207,
208,
210,
211,
213,
214,
217,
220,
222,
224,
228,
230,
234,
240,
238,
236,
253,
250,
248,
244,
121,
120,
118,
114,
133,
130,
126,
124,
123,
95,
101,
100,
97,
93,
91,
89,
86,
83,
82,
78,
74,
72,
113,
112,
110,
105,
64,
61,
67,
59,
55,
53,
49,
46,
42,
39,
38,
36,
33,
15,
13,
12,
8,
5,
3,
2,
24,
20,
18,
21,
27,
30,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
188,
184,
181,
176,
174,
170,
166,
160,
157,
155,
153,
151,
202,
199,
196,
195,
207,
208,
210,
211,
213,
215,
218,
220,
222,
224,
228,
229,
232,
240,
238,
236,
253,
251,
248,
244,
242,
120,
118,
114,
133,
130,
127,
125,
123,
95,
101,
98,
96,
93,
91,
89,
86,
84,
81,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
42,
39,
38,
36,
33,
15,
13,
12,
8,
5,
3,
1,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
143,
144,
147,
149,
164,
177,
178,
186,
190,
192,
188,
184,
181,
176,
174,
170,
167,
159,
157,
154,
152,
151,
201,
199,
196,
204,
207,
208,
210,
211,
212,
214,
217,
220,
222,
226,
228,
230,
234,
239,
237,
235,
253,
251,
248,
244,
242,
120,
117,
115,
133,
131,
127,
125,
123,
95,
101,
98,
96,
92,
91,
88,
86,
83,
81,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
42,
40,
37,
35,
34,
15,
14,
12,
8,
7,
4,
2,
24,
20,
18,
25,
26,
29,
136,
138,
140,
141,
143,
145,
147,
149,
163,
177,
179,
186,
190,
192,
189,
184,
181,
176,
172,
170,
167,
160,
157,
154,
152,
150,
201,
199,
196,
204,
206,
209,
210,
211,
213,
214,
218,
220,
222,
225,
228,
230,
234,
239,
238,
236,
253,
251,
247,
244,
242,
119,
116,
114,
133,
130,
127,
124,
122,
95,
101,
98,
97,
92,
91,
88,
86,
83,
82,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
42,
40,
37,
35,
33,
16,
14,
12,
8,
7,
4,
2,
24,
20,
18,
25,
27,
30,
136,
138,
140,
141,
142,
145,
147,
161,
163,
177,
179,
186,
190,
192,
189,
184,
182,
176,
174,
170,
166,
160,
157,
154,
153,
150,
201,
199,
196,
195,
206,
209,
210,
211,
213,
214,
216,
220,
222,
225,
228,
230,
234,
240,
238,
236,
253,
251,
247,
244,
242,
119,
116,
114,
133,
130,
127,
125,
122,
95,
102,
98,
97,
92,
91,
89,
86,
83,
81,
78,
73,
72,
113,
112,
108,
105,
64,
62,
67,
58,
56,
53,
49,
46,
42,
40,
38,
35,
33,
16,
14,
12,
8,
5,
4,
2,
24,
20,
18,
21,
28,
30,
136,
138,
140,
141,
143,
145,
147,
161,
163,
177,
178,
186,
190,
192,
189,
184,
182,
176,
174,
170,
167,
158,
157,
155,
153,
150,
202,
199,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
229,
234,
240,
238,
236,
253,
252,
248,
243,
242,
120,
117,
114,
133,
131,
127,
124,
122,
95,
102,
98,
96,
93,
91,
89,
86,
83,
82,
78,
73,
71,
113,
112,
110,
107,
64,
62,
67,
59,
56,
53,
49,
47,
42,
40,
37,
36,
33,
15,
13,
12,
8,
5,
4,
2,
24,
20,
18,
21,
28,
29,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
168,
159,
157,
155,
153,
151,
201,
199,
196,
195,
206,
208,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
236,
253,
252,
249,
243,
242,
120,
116,
114,
133,
130,
128,
125,
122,
95,
101,
99,
96,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
111,
110,
105,
64,
62,
67,
59,
56,
53,
49,
47,
42,
40,
37,
36,
33,
15,
13,
12,
8,
5,
3,
2,
24,
20,
18,
25,
26,
32,
136,
138,
140,
141,
142,
144,
147,
149,
163,
165,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
166,
159,
157,
154,
153,
151,
202,
200,
196,
195,
206,
209,
210,
211,
213,
215,
217,
220,
222,
224,
228,
230,
232,
239,
238,
235,
253,
251,
247,
244,
242,
119,
116,
114,
133,
130,
126,
125,
123,
95,
101,
98,
97,
93,
91,
88,
86,
83,
81,
78,
73,
71,
113,
111,
109,
104,
64,
61,
67,
59,
56,
53,
49,
46,
43,
40,
38,
36,
33,
16,
13,
12,
10,
5,
3,
1,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
142,
145,
146,
149,
163,
177,
179,
187,
190,
192,
189,
184,
181,
176,
174,
170,
166,
159,
157,
155,
153,
150,
202,
200,
196,
195,
206,
208,
210,
211,
213,
215,
218,
220,
222,
225,
228,
230,
232,
240,
238,
236,
253,
252,
248,
243,
242,
120,
118,
114,
133,
130,
127,
125,
122,
95,
101,
100,
96,
93,
91,
88,
86,
83,
82,
78,
73,
71,
113,
111,
110,
105,
64,
61,
67,
59,
56,
53,
49,
46,
43,
40,
38,
36,
33,
15,
14,
12,
8,
5,
4,
2,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
143,
144,
146,
149,
163,
177,
178,
187,
190,
192,
189,
184,
182,
176,
174,
170,
168,
158,
157,
155,
153,
150,
202,
200,
196,
204,
206,
208,
210,
211,
213,
215,
218,
220,
222,
225,
228,
230,
234,
239,
238,
236,
253,
252,
249,
243,
242,
119,
117,
114,
133,
131,
127,
125,
122,
95,
102,
100,
97,
92,
91,
88,
86,
83,
81,
78,
74,
71,
113,
112,
110,
105,
64,
61,
67,
60,
56,
54,
49,
46,
42,
40,
38,
36,
33,
15,
13,
12,
8,
5,
3,
2,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
143,
144,
146,
161,
163,
165,
178,
186,
190,
192,
189,
183,
181,
176,
175,
170,
167,
159,
157,
154,
153,
203,
202,
199,
196,
193,
206,
208,
210,
211,
213,
215,
218,
220,
222,
225,
228,
230,
234,
239,
237,
235,
253,
251,
247,
243,
242,
120,
117,
115,
132,
130,
127,
124,
123,
95,
101,
98,
97,
93,
91,
89,
86,
83,
82,
78,
74,
71,
113,
112,
110,
105,
64,
61,
67,
60,
55,
52,
49,
46,
43,
40,
38,
36,
33,
17,
13,
12,
8,
5,
3,
0,
24,
19,
18,
25,
27,
29,
136,
138,
140,
141,
142,
144,
147,
149,
163,
165,
179,
186,
190,
192,
189,
183,
181,
176,
175,
170,
167,
159,
157,
154,
153,
151,
201,
199,
196,
195,
206,
208,
210,
211,
213,
215,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
248,
243,
242,
120,
117,
114,
132,
130,
127,
125,
123,
95,
101,
98,
96,
92,
90,
89,
86,
83,
82,
78,
73,
71,
113,
112,
110,
105,
64,
62,
67,
59,
55,
52,
49,
46,
43,
40,
38,
36,
33,
17,
13,
12,
8,
5,
3,
2,
24,
19,
18,
25,
28,
30,
136,
138,
140,
141,
142,
144,
147,
149,
163,
165,
179,
186,
190,
192,
189,
183,
181,
176,
174,
170,
167,
159,
157,
155,
153,
151,
202,
199,
197,
195,
206,
209,
210,
211,
213,
214,
217,
220,
222,
224,
228,
230,
234,
239,
238,
236,
253,
250,
248,
245,
242,
119,
117,
114,
132,
130,
126,
125,
123,
95,
102,
98,
97,
93,
90,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
55,
53,
49,
46,
43,
40,
38,
35,
33,
16,
14,
12,
8,
5,
3,
2,
24,
20,
18,
21,
27,
29,
136,
138,
140,
141,
142,
144,
147,
161,
163,
165,
178,
186,
190,
192,
189,
184,
181,
176,
174,
169,
167,
158,
157,
155,
153,
151,
202,
199,
196,
195,
206,
208,
210,
211,
212,
214,
217,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
250,
248,
245,
242,
119,
117,
114,
132,
130,
127,
124,
123,
95,
102,
98,
97,
93,
91,
88,
86,
83,
81,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
43,
40,
38,
35,
33,
16,
14,
12,
8,
5,
3,
1,
22,
20,
18,
25,
27,
29,
136,
138,
140,
141,
143,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
183,
181,
176,
174,
170,
167,
159,
157,
154,
153,
150,
202,
199,
196,
195,
207,
208,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
240,
237,
235,
253,
250,
248,
244,
242,
119,
117,
114,
132,
130,
127,
124,
123,
95,
101,
98,
97,
93,
91,
88,
86,
83,
82,
78,
73,
71,
113,
112,
110,
105,
64,
61,
67,
59,
55,
52,
49,
47,
43,
40,
38,
36,
33,
16,
14,
12,
8,
5,
3,
1,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
143,
145,
147,
149,
163,
177,
179,
187,
190,
192,
189,
184,
181,
176,
174,
169,
167,
159,
157,
155,
153,
203,
202,
199,
196,
195,
206,
209,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
235,
253,
251,
247,
244,
242,
119,
116,
115,
133,
130,
127,
124,
122,
95,
101,
98,
97,
93,
90,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
42,
40,
38,
36,
33,
15,
14,
12,
8,
5,
3,
2,
24,
20,
18,
21,
26,
29,
136,
138,
139,
141,
143,
144,
147,
149,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
169,
167,
160,
157,
154,
153,
203,
202,
199,
196,
195,
206,
209,
210,
211,
212,
214,
217,
220,
222,
225,
228,
230,
234,
239,
237,
236,
254,
251,
247,
244,
242,
119,
116,
114,
134,
130,
126,
125,
122,
95,
101,
98,
96,
92,
90,
89,
86,
83,
81,
78,
73,
72,
113,
111,
109,
105,
64,
62,
67,
59,
56,
53,
48,
46,
42,
40,
38,
35,
34,
15,
14,
12,
8,
5,
3,
0,
24,
20,
18,
21,
27,
29,
136,
138,
140,
141,
143,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
183,
181,
176,
174,
171,
167,
160,
157,
154,
152,
151,
201,
199,
196,
194,
206,
208,
210,
211,
213,
215,
217,
220,
222,
224,
228,
230,
234,
240,
237,
236,
253,
251,
247,
244,
242,
120,
117,
115,
134,
130,
126,
125,
123,
95,
102,
99,
96,
92,
90,
89,
86,
83,
81,
80,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
47,
42,
40,
38,
36,
33,
15,
13,
11,
8,
5,
3,
0,
24,
20,
18,
21,
27,
29,
136,
138,
140,
141,
142,
145,
148,
149,
163,
165,
179,
187,
190,
192,
189,
183,
181,
176,
174,
169,
167,
160,
157,
155,
153,
151,
201,
199,
196,
195,
206,
208,
210,
211,
213,
215,
217,
220,
222,
225,
228,
230,
234,
239,
237,
236,
253,
251,
247,
244,
242,
119,
118,
114,
133,
130,
126,
125,
123,
95,
102,
99,
96,
92,
91,
89,
86,
83,
81,
80,
73,
72,
113,
112,
110,
105,
103,
62,
67,
59,
56,
53,
49,
45,
42,
40,
38,
36,
33,
15,
14,
12,
8,
6,
3,
1,
24,
20,
18,
25,
27,
30,
136,
138,
139,
141,
142,
145,
147,
149,
163,
165,
179,
187,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
155,
152,
151,
202,
199,
196,
195,
206,
209,
210,
211,
213,
214,
217,
220,
222,
224,
228,
229,
232,
239,
237,
236,
253,
251,
247,
244,
242,
119,
116,
114,
134,
130,
127,
125,
123,
95,
101,
98,
97,
92,
91,
88,
86,
83,
81,
78,
73,
71,
113,
112,
110,
106,
64,
61,
67,
59,
55,
53,
48,
46,
42,
40,
37,
36,
33,
16,
14,
12,
8,
6,
3,
1,
24,
20,
18,
21,
26,
30,
136,
138,
139,
141,
143,
145,
147,
149,
163,
177,
179,
187,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
154,
152,
151,
202,
199,
197,
195,
207,
209,
210,
211,
212,
214,
219,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
247,
244,
242,
119,
117,
115,
133,
130,
127,
125,
122,
95,
101,
100,
97,
93,
91,
89,
86,
83,
81,
80,
73,
71,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
43,
40,
37,
36,
33,
16,
13,
12,
10,
5,
3,
2,
24,
19,
18,
25,
26,
29,
136,
138,
140,
141,
142,
145,
148,
149,
163,
165,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
159,
157,
155,
152,
151,
202,
199,
196,
195,
207,
209,
210,
211,
213,
214,
219,
220,
222,
225,
228,
230,
234,
239,
238,
235,
253,
251,
247,
244,
242,
119,
117,
114,
132,
131,
127,
124,
122,
95,
101,
98,
96,
93,
91,
89,
86,
83,
81,
80,
73,
71,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
49,
46,
43,
40,
37,
35,
33,
17,
13,
12,
10,
5,
3,
0,
24,
19,
18,
25,
27,
29,
136,
138,
139,
141,
143,
145,
147,
149,
163,
165,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
166,
160,
157,
155,
153,
151,
202,
200,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
247,
243,
242,
120,
117,
114,
132,
130,
127,
125,
123,
95,
102,
99,
97,
93,
90,
89,
86,
83,
81,
78,
74,
71,
113,
111,
109,
106,
64,
61,
67,
59,
56,
53,
48,
47,
42,
40,
37,
35,
33,
15,
13,
12,
8,
6,
3,
1,
24,
20,
18,
21,
26,
29,
136,
138,
139,
141,
142,
144,
147,
149,
163,
165,
179,
187,
190,
192,
189,
184,
181,
176,
174,
170,
166,
160,
157,
155,
153,
150,
202,
199,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
247,
243,
242,
119,
117,
114,
134,
130,
127,
125,
123,
95,
101,
98,
97,
93,
91,
89,
86,
83,
81,
78,
73,
72,
113,
111,
110,
105,
64,
61,
67,
59,
56,
53,
48,
46,
42,
40,
38,
35,
34,
16,
14,
12,
8,
5,
3,
1,
24,
20,
18,
21,
27,
30,
136,
138,
140,
141,
142,
144,
147,
149,
163,
165,
179,
187,
190,
192,
189,
184,
181,
176,
174,
169,
167,
159,
157,
155,
153,
150,
201,
200,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
226,
228,
230,
234,
240,
237,
236,
254,
251,
247,
244,
242,
119,
117,
114,
134,
130,
126,
125,
123,
95,
101,
100,
97,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
111,
110,
105,
64,
61,
67,
60,
56,
53,
48,
46,
42,
40,
38,
36,
34,
17,
13,
12,
8,
5,
3,
0,
24,
20,
18,
21,
26,
29,
136,
138,
140,
141,
142,
145,
147,
149,
163,
165,
179,
187,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
155,
153,
150,
202,
200,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
240,
238,
236,
253,
252,
247,
244,
242,
119,
116,
114,
133,
130,
128,
125,
122,
95,
101,
98,
97,
92,
91,
89,
86,
83,
82,
78,
73,
71,
113,
111,
108,
105,
64,
61,
67,
60,
55,
52,
50,
46,
43,
40,
38,
36,
33,
16,
14,
12,
8,
5,
4,
0,
24,
20,
18,
25,
28,
30,
136,
138,
139,
141,
143,
144,
147,
149,
163,
165,
178,
187,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
155,
153,
151,
202,
199,
196,
194,
206,
209,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
235,
253,
251,
248,
244,
242,
120,
117,
115,
132,
130,
128,
125,
122,
95,
101,
98,
96,
93,
91,
89,
86,
83,
82,
78,
73,
71,
113,
111,
108,
105,
64,
62,
67,
59,
55,
52,
48,
45,
43,
40,
38,
35,
33,
16,
14,
12,
8,
5,
3,
0,
24,
20,
18,
25,
26,
30,
136,
138,
139,
141,
142,
144,
147,
149,
163,
177,
178,
186,
190,
192,
189,
184,
182,
176,
174,
170,
166,
159,
157,
155,
153,
151,
202,
199,
196,
204,
206,
208,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
235,
253,
251,
248,
244,
242,
120,
117,
114,
133,
131,
127,
125,
123,
95,
101,
98,
97,
93,
91,
89,
86,
83,
81,
79,
73,
71,
113,
111,
110,
105,
65,
62,
66,
59,
56,
53,
51,
46,
42,
40,
38,
36,
33,
16,
13,
12,
8,
5,
3,
2,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
142,
144,
147,
149,
163,
177,
179,
187,
190,
192,
189,
184,
182,
176,
175,
170,
168,
159,
157,
154,
153,
151,
202,
199,
196,
195,
206,
208,
210,
211,
212,
214,
217,
220,
222,
226,
227,
230,
234,
239,
238,
236,
253,
250,
248,
244,
242,
119,
117,
114,
132,
130,
127,
125,
122,
95,
102,
98,
96,
92,
91,
89,
86,
83,
81,
78,
73,
71,
113,
111,
110,
105,
65,
62,
67,
59,
56,
53,
49,
47,
43,
40,
38,
36,
33,
16,
13,
12,
8,
7,
3,
2,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
142,
145,
147,
149,
163,
177,
178,
187,
190,
192,
189,
184,
182,
176,
175,
170,
167,
159,
157,
154,
153,
203,
202,
199,
196,
195,
205,
209,
210,
211,
213,
215,
217,
220,
222,
226,
227,
230,
234,
239,
238,
236,
253,
250,
248,
244,
242,
119,
117,
114,
132,
130,
127,
124,
122,
95,
101,
98,
96,
92,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
104,
64,
61,
67,
58,
56,
53,
49,
46,
42,
40,
37,
35,
33,
16,
13,
12,
8,
5,
3,
2,
24,
20,
18,
25,
26,
31,
136,
138,
139,
141,
143,
145,
147,
161,
163,
177,
178,
186,
190,
192,
189,
183,
181,
176,
174,
170,
167,
159,
157,
154,
153,
203,
202,
199,
196,
195,
206,
209,
210,
211,
212,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
236,
253,
251,
248,
244,
242,
120,
117,
114,
134,
130,
127,
125,
123,
95,
102,
99,
97,
92,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
106,
64,
62,
68,
58,
56,
53,
49,
46,
42,
40,
38,
36,
34,
16,
14,
12,
8,
5,
4,
2,
24,
19,
18,
25,
26,
29,
136,
138,
140,
141,
143,
144,
147,
149,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
175,
170,
166,
159,
157,
154,
152,
203,
201,
199,
196,
194,
206,
209,
210,
211,
212,
214,
219,
220,
222,
224,
228,
230,
234,
240,
238,
236,
253,
251,
248,
244,
242,
120,
117,
114,
133,
130,
127,
124,
122,
95,
102,
99,
96,
92,
90,
89,
86,
84,
81,
77,
73,
71,
113,
112,
110,
106,
64,
62,
68,
58,
56,
52,
49,
47,
42,
40,
38,
36,
34,
16,
14,
12,
8,
5,
4,
2,
24,
19,
18,
25,
27,
29,
136,
138,
140,
141,
143,
144,
147,
149,
163,
165,
178,
185,
190,
192,
189,
184,
181,
176,
174,
170,
167,
159,
157,
154,
153,
150,
202,
199,
196,
195,
206,
209,
210,
211,
212,
214,
219,
220,
222,
224,
228,
230,
234,
240,
238,
235,
253,
251,
248,
244,
242,
119,
118,
114,
133,
130,
127,
125,
122,
95,
101,
98,
97,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
109,
105,
65,
62,
67,
58,
56,
52,
50,
46,
42,
40,
38,
36,
33,
16,
14,
12,
10,
6,
3,
2,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
143,
145,
147,
149,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
171,
167,
160,
157,
154,
153,
151,
201,
199,
196,
195,
205,
208,
210,
211,
213,
214,
218,
220,
222,
225,
228,
230,
234,
239,
238,
236,
253,
250,
247,
244,
242,
119,
117,
114,
133,
130,
127,
125,
122,
95,
101,
98,
97,
93,
91,
89,
86,
83,
82,
78,
73,
71,
113,
112,
109,
105,
65,
62,
67,
59,
55,
52,
49,
46,
42,
40,
38,
36,
33,
16,
14,
12,
8,
7,
4,
2,
24,
20,
18,
25,
26,
29,
136,
138,
139,
141,
142,
145,
147,
161,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
171,
167,
159,
157,
154,
153,
150,
202,
200,
196,
195,
206,
208,
210,
211,
212,
214,
217,
220,
222,
226,
228,
230,
233,
239,
237,
236,
254,
251,
247,
245,
242,
119,
117,
114,
133,
130,
127,
125,
123,
95,
101,
98,
97,
93,
91,
89,
86,
83,
82,
78,
73,
71,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
51,
46,
42,
40,
38,
35,
34,
17,
13,
12,
8,
7,
4,
1,
24,
20,
18,
21,
26,
29,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
170,
168,
159,
157,
154,
153,
151,
202,
199,
196,
194,
206,
208,
210,
211,
212,
214,
216,
221,
222,
224,
227,
230,
234,
239,
237,
236,
253,
252,
247,
244,
242,
119,
117,
114,
133,
130,
127,
124,
122,
95,
101,
98,
97,
93,
91,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
105,
64,
62,
67,
59,
56,
53,
51,
46,
43,
40,
37,
35,
33,
16,
14,
12,
8,
7,
3,
2,
24,
20,
18,
25,
26,
30,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
175,
170,
167,
159,
157,
155,
153,
151,
202,
199,
196,
194,
206,
208,
210,
211,
213,
214,
216,
220,
222,
224,
228,
230,
234,
240,
238,
236,
253,
251,
247,
244,
242,
120,
117,
114,
133,
129,
126,
124,
122,
95,
101,
98,
97,
92,
91,
89,
86,
83,
82,
78,
74,
72,
113,
112,
110,
106,
64,
62,
66,
59,
56,
53,
49,
46,
43,
40,
37,
35,
33,
16,
14,
12,
8,
5,
3,
0,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
142,
144,
147,
149,
163,
177,
179,
187,
190,
192,
189,
184,
181,
176,
174,
170,
166,
159,
157,
154,
153,
150,
202,
199,
196,
194,
206,
208,
210,
211,
212,
215,
218,
220,
222,
225,
228,
231,
234,
239,
238,
235,
253,
250,
247,
244,
242,
120,
117,
114,
133,
131,
127,
125,
122,
95,
101,
98,
97,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
63,
61,
67,
59,
55,
53,
49,
46,
42,
40,
37,
36,
33,
16,
13,
12,
9,
5,
3,
0,
24,
19,
18,
25,
26,
30,
136,
138,
139,
141,
142,
144,
147,
149,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
175,
170,
166,
159,
157,
155,
152,
151,
202,
200,
196,
195,
206,
208,
210,
211,
213,
215,
218,
220,
222,
225,
228,
231,
234,
240,
238,
236,
253,
251,
247,
244,
242,
119,
116,
114,
133,
130,
127,
125,
122,
95,
101,
99,
96,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
64,
61,
67,
59,
56,
53,
49,
46,
43,
40,
37,
35,
33,
16,
14,
12,
9,
7,
3,
2,
24,
19,
18,
25,
27,
30,
136,
138,
139,
141,
143,
144,
147,
149,
163,
177,
178,
187,
190,
192,
189,
183,
181,
176,
174,
170,
166,
160,
157,
154,
152,
150,
202,
199,
196,
194,
206,
208,
210,
211,
213,
215,
218,
220,
222,
226,
228,
230,
234,
239,
237,
236,
253,
251,
248,
244,
242,
120,
117,
114,
132,
130,
127,
125,
123,
95,
101,
99,
97,
93,
91,
89,
86,
83,
82,
78,
73,
72,
113,
112,
109,
105,
64,
62,
67,
59,
56,
53,
48,
46,
43,
40,
37,
35,
33,
16,
13,
11,
8,
5,
3,
2,
24,
20,
18,
25,
26,
29,
136,
138,
139,
141,
143,
144,
146,
149,
163,
177,
178,
186,
190,
192,
189,
183,
181,
176,
174,
170,
167,
159,
157,
154,
153,
151,
202,
199,
196,
195,
206,
208,
210,
211,
213,
215,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
248,
244,
242,
119,
117,
114,
134,
130,
127,
125,
122,
95,
101,
99,
97,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
64,
62,
66,
59,
56,
53,
49,
46,
43,
40,
38,
35,
34,
16,
13,
12,
8,
7,
4,
2,
24,
20,
18,
25,
26,
29,
136,
138,
140,
141,
142,
144,
147,
161,
162,
165,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
154,
153,
151,
202,
199,
196,
195,
206,
208,
210,
211,
213,
215,
218,
220,
222,
224,
228,
229,
234,
239,
237,
236,
253,
250,
248,
244,
242,
119,
117,
115,
133,
129,
127,
125,
122,
95,
101,
98,
96,
92,
91,
89,
86,
83,
81,
80,
74,
72,
113,
111,
110,
105,
64,
62,
66,
59,
55,
52,
51,
47,
42,
40,
38,
35,
33,
15,
14,
12,
8,
7,
4,
2,
24,
20,
18,
25,
27,
29,
136,
138,
140,
141,
142,
144,
147,
161,
163,
177,
178,
187,
190,
192,
189,
184,
181,
176,
174,
170,
167,
159,
157,
155,
152,
151,
202,
199,
196,
194,
207,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
251,
248,
245,
242,
119,
117,
115,
134,
130,
127,
124,
123,
95,
101,
98,
97,
93,
91,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
106,
64,
62,
67,
59,
56,
53,
49,
46,
43,
40,
38,
36,
34,
15,
14,
12,
8,
5,
3,
2,
24,
20,
18,
21,
26,
31,
136,
138,
139,
141,
142,
144,
147,
161,
163,
165,
179,
187,
190,
192,
189,
184,
181,
176,
174,
170,
168,
159,
157,
155,
153,
151,
201,
199,
196,
194,
207,
209,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
237,
236,
253,
250,
248,
244,
242,
119,
117,
115,
132,
130,
127,
124,
123,
95,
101,
98,
96,
92,
91,
89,
86,
83,
82,
78,
73,
72,
113,
112,
110,
106,
64,
61,
67,
59,
56,
53,
49,
46,
43,
40,
38,
36,
33,
15,
14,
12,
8,
5,
3,
2,
24,
20,
18,
21,
27,
29,
136,
138,
139,
141,
143,
145,
147,
161,
163,
165,
179,
187,
190,
192,
189,
184,
182,
176,
175,
170,
167,
159,
157,
154,
153,
151,
202,
199,
196,
195,
206,
209,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
236,
253,
252,
249,
243,
242,
120,
117,
114,
133,
130,
127,
124,
122,
95,
101,
98,
96,
92,
91,
88,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
64,
61,
67,
59,
55,
53,
49,
45,
43,
40,
37,
35,
33,
16,
13,
12,
8,
5,
3,
2,
24,
19,
18,
21,
26,
29,
136,
138,
139,
141,
143,
145,
148,
161,
163,
177,
178,
186,
190,
192,
189,
184,
181,
176,
174,
170,
167,
160,
157,
154,
153,
151,
202,
199,
196,
195,
206,
208,
210,
211,
213,
214,
218,
220,
222,
224,
228,
230,
234,
239,
238,
235,
253,
251,
248,
244,
242,
119,
117,
114,
133,
130,
127,
124,
123,
95,
102,
99,
96,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
64,
61,
67,
59,
56,
53,
49,
46,
42,
40,
38,
36,
33,
16,
13,
12,
8,
5,
4,
2,
24,
20,
18,
25,
26,
29,
136,
138,
140,
141,
142,
145,
147,
161,
163,
177,
178,
186,
191,
192,
189,
183,
181,
176,
174,
170,
166,
160,
157,
154,
153,
150,
202,
200,
196,
204,
206,
208,
210,
211,
213,
215,
217,
220,
222,
224,
228,
230,
233,
239,
238,
235,
253,
250,
248,
244,
242,
120,
117,
135,
133,
130,
127,
125,
122,
95,
101,
98,
97,
93,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
107,
64,
61,
67,
59,
57,
53,
49,
47,
42,
40,
38,
36,
33,
15,
13,
11,
8,
5,
3,
2,
24,
20,
18,
25,
26,
29,
136,
138,
140,
141,
143,
144,
147,
149,
163,
177,
178,
185,
190,
192,
189,
183,
181,
176,
174,
170,
166,
160,
157,
154,
153,
151,
202,
199,
196,
194,
206,
209,
210,
211,
213,
214,
216,
220,
222,
224,
228,
230,
234,
240,
237,
236,
253,
251,
247,
244,
121,
119,
118,
114,
133,
130,
127,
124,
122,
95,
101,
98,
97,
92,
91,
89,
86,
83,
81,
78,
73,
71,
113,
112,
110,
105,
64,
62,
67,
58,
56,
52,
48,
46,
43,
40,
37,
35,
34,
15,
14,
12,
10,
5,
3,
1,
24,
20,
18,
25,
26,
29,
136,
138,
139,
141,
143,
144,
147,
161,
163,
165,
178,
185,
190,
192};
