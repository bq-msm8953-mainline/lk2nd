// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_FT8716_1080P_VIDEO_H_
#define _PANEL_FT8716_1080P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config ft8716_1080p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_ft8716_1080p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution ft8716_1080p_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 32,
	.hback_porch = 32,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 16,
	.vback_porch = 16,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info ft8716_1080p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char ft8716_1080p_video_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_1[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x87, 0x16, 0x01
};
static char ft8716_1080p_video_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x87, 0x16, 0xff
};
static char ft8716_1080p_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_5[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x00, 0x00, 0x00
};
static char ft8716_1080p_video_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_7[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x00, 0x00, 0xff
};
static char ft8716_1080p_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_9[] = {
	0x11, 0x00, 0x05, 0x80
};
static char ft8716_1080p_video_on_cmd_10[] = {
	0x29, 0x00, 0x05, 0x80
};
static char ft8716_1080p_video_on_cmd_11[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x24, 0xff, 0xff
};

static struct mipi_dsi_cmd ft8716_1080p_video_on_command[] = {
	{ sizeof(ft8716_1080p_video_on_cmd_0), ft8716_1080p_video_on_cmd_0, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_1), ft8716_1080p_video_on_cmd_1, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_2), ft8716_1080p_video_on_cmd_2, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_3), ft8716_1080p_video_on_cmd_3, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_4), ft8716_1080p_video_on_cmd_4, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_5), ft8716_1080p_video_on_cmd_5, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_6), ft8716_1080p_video_on_cmd_6, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_7), ft8716_1080p_video_on_cmd_7, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_8), ft8716_1080p_video_on_cmd_8, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_9), ft8716_1080p_video_on_cmd_9, 120 },
	{ sizeof(ft8716_1080p_video_on_cmd_10), ft8716_1080p_video_on_cmd_10, 20 },
	{ sizeof(ft8716_1080p_video_on_cmd_11), ft8716_1080p_video_on_cmd_11, 0 },
	{ sizeof(ft8716_1080p_video_on_cmd_12), ft8716_1080p_video_on_cmd_12, 0 },
};

static char ft8716_1080p_video_off_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_off_cmd_1[] = {
	0x03, 0x00, 0x29, 0xc0, 0x99, 0x95, 0x27, 0xff
};
static char ft8716_1080p_video_off_cmd_2[] = {
	0x28, 0x00, 0x05, 0x80
};
static char ft8716_1080p_video_off_cmd_3[] = {
	0x10, 0x00, 0x05, 0x80
};
static char ft8716_1080p_video_off_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_off_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0x99, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_off_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ft8716_1080p_video_off_cmd_7[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf7, 0x5a, 0xa5, 0x87,
	0x16, 0xff, 0xff, 0xff
};

static struct mipi_dsi_cmd ft8716_1080p_video_off_command[] = {
	{ sizeof(ft8716_1080p_video_off_cmd_0), ft8716_1080p_video_off_cmd_0, 0 },
	{ sizeof(ft8716_1080p_video_off_cmd_1), ft8716_1080p_video_off_cmd_1, 0 },
	{ sizeof(ft8716_1080p_video_off_cmd_2), ft8716_1080p_video_off_cmd_2, 20 },
	{ sizeof(ft8716_1080p_video_off_cmd_3), ft8716_1080p_video_off_cmd_3, 120 },
	{ sizeof(ft8716_1080p_video_off_cmd_4), ft8716_1080p_video_off_cmd_4, 0 },
	{ sizeof(ft8716_1080p_video_off_cmd_5), ft8716_1080p_video_off_cmd_5, 0 },
	{ sizeof(ft8716_1080p_video_off_cmd_6), ft8716_1080p_video_off_cmd_6, 0 },
	{ sizeof(ft8716_1080p_video_off_cmd_7), ft8716_1080p_video_off_cmd_7, 0 },
};

static struct command_state ft8716_1080p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info ft8716_1080p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info ft8716_1080p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration ft8716_1080p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t ft8716_1080p_video_timings[] = {
	0x7d, 0x25, 0x1d, 0x00, 0x37, 0x33, 0x22, 0x27, 0x1e, 0x03, 0x04, 0x00
};

static struct panel_timing ft8716_1080p_video_timing_info = {
	.tclk_post = 0x0d,
	.tclk_pre = 0x2d,
};

static struct panel_reset_sequence ft8716_1080p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 5, 10, 10 },
	.pin_direction = 2,
};

static struct backlight ft8716_1080p_video_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_ft8716_1080p_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &ft8716_1080p_video_panel_data;
	panel->panelres = &ft8716_1080p_video_panel_res;
	panel->color = &ft8716_1080p_video_color;
	panel->videopanel = &ft8716_1080p_video_video_panel;
	panel->commandpanel = &ft8716_1080p_video_command_panel;
	panel->state = &ft8716_1080p_video_state;
	panel->laneconfig = &ft8716_1080p_video_lane_config;
	panel->paneltiminginfo = &ft8716_1080p_video_timing_info;
	panel->panelresetseq = &ft8716_1080p_video_reset_seq;
	panel->backlightinfo = &ft8716_1080p_video_backlight;
	pinfo->mipi.panel_on_cmds = ft8716_1080p_video_on_command;
	pinfo->mipi.panel_off_cmds = ft8716_1080p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(ft8716_1080p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(ft8716_1080p_video_off_command);
	memcpy(phy_db->timing, ft8716_1080p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_FT8716_1080P_VIDEO_H_ */
