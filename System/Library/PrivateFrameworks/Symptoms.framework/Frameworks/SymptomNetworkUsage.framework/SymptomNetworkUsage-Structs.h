/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct update_subset_for_deltas {
	unsigned long long savedRxPackets;
	unsigned long long savedRxBytes;
	unsigned long long savedTxPackets;
	unsigned long long savedTxBytes;
	unsigned long long savedRxCellularBytes;
	unsigned long long savedRxWiFiBytes;
	unsigned long long savedRxWiredBytes;
	unsigned long long savedTxCellularBytes;
	unsigned long long savedTxWiFiBytes;
	unsigned long long savedTxWiredBytes;
	unsigned savedRxDuplicateBytes;
	unsigned savedRxOutOfOrderBytes;
	unsigned savedTxRetransmittedBytes;
} update_subset_for_deltas;

typedef struct nstat_msg_hdr {
	unsigned long long context;
	unsigned type;
	unsigned short length;
	unsigned short flags;
} nstat_msg_hdr;

typedef struct nstat_counts {
	unsigned long long nstat_rxpackets;
	unsigned long long nstat_rxbytes;
	unsigned long long nstat_txpackets;
	unsigned long long nstat_txbytes;
	unsigned long long nstat_cell_rxbytes;
	unsigned long long nstat_cell_txbytes;
	unsigned long long nstat_wifi_rxbytes;
	unsigned long long nstat_wifi_txbytes;
	unsigned long long nstat_wired_rxbytes;
	unsigned long long nstat_wired_txbytes;
	unsigned nstat_rxduplicatebytes;
	unsigned nstat_rxoutoforderbytes;
	unsigned nstat_txretransmit;
	unsigned nstat_connectattempts;
	unsigned nstat_connectsuccesses;
	unsigned nstat_min_rtt;
	unsigned nstat_avg_rtt;
	unsigned nstat_var_rtt;
} nstat_counts;

typedef struct activity_bitmap {
	unsigned long long start;
	unsigned long long bitmap[2];
} activity_bitmap;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	/*function pointer*/void* __u6_addr;
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} in6_addr;

typedef struct tcp_conn_status {
	unsigned probe_activated : 1;
	unsigned write_probe_failed : 1;
	unsigned read_probe_failed : 1;
	unsigned conn_probe_failed : 1;
} tcp_conn_status;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct nstat_tcp_descriptor {
	unsigned long long upid;
	unsigned long long eupid;
	unsigned long long start_timestamp;
	unsigned long long timestamp;
	unsigned long long rx_transfer_size;
	unsigned long long tx_transfer_size;
	activity_bitmap activity_bitmap;
	unsigned ifindex;
	unsigned state;
	unsigned sndbufsize;
	unsigned sndbufused;
	unsigned rcvbufsize;
	unsigned rcvbufused;
	unsigned txunacked;
	unsigned txwindow;
	unsigned txcwindow;
	unsigned traffic_class;
	unsigned traffic_mgt_flags;
	unsigned pid;
	unsigned epid;
	/*function pointer*/void* local;
	sockaddr_in v4;
	sockaddr_in6) v6;
	/*function pointer*/void* remote;
	sockaddr_in v4;
	sockaddr_in6) v6;
	char cc_algo[16];
	char pname[64];
	unsigned char uuid[16];
	unsigned char euuid[16];
	unsigned char vuuid[16];
	unsigned char fuuid[16];
	/*function pointer*/void* ;
	tcp_conn_status connstatus;
	unsigned char __pad_connstatus[4];
	unsigned short ifnet_properties;
	unsigned char reserved[6];
} nstat_tcp_descriptor;

typedef struct updater_nstat_msg_src_update_tcp {
	nstat_msg_hdr hdr;
	unsigned long long srcref;
	unsigned long long event_flags;
	nstat_counts counts;
	unsigned provider;
	unsigned char reserved[4];
	nstat_tcp_descriptor tcp_desc;
} updater_nstat_msg_src_update_tcp;

typedef struct nstat_udp_descriptor {
	unsigned long long upid;
	unsigned long long eupid;
	unsigned long long start_timestamp;
	unsigned long long timestamp;
	activity_bitmap activity_bitmap;
	/*function pointer*/void* local;
	sockaddr_in v4;
	sockaddr_in6) v6;
	/*function pointer*/void* remote;
	sockaddr_in v4;
	sockaddr_in6) v6;
	unsigned ifindex;
	unsigned rcvbufsize;
	unsigned rcvbufused;
	unsigned traffic_class;
	unsigned pid;
	char pname[64];
	unsigned epid;
	unsigned char uuid[16];
	unsigned char euuid[16];
	unsigned char vuuid[16];
	unsigned char fuuid[16];
	unsigned short ifnet_properties;
	unsigned char reserved[6];
} nstat_udp_descriptor;

typedef struct updater_nstat_msg_src_update_udp {
	nstat_msg_hdr hdr;
	unsigned long long srcref;
	unsigned long long event_flags;
	nstat_counts counts;
	unsigned provider;
	unsigned char reserved[4];
	nstat_udp_descriptor udp_desc;
} updater_nstat_msg_src_update_udp;

typedef struct updater_nstat_msg_src_update_quic {
	nstat_msg_hdr hdr;
	unsigned long long srcref;
	unsigned long long event_flags;
	nstat_counts counts;
	unsigned provider;
	unsigned char reserved[4];
	nstat_tcp_descriptor quic_desc;
} updater_nstat_msg_src_update_quic;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct nstat_ifnet_desc_cellular_status {
	unsigned valid_bitmask;
	unsigned link_quality_metric;
	unsigned ul_effective_bandwidth;
	unsigned ul_max_bandwidth;
	unsigned ul_min_latency;
	unsigned ul_effective_latency;
	unsigned ul_max_latency;
	unsigned ul_retxt_level;
	unsigned ul_bytes_lost;
	unsigned ul_min_queue_size;
	unsigned ul_avg_queue_size;
	unsigned ul_max_queue_size;
	unsigned dl_effective_bandwidth;
	unsigned dl_max_bandwidth;
	unsigned config_inactivity_time;
	unsigned config_backoff_time;
	unsigned short mss_recommended;
	unsigned char reserved[2];
} nstat_ifnet_desc_cellular_status;

typedef struct nstat_ifnet_desc_wifi_status {
	unsigned valid_bitmask;
	unsigned link_quality_metric;
	unsigned ul_effective_bandwidth;
	unsigned ul_max_bandwidth;
	unsigned ul_min_latency;
	unsigned ul_effective_latency;
	unsigned ul_max_latency;
	unsigned ul_retxt_level;
	unsigned ul_bytes_lost;
	unsigned ul_error_rate;
	unsigned dl_effective_bandwidth;
	unsigned dl_max_bandwidth;
	unsigned dl_min_latency;
	unsigned dl_effective_latency;
	unsigned dl_max_latency;
	unsigned dl_error_rate;
	unsigned config_frequency;
	unsigned config_multicast_rate;
	unsigned scan_count;
	unsigned scan_duration;
} nstat_ifnet_desc_wifi_status;

typedef struct nstat_sysinfo_descriptor {
	unsigned flags;
} nstat_sysinfo_descriptor;

typedef struct nstat_ifnet_desc_link_status {
	unsigned link_status_type;
	/*function pointer*/void* u;
	nstat_ifnet_desc_cellular_status cellular;
	nstat_ifnet_desc_wifi_status) wifi;
} nstat_ifnet_desc_link_status;

typedef struct nstat_ifnet_descriptor {
	unsigned long long threshold;
	unsigned ifindex;
	nstat_ifnet_desc_link_status link_status;
	unsigned type;
	char description[128];
	char name[17];
	unsigned char reserved[3];
} nstat_ifnet_descriptor;

typedef struct nstat_route_descriptor {
	unsigned long long id;
	unsigned long long parent_id;
	unsigned long long gateway_id;
	/*function pointer*/void* dst;
	sockaddr_in v4;
	sockaddr_in6 v6;
	sockaddr) sa;
	/*function pointer*/void* mask;
	sockaddr_in v4;
	sockaddr_in6 v6;
	sockaddr) sa;
	/*function pointer*/void* gateway;
	sockaddr_in v4;
	sockaddr_in6 v6;
	sockaddr) sa;
	unsigned ifindex;
	unsigned flags;
	unsigned char reserved[4];
} nstat_route_descriptor;

typedef struct nstat_msg_src_update_hdr {
	nstat_msg_hdr hdr;
	unsigned long long srcref;
	unsigned long long event_flags;
	nstat_counts counts;
	unsigned provider;
	unsigned char reserved[4];
} nstat_msg_src_update_hdr;

typedef struct nstat_msg_src_update_convenient {
	nstat_msg_src_update_hdr hdr;
	/*function pointer*/void* ;
	nstat_tcp_descriptor tcp;
	nstat_udp_descriptor udp;
	nstat_route_descriptor route;
	nstat_ifnet_descriptor ifnet;
	nstat_sysinfo_descriptor sysinfo;
	nstat_tcp_descriptor) quic;
} nstat_msg_src_update_convenient;

