// Test for REST API docblocks - WIP

/**
 * @project Customers API
 * @file MAIN
 *
 * @brief This is the main file for the Customers REST API documentation
 *
 * This document describes the available endpoints, its input parameters
 * and the responses.
 *
 * It also describes the common HTTP codes in the responses.
 *
 * Parameters:
 * - GET: As a query parameter in the URL.
 * - POST: As a JSON object in the body.
 * - PUT: As a JSON object in the body.
 * - DELETE: As a JSON object in the body.
 *
 * Return values (if any):
 * - As a JSON object in the response.
 *
 * Common HTTP codes in the response:
 * - 200 OK: Success
 * - 400 Bad Request: Bad request syntax
 * - 401 Authorization Required: Unvalid or missing token
 * - 403 Forbidden: The token does not have permission for the operation
 * - 404 Not Found: The object does not exist
 *
 * @version 1.00
 * @author Miguel Garcia (FloppySoftware)
 * @date 14 May 2025
 */
 
 /**
  * @section Version
  *
  * @brief Version API in JSON format
  *
  * ```
{
  "version": "1.00"
}
  * ```
  *
  *
  */
  
  /**
  * @section Customer
  *
  * @brief Customer object in JSON format
  *
  * The id attribute is / must be present in already existent
  * objects only.
  *
  * ```
{
  "id": 120,
  "name": "John Smith",
  "address": "Park Av., 321A",
  "city": "New York",
  "country": "USA",
  "vat_number": "123456X"
}
  * ```
  *
  *
  */
 
#define JSON char *

/**
 * @fn GET /version
 *
 * @brief Return the API version
 *
 * @return 200_OK Version
 */
JSON getVersion()
{
	//
}

/**
 * @fn GET /customer?id={customerId}
 *
 * @brief Read a customer
 *
 * @param id Customer ID
 *
 * @return 200_OK Customer
 */
JSON getCustomer(id)
{
	//
}

/**
 * @fn POST /customer
 *
 * @brief Create a customer
 *
 * @param Customer
 *
 * @return 200_OK
 */
JSON createCustomer(JSON customer)
{
	//
}

/**
 * @fn PUT /customer
 *
 * @brief Update a customer
 *
 * @param Customer
 *
 * @return 200_OK
 */
JSON updateCustomer(JSON customer)
{
	//
}