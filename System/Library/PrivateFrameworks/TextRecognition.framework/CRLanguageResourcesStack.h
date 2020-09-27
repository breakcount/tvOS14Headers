/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSString, NSObject, NSMutableSet;

@interface CRLanguageResourcesStack : NSObject {

	long long _totalResources;
	NSMutableArray* _availableResources;
	NSString* _localeIdentifier;
	NSObject*<OS_dispatch_semaphore> _resourceCountSemaphore;
	NSMutableSet* _subscribers;

}

@property (assign) long long totalResources;                                             //@synthesize totalResources=_totalResources - In the implementation block
@property (retain) NSMutableArray * availableResources;                                  //@synthesize availableResources=_availableResources - In the implementation block
@property (retain) NSString * localeIdentifier;                                          //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> resourceCountSemaphore;              //@synthesize resourceCountSemaphore=_resourceCountSemaphore - In the implementation block
@property (retain) NSMutableSet * subscribers;                                           //@synthesize subscribers=_subscribers - In the implementation block
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(NSMutableSet *)subscribers;
-(void)addSubscriber:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(long long)subscriberCount;
-(void)setSubscribers:(NSMutableSet *)arg1 ;
-(void)setAvailableResources:(NSMutableArray *)arg1 ;
-(void)setTotalResources:(long long)arg1 ;
-(void)setResourceCountSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSMutableArray *)availableResources;
-(long long)totalResources;
-(NSObject*<OS_dispatch_semaphore>)resourceCountSemaphore;
-(id)popResource;
-(void)pushResource:(id)arg1 ;
-(BOOL)hasSubscriber:(id)arg1 ;
@end

