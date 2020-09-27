/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/nw_listener_inbox.h>

@protocol OS_nw_fd_wrapper;
@class NSObject;

@interface nw_listener_inbox_socket : nw_listener_inbox {

	void* _source;
	NSObject*<OS_nw_fd_wrapper> _sockfd_wrapper_for_connection_group_only;
	int _sockfd_for_logging_only_do_not_close_or_use;
	int _sockfd_from_client;
	unsigned char _ipProtocol;
	unsigned char _listenUUID[16];

}
-(id)description;
-(BOOL)cancel;
-(BOOL)resume;
-(BOOL)suspend;
-(id)start;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
@end

