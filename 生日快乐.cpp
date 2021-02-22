#include <stdio.h>
#include <windows.h>
 
typedef struct _sound
{
    int n_frequence;
    int n_duration;
    char text[16];
}sound;
 
#define LOW_1          262
#define LOW_2          294
#define LOW_3          330
#define LOW_4          349
#define LOW_5          392
#define LOW_6          440
#define LOW_7          494
 
#define MID_1          523
#define MID_2          578
#define MID_3          659
#define MID_4          698
#define MID_5          784
#define MID_6          880
#define MID_7          988
 
#define HIGH_1         1046
#define HIGH_2         1175
#define HIGH_3         1318
#define HIGH_4         1397
#define HIGH_5         1568
#define HIGH_6         1760
#define HIGH_7         1976
 
#define BEAT_120(x) (int)(x * 500)
#define BEAT_60(x) (int)(x * 1000)
 
void play_sound(sound s[], int n_len)
{
    int i = 0;
 
    for (i = 0; i < n_len; i++)
    {
        if (strlen(s[i].text) != 0)
        {
            printf("%s", s[i].text);
        }
        Beep(s[i].n_frequence, s[i].n_duration);
    }
}
 
main()
{
    sound s_happy_birthday_to_you[] = {
    {MID_5, BEAT_120(0.5) + BEAT_120(0.25), "祝"}, 
    {MID_5, BEAT_120(0.25), "你"}, 
    {MID_6, BEAT_120(1), "生"},
    {MID_5, BEAT_120(1), "日"},
    {HIGH_1, BEAT_120(1), "快"},
    {MID_7, BEAT_120(2), "乐\n"}, 
    {MID_5, BEAT_120(0.5) + BEAT_120(0.25), "祝"},
    {MID_5, BEAT_120(0.25), "你"},
    {MID_6, BEAT_120(1), "生"},
    {MID_5, BEAT_120(1), "日"},
    {HIGH_2, BEAT_120(1), "快"}, 
    {HIGH_1, BEAT_120(2), "乐\n"},
    {MID_5, BEAT_120(0.5) + BEAT_120(0.25), "祝"},
    {MID_5, BEAT_120(0.25), "你"}, 
    {HIGH_5, BEAT_120(1), "生"},
    {HIGH_3, BEAT_120(1), "日"}, 
    {HIGH_1, BEAT_120(1), "快"}, 
    {MID_7, BEAT_120(1), "乐\n"}, 
    {MID_6, BEAT_120(1)},
    {HIGH_4, BEAT_120(0.5) + BEAT_120(0.25), "祝"},
    {HIGH_4, BEAT_120(0.25), "你"},
    {HIGH_3, BEAT_120(1), "生"}, 
    {HIGH_1, BEAT_120(1), "日"}, 
    {HIGH_2, BEAT_120(1), "快"},
    {HIGH_1, BEAT_120(2), "乐\n"}
    };  
 
    play_sound(s_happy_birthday_to_you, sizeof(s_happy_birthday_to_you) / sizeof(sound));
}
