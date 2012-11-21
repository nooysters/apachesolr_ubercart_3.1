<?php
module_load_include('inc','facetapi','plugins/facetapi/widget');

/**
	* Create child class for price widget
	*/ 
class apachesolrUbercartFacetapiWidgetPrice extends FacetapiWidget {
   /**
   * Renders the form.
   */
  public function execute() {
    $elements = &$this->build[$this->facet['field alias']];
    $elements = drupal_get_form('apachesolr_ubercart_facetapi_price', $elements);
  }
}