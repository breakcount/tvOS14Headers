/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase {

	NSDictionary* _identifierToZoneMap;

}

@property (nonatomic,readonly) NSDictionary * identifierToZoneMap;              //@synthesize identifierToZoneMap=_identifierToZoneMap - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)_zoneManager;
-(id)_zoneIdentifierForOperation:(id)arg1 ;
-(NSDictionary *)identifierToZoneMap;
@end
