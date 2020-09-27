/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)commonName;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
@end

