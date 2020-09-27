/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying> {

	int _shiftState;
	NSUUID* _UUID;
	TIDocumentState* _documentState;

}

@property (nonatomic,readonly) NSUUID * UUID;                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) TIDocumentState * documentState;              //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,readonly) int shiftState;                               //@synthesize shiftState=_shiftState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenForKeyboardState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initForKeyboardState:(id)arg1 ;
-(BOOL)isSameRequestAs:(id)arg1 ;
-(id)shortIdentifier;
-(TIDocumentState *)documentState;
-(int)shiftState;
@end

