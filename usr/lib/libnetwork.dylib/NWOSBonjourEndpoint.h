/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_nw_txt_record;
@class NSObject;

@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {

	char* service_name;
	char* service_type;
	char* service_domain;
	char* service_composite;
	NSObject*<OS_nw_txt_record> txt_record;

}
-(void)dealloc;
-(id)copyDictionary;
-(unsigned)type;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)txtRecord;
-(void)setTxtRecord:(id)arg1 ;
@end

