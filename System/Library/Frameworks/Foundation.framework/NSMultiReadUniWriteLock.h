/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setName:(id)arg1 ;
-(void)lockForReading;
-(BOOL)tryLockForReading;
-(BOOL)lockForReadingBeforeDate:(id)arg1 ;
-(void)lockForWriting;
-(BOOL)tryLockForWriting;
-(BOOL)lockForWritingBeforeDate:(id)arg1 ;
@end
