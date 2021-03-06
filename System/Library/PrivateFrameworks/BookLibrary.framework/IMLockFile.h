/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	BOOL _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
-(void)dealloc;
-(void)unlock;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)locked;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lockWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
@end

