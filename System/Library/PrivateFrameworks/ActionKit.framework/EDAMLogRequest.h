/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class EDAMSearchRecord;

@interface EDAMLogRequest : FATObject {

	EDAMSearchRecord* _searchRecord;

}

@property (nonatomic,retain) EDAMSearchRecord * searchRecord;              //@synthesize searchRecord=_searchRecord - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMSearchRecord *)searchRecord;
-(void)setSearchRecord:(EDAMSearchRecord *)arg1 ;
@end

