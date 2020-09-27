/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSTextCheckingResult;

@interface PRTypologyCandidate : NSObject {

	NSString* _candidateString;
	NSRange _selectedRange;
	NSTextCheckingResult* _result;
	double _openTime;
	double _closeTime;
	BOOL _isOpen;

}
+(id)openTypologyCandidate:(id)arg1 selectedRange:(NSRange)arg2 inString:(id)arg3 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)closeTypologyCandidateWithResult:(id)arg1 ;
@end

