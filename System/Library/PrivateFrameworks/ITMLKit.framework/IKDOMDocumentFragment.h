/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMParentNode.h>

@class IKDOMHTMLCollection, IKDOMElement;

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
-(IKDOMHTMLCollection *)children;
-(long long)nodeType;
-(id)nodeName;
-(IKDOMElement *)firstElementChild;
-(IKDOMElement *)lastElementChild;
-(unsigned long long)childElementCount;
@end

