/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKEventStore, NSString;

@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKEventStore* _sharedEventStore;

}

@property (nonatomic,readonly) EKEventStore * sharedEventStore;              //@synthesize sharedEventStore=_sharedEventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(EKEventStore *)sharedEventStore;
-(id)initWithEventStore:(id)arg1 ;
@end
