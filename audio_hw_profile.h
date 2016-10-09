#ifndef _AUDIO_HW_PROFILE_H_
#define _AUDIO_HW_PROFILE_H_

int get_external_card(int type);
int get_aml_card();
int get_spdif_port();
char*  get_hdmi_sink_cap(const char *keys);
char*  get_hdmi_arc_cap(unsigned *ad, int maxsize, const char *keys);
#endif