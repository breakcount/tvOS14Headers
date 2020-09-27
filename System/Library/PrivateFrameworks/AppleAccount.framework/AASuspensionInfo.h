/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {

	NSDictionary* _suspensionInfoDictionary;

}

@property (getter=isiCloudSuspended,nonatomic,readonly) BOOL iCloudSuspended; 
@property (getter=isFamilySuspended,nonatomic,readonly) BOOL familySuspended; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isiCloudSuspended;
-(BOOL)isFamilySuspended;
@end

