#pragma once

#define IDS_USAGE 0
#define IDS_DISPLAY_THEADER   1
#define IDS_DISPLAY_PROCESS   2
#define IDS_ACTIVE_CONNECT    3
#define IDS_IP4_STAT_HEADER   4
#define IDS_ICMP4_STAT_HEADER 5
#define IDS_ICMP_THEADER      6
#define IDS_TCP4_HEADER       7

#define IDS_ERROR_WSA_START          10
#define IDS_ERROR_ROUTE              11
#define IDS_ERROR_TCP_SNAPSHOT       12
#define IDS_ERROR_UDP_ENDPOINT       13
#define IDS_ERROR_UDP_ENDPOINT_TABLE 14

#define IDS_IP_PACK_REC            20
#define IDS_IP_HEAD_REC_ERROR      21
#define IDS_IP_ADDR_REC_ERROR      22
#define IDS_IP_DATAG_FWD           23
#define IDS_IP_UNKNOWN_PRO_REC     24
#define IDS_IP_REC_PACK_DISCARD    25
#define IDS_IP_REC_PACK_DELIVER    26
#define IDS_IP_OUT_REQUEST         27
#define IDS_IP_ROUTE_DISCARD       28
#define IDS_IP_DISCARD_OUT_PACK    29
#define IDS_IP_OUT_PACKET_NO_ROUTE 30
#define IDS_IP_REASSEMBLE_REQUIRED 31
#define IDS_IP_REASSEMBLE_SUCCESS  32
#define IDS_IP_REASSEMBLE_FAILURE  33
#define IDS_IP_DATAG_FRAG_SUCCESS  34
#define IDS_IP_DATAG_FRAG_FAILURE  35
#define IDS_IP_DATAG_FRAG_CREATE   36

#define IDS_ICMP_MSG                 50
#define IDS_ICMP_ERROR               51
#define IDS_ICMP_DEST_UNREACH        52
#define IDS_ICMP_TIME_EXCEED         53
#define IDS_ICMP_PARAM_PROBLEM       54
#define IDS_ICMP_SRC_QUENCHES        55
#define IDS_ICMP_REDIRECT            56
#define IDS_ICMP_ECHO                57
#define IDS_ICMP_ECHO_REPLY          58
#define IDS_ICMP_TIMESTAMP           59
#define IDS_ICMP_TIMESTAMP_REPLY     60
#define IDS_ICMP_ADDRESSS_MASK       61
#define IDS_ICMP_ADDRESSS_MASK_REPLY 62

#define IDS_TCP_ACTIVE_OPEN     80
#define IDS_TCP_PASS_OPEN       81
#define IDS_TCP_FAIL_CONNECT    82
#define IDS_TCP_RESET_CONNECT   83
#define IDS_TCP_CURRENT_CONNECT 84
#define IDS_TCP_SEG_RECEIVE     85
#define IDS_TCP_SEG_SENT        86
#define IDS_TCP_SEG_RETRANSMIT  87

#define IDS_UDP_IP4_HEADER    90
#define IDS_UDP_DATAG_RECEIVE 91
#define IDS_UDP_NO_PORT       92
#define IDS_UDP_RECEIVE_ERROR 93
#define IDS_UDP_DATAG_SEND    94

#define IDS_ETHERNET_INTERFACE_STAT     100
#define IDS_ETHERNET_THEADER            101
#define IDS_ETHERNET_BYTES              102
#define IDS_ETHERNET_UNICAST_PACKET     103
#define IDS_ETHERNET_NON_UNICAST_PACKET 104
#define IDS_ETHERNET_DISCARD            105
#define IDS_ETHERNET_ERROR              106
#define IDS_ETHERNET_UNKNOWN            107
