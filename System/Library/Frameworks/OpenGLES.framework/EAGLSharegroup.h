/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString;

@interface EAGLSharegroup : NSObject {

	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;

}

@property (nonatomic,copy) NSString * debugLabel; 
-(id)init;
-(void)dealloc;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(unsigned long long)APIs;
-(void)setDebugLabel:(NSString *)arg1 ;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(NSString *)debugLabel;
-(void)loadGLIPlugin:(_GLDPixelFormatRec*)arg1 sharedWithCompute:(BOOL)arg2 ;
-(GLISharedRecRef)getGLIShared;
@end

