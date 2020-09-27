/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DKReport : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _components;

}

@property (nonatomic,readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)reportWithComponents:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(id)initWithComponents:(id)arg1 ;
-(id)arrayForJSON;
-(id)reportByMergingReport:(id)arg1 ;
@end

