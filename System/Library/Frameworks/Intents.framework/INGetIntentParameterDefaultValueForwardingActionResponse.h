/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse {

	NSData* _archivedDefaultValue;

}

@property (nonatomic,readonly) NSData * archivedDefaultValue;              //@synthesize archivedDefaultValue=_archivedDefaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithArchivedDefaultValue:(id)arg1 error:(id)arg2 ;
-(NSData *)archivedDefaultValue;
@end
