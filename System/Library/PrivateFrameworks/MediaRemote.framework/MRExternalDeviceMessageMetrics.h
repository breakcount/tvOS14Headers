/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {

	NSString* _path;
	NSMutableDictionary* _entries;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)write;
-(void)addMessage:(id)arg1 data:(id)arg2 ;
@end
