# FAQ

## Which providers are supported?

Anything OpenAI-compatible plus native Anthropic and Gemini — 12 providers out of the box.

## Are keys uploaded anywhere?

No. The pool lives in a local SQLite file with 0600 permissions.

## What happens when all keys are rate-limited?

The proxy queues the request and retries automatically with backoff.
