/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(id)initWithProcessIdentifier:(int)arg1 ;
-(void)_populateResultWithLockWitness:(id)arg1 ;
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
@end

