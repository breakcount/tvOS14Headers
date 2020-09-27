/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SIRINLURequestID : NSObject <NSSecureCoding> {

	NSString* _idAsString;
	NSString* _connectionID;

}

@property (nonatomic,retain) NSString * idAsString;                //@synthesize idAsString=_idAsString - In the implementation block
@property (nonatomic,retain) NSString * connectionID;              //@synthesize connectionID=_connectionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)connectionID;
-(void)setConnectionID:(NSString *)arg1 ;
-(NSString *)idAsString;
-(id)initWithIdAsString:(id)arg1 connectionID:(id)arg2 ;
-(void)setIdAsString:(NSString *)arg1 ;
@end

