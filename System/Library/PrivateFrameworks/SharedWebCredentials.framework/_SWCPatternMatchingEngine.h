/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
@class _SWCPatternList, _SWCSubstitutionVariableList;

@interface _SWCPatternMatchingEngine : NSObject {

	_SWCPatternList* _patternList;
	_SWCSubstitutionVariableList* _subVarList;

}
+(id)new;
-(id)init;
-(id)initWithPatternDictionaries:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)_evaluateURLComponents:(id)arg1 auditToken:(const SCD_Struct_SW0*)arg2 ;
-(id)initWithPatternDictionaries:(id)arg1 ;
-(id)evaluateURLComponents:(id)arg1 ;
-(id)evaluateURLComponents:(id)arg1 auditToken:(SCD_Struct_SW0)arg2 ;
@end

