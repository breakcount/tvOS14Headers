/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNAsynchronousCacheEntryDelegate.h>

@class NSMutableArray, NSString;

@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate> {

	NSMutableArray* _observers;
	id _currentValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)cacheEntryDidUpdateValue:(id)arg1 ;
@end

