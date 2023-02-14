/**
* Tries to match the path with the regular expression and
* extracts all arguments for the Route action
*
* @param string $pattern
* @param string $path
* @return array|false
*/
public function parse(string $pattern, string $path)
{
    // check for direct matches
    if ($pattern === $path) {
        return $this->arguments = [];
    }

    // We only need to check routes with regular expression since all others
    // would have been able to be matched by the search for literal matches
    // we just did before we started searching.
    if (strpos($pattern, '(') === false) {
        return false;
    }

    // If we have a match we'll return all results
    // from the preg without the full first match.
    if (preg_match('#^' . $this->regex($pattern) . '$#u', $path, $parameters)) {
        return $this->arguments = array_slice($parameters, 1);
    }

    return false;
}