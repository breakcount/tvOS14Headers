/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {

	CoreDAVBulkRequestsItem* _crudItem;
	CoreDAVBulkRequestsItem* _simpleItem;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVBulkRequestsItem * crudItem;                //@synthesize crudItem=_crudItem - In the implementation block
@property (nonatomic,retain) CoreDAVBulkRequestsItem * simpleItem;              //@synthesize simpleItem=_simpleItem - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(NSDictionary *)dictRepresentation;
-(CoreDAVBulkRequestsItem *)crudItem;
-(CoreDAVBulkRequestsItem *)simpleItem;
-(void)setCrudItem:(CoreDAVBulkRequestsItem *)arg1 ;
-(void)setSimpleItem:(CoreDAVBulkRequestsItem *)arg1 ;
@end

