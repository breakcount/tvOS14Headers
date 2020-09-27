/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet;

@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding> {

	NSOrderedSet* _changes;

}

@property (nonatomic,readonly) NSOrderedSet * changes;              //@synthesize changes=_changes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffWithChanges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithChanges:(id)arg1 ;
-(NSOrderedSet *)changes;
@end

