/*
 Copyright 2022 Álvaro "Gondolindrim" Volpato <alvaro.volpato@usp.br>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "88htsc.h"

led_config_t g_led_config = { {
	{ 16       , 15         , 14         , 13         , 12         , 11         , 10         , 9          , 8          , 7          , 6          , 5          , 4          , 3          , 2          , 1          , 0         },
	{ 17       , 18         , 19         , 20         , 21         , 22         , 23         , 24         , 25         , 26         , 27         , 28         , 29         , 30         , 31         , 32         , 33        },
	{ 50       , 49         , 48         , 47         , 46         , 45         , 44         , 43         , 42         , 41         , 40         , 39         , 38         , 37         , 36         , 35         , 34        },
	{ 51       , 52         , 53         , 54         , 55         , 56         , 57         , 58         , 59         , 60         , 61         , 62         , 63         , NO_LED     , NO_LED     , NO_LED     , NO_LED    },
	{ 76       , NO_LED     , 75         , 74         , 73         , 72         , 71         , 70         , 69         , 68         , 67         , 66         , 65         , NO_LED     , NO_LED     , 64         , NO_LED    },
	{ 77       , 78         , 79         , NO_LED     , NO_LED     , NO_LED     , 80         , NO_LED     , NO_LED     , NO_LED     , 81         , 82         , 83         , NO_LED     , 84         , 85         , 86        }
},{
// "Fine-tuned" complex configuration
	{ 210,   0}, { 196,   0}, { 182,   0}, { 168,   0}, { 154,   0}, { 140,   0}, { 140,   0}, { 126,   0}, { 112,   0}, {  98,   0}, {  84,   0}, {  70,   0}, {  56,   0}, {  45,   0}, {  28,   0}, {  14,   0}, {   0,   0},
	{   0,  45}, {  14,  45}, {  28,  45}, {  42,  45}, {  56,  45}, {  70,  45}, {  84,  45}, {  98,  45}, { 112,  45}, { 126,  45}, { 140,  45}, { 154,  45}, { 168,  45}, { 182,  45}, { 196,  45}, { 210,  45}, { 224,  45},
	{ 224,  90}, { 210,  90}, { 196,  90}, { 182,  90}, { 168,  90}, { 154,  90}, { 140,  90}, { 126,  90}, { 112,  90}, {  98,  90}, {  84,  90}, {  70,  90}, {  56,  90}, {  42,  90}, {  28,  90}, {  14,  90}, {   0,  90},
	{   0, 135}, {  14, 135}, {  28, 135}, {  42, 135}, {  56, 135}, {  70, 135}, {  84, 135}, {  98, 135}, { 112, 135}, { 126, 135}, { 140, 135}, { 154, 135}, { 168, 135},
	{ 192, 180},              { 168, 180}, { 154, 180}, { 140, 180}, { 126, 180}, { 112, 180}, {  98, 180}, {  84, 180}, {  70, 180}, {  56, 180}, {  42, 180}, {  28, 180},                           {  14, 180},
	{   0, 225}, {  14, 225}, {  28, 225},                           {  84, 225},                                        { 140, 225}, { 154, 225}, { 168, 225},                           { 196,  45}, { 210,  45}, { 224,  90}
}, {
	1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          ,
	4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 
	4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          ,
	4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 1          ,
	1                       , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 1                                    , 1          ,
	1          , 1          , 1          ,                                        4          ,                                        1          , 1          , 1                       , 1          , 1          , 1          
} };
