/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	CoreDAVResponseItem* _responseItem;

}

@property (nonatomic,retain) CoreDAVResponseItem * responseItem;              //@synthesize responseItem=_responseItem - In the implementation block
-(void)startTaskGroup;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(CoreDAVResponseItem *)responseItem;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)_proppatchAfterFailureCount:(unsigned long long)arg1 ;
@end

