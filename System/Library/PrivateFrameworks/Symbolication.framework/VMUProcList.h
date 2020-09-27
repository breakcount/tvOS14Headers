/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMutableDictionary* allProcs;
	NSMutableDictionary* filteredProcs;
	BOOL appsOnly;
	BOOL ownedOnly;

}
-(id)init;
-(unsigned long long)count;
-(BOOL)update;
-(BOOL)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoWithName:(id)arg1 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(BOOL)arg1 ;
-(BOOL)ownedOnly:(BOOL)arg1 ;
-(void)setAppsOnly:(BOOL)arg1 ;
-(BOOL)appsOnly;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allNames;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)procInfoWithPID:(int)arg1 ;
@end

