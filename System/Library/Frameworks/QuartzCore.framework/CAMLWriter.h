/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLWriterDelegate> delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id<CAMLWriterDelegate>)delegate;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(NSURL *)baseURL;
-(void)encodeObject:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)endElement;
-(void)beginPropertyElement:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setElementContent:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
@end

