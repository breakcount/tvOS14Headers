/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVDataValueTransformer.h>

@class NSData;

@interface AVAirMessageTransformer : AVDataValueTransformer {

	NSData* _previousUnusedData;
	Class _messageClass;

}

@property (nonatomic,readonly) Class messageClass;              //@synthesize messageClass=_messageClass - In the implementation block
-(void)resetState;
-(Class)messageClass;
-(id)initWithMessageClass:(Class)arg1 ;
-(id)dataForMessage:(id)arg1 ;
-(id)reverseTransformerForMessageData:(id)arg1 ;
@end
