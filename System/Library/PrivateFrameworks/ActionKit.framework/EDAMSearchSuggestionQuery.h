/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMNoteFilter;

@interface EDAMSearchSuggestionQuery : FATObject {

	NSString* _prefix;
	EDAMNoteFilter* _contextFilter;

}

@property (nonatomic,retain) NSString * prefix;                           //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * contextFilter;              //@synthesize contextFilter=_contextFilter - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(EDAMNoteFilter *)contextFilter;
-(void)setContextFilter:(EDAMNoteFilter *)arg1 ;
@end

