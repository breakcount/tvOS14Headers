/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DEMultipartWriter : NSObject <DEWriter> {

	BOOL _partClosed;
	NSObject*<DEWriter> _writer;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) BOOL partClosed;                         //@synthesize partClosed=_partClosed - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(NSObject*<DEWriter>)writer;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(void)closeMessage;
-(void)newPart;
-(BOOL)partClosed;
-(void)setPartClosed:(BOOL)arg1 ;
@end

