/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSHashTable, ACAccountStore;

@interface HFMediaDispatcher : NSObject {

	NSArray* _appleMusicMagicAuthCapableAccounts;
	NSHashTable* _appleMusicAccountObservers;

}

@property (nonatomic,retain) NSHashTable * appleMusicAccountObservers;                //@synthesize appleMusicAccountObservers=_appleMusicAccountObservers - In the implementation block
@property (nonatomic,copy) NSArray * appleMusicMagicAuthCapableAccounts;              //@synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts - In the implementation block
@property (nonatomic,readonly) ACAccountStore * appleMusicAccountStore; 
@property (nonatomic,readonly) BOOL isUsingiCloud; 
+(id)sharedDispatcher;
-(id)init;
-(void)_setupAppleMusicAccountStoreIfNecessary;
-(NSHashTable *)appleMusicAccountObservers;
-(ACAccountStore *)appleMusicAccountStore;
-(void)addAppleMusicAccountObserver:(id)arg1 ;
-(void)removeAppleMusicAccountObserver:(id)arg1 ;
-(BOOL)isUsingiCloud;
-(NSArray *)appleMusicMagicAuthCapableAccounts;
-(void)setAppleMusicMagicAuthCapableAccounts:(NSArray *)arg1 ;
-(void)setAppleMusicAccountObservers:(NSHashTable *)arg1 ;
@end

