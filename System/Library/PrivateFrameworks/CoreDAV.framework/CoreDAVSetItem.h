/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem {

	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItem * prop;              //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
@end

