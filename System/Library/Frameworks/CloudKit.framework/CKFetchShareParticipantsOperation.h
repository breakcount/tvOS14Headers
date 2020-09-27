/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchShareParticipantsOperationCallbacks.h>

@class NSArray, NSMutableSet, NSMutableDictionary, CKFetchShareParticipantsOperationInfo;

@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks> {

	/*^block*/id _shareParticipantFetchedBlock;
	/*^block*/id _fetchShareParticipantsCompletionBlock;
	NSArray* _userIdentityLookupInfos;
	NSMutableSet* _discoveredUserIdentities;
	NSMutableDictionary* _lookupErrors;

}

@property (nonatomic,retain) NSMutableSet * discoveredUserIdentities;                                                    //@synthesize discoveredUserIdentities=_discoveredUserIdentities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lookupErrors;                                                         //@synthesize lookupErrors=_lookupErrors - In the implementation block
@property (nonatomic,readonly) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchShareParticipantsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                                                            //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id shareParticipantFetchedBlock;                                                              //@synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock - In the implementation block
@property (nonatomic,copy) id fetchShareParticipantsCompletionBlock;                                                     //@synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setShareParticipantFetchedBlock:(id)arg1 ;
-(void)setFetchShareParticipantsCompletionBlock:(id)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)shareParticipantFetchedBlock;
-(id)fetchShareParticipantsCompletionBlock;
-(NSMutableSet *)discoveredUserIdentities;
-(NSMutableDictionary *)lookupErrors;
-(void)handleShareParticipantFetchForLookupInfo:(id)arg1 shareParticipant:(id)arg2 error:(id)arg3 ;
-(void)setDiscoveredUserIdentities:(NSMutableSet *)arg1 ;
-(void)setLookupErrors:(NSMutableDictionary *)arg1 ;
@end
