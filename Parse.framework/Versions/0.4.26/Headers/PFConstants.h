// PFConstants.h
// Copyright 2011 Parse, Inc. All rights reserved.

#import <Foundation/Foundation.h>

// Version
#define PARSE_VERSION @"0.4.26"

extern NSInteger const PARSE_API_VERSION;

// Server
extern NSString *const kPFParseServer;

// Cache policies
typedef enum {
    kPFCachePolicyIgnoreCache = 0,
    kPFCachePolicyCacheOnly,
    kPFCachePolicyNetworkOnly,
    kPFCachePolicyCacheElseNetwork,
    kPFCachePolicyNetworkElseCache,
    kPFCachePolicyCacheThenNetwork
} PFCachePolicy;

// Errors

/*! @abstract 1: Internal server error. No information available. */
extern NSInteger const kPFErrorInternalServer;
/*! @abstract 100: The connection to the Parse servers failed. */
extern NSInteger const kPFErrorConnectionFailed;
/*! @abstract 101: Object doesn't exist, or has an incorrect password. */
extern NSInteger const kPFErrorObjectNotFound;
/*! @abstract 102: You tried to find values matching a datatype that doesn't support exact database matching, like an array or a dictionary. */
extern NSInteger const kPFErrorInvalidQuery;
/*! @abstract 103: Missing or invalid classname. Classnames are case-sensitive. They must start with a letter, and a-zA-Z0-9_ are the only valid characters. */
extern NSInteger const kPFErrorInvalidClassName;
/*! @abstract 104: Missing object id. */
extern NSInteger const kPFErrorMissingObjectId;
/*! @abstract 105: Invalid key name. Keys are case-sensitive. They must start with a letter, and a-zA-Z0-9_ are the only valid characters. */
extern NSInteger const kPFErrorInvalidKeyName;
/*! @abstract 106: Malformed pointer. Pointers must be arrays of a classname and an object id. */
extern NSInteger const kPFErrorInvalidPointer;
/*! @abstract 107: Malformed json object. A json dictionary is expected. */
extern NSInteger const kPFErrorInvalidJSON;
/*! @abstract 108: Tried to access a feature only available internally. */
extern NSInteger const kPFErrorCommandUnavailable;
/*! @abstract 111: Field set to incorrect type. */
extern NSInteger const kPFErrorIncorrectType;
/*! @abstract 112: Invalid channel name. A channel name is either an empty string (the broadcast channel) or contains only a-zA-Z0-9_ characters and starts with a letter. */
extern NSInteger const kPFErrorInvalidChannelName;
/*! @abstract 114: Invalid device token. */
extern NSInteger const kPFErrorInvalidDeviceToken;
/*! @abstract 115: Push is misconfigured. See details to find out how. */
extern NSInteger const kPFErrorPushMisconfigured;
/*! @abstract 116: The object is too large. */
extern NSInteger const kPFErrorObjectTooLarge;
/*! @abstract 119: That operation isn't allowed for clients. */
extern NSInteger const kPFErrorOperationForbidden;
/*! @abstract 120: The results were not found in the cache. */
extern NSInteger const kPFErrorCacheMiss;
/*! @abstract 121: Keys in NSDictionary values may not include '$' or '.'. */
extern NSInteger const kPFErrorInvalidNestedKey;
/*! @abstract 122: Invalid file name. A file name contains only a-zA-Z0-9_. characters and is between 1 and 36 characters. */
extern NSInteger const kPFErrorInvalidFileName;
/*! @abstract 123: Invalid ACL. An ACL with an invalid format was saved. This should not happen if you use PFACL. */
extern NSInteger const kPFErrorInvalidACL;
/*! @abstract 124: The request timed out on the server. Typically this indicates the request is too expensive. */
extern NSInteger const kPFErrorTimeout;
/*! @abstract 125: The email address was invalid. */
extern NSInteger const kPFErrorInvalidEmailAddress;

/*! @abstract 200: Username is missing or empty */
extern NSInteger const kPFErrorUsernameMissingError;
/*! @abstract 201: Password is missing or empty */
extern NSInteger const kPFErrorUserPasswordMissingError;
/*! @abstract 202: Username has already been taken */
extern NSInteger const kPFErrorUsernameTakenError;
/*! @abstract 203: Email has already been taken */
extern NSInteger const kPFErrorUserEmailTakenError;
/*! @abstract 204: The email is missing, and must be specified */
extern NSInteger const kPFErrorUserEmailMissing;
/*! @abstract 205: A user with the specified email was not found */
extern NSInteger const kPFErrorUserWithEmailNotFound;
/*! @abstract 206: The user cannot be altered by a client without the session. */
extern NSInteger const kPFErrorUserCannotBeAlteredWithoutSession;
/*! @abstract 207: Users can only be created through sign up */
extern NSInteger const kPFErrorUserCanOnlyBeCreatedThroughSignUp;
/*! @abstract 208: An existing Facebook account already linked to another user. */
extern NSInteger const kPFErrorFacebookAccountAlreadyLinked;
/*! @abstract 209: User ID mismatch */
extern NSInteger const kPFErrorUserIdMismatch;
/*! @abstract 250: Facebook id missing from request */
extern NSInteger const kPFErrorFacebookIdMissing;
/*! @abstract 251: Invalid Facebook session */
extern NSInteger const kPFErrorFacebookInvalidSession;

@class PFObject;
@class PFUser;

typedef void (^PFBooleanResultBlock)(BOOL succeeded, NSError *error);
typedef void (^PFIntegerResultBlock)(int number, NSError *error);
typedef void (^PFArrayResultBlock)(NSArray *objects, NSError *error);
typedef void (^PFObjectResultBlock)(PFObject *object, NSError *error);
typedef void (^PFSetResultBlock)(NSSet *channels, NSError *error);
typedef void (^PFUserResultBlock)(PFUser *user, NSError *error);
typedef void (^PFDataResultBlock)(NSData *data, NSError *error);
typedef void (^PFIdResultBlock)(id object, NSError *error);
