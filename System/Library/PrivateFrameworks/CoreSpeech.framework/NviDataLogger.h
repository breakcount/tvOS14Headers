/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate> {

	NSOutputStream* _oStream;

}

@property (nonatomic,retain) NSOutputStream * oStream;              //@synthesize oStream=_oStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)logData:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 appendHdr:(id)arg2 ;
-(void)endRequest;
-(NSOutputStream *)oStream;
-(void)setOStream:(NSOutputStream *)arg1 ;
@end

